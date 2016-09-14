using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour 
{
	[HideInInspector]
	public bool facingRight = true;
	[HideInInspector]
	public bool jump = false;
	public float jumpForce = 360f;

	private bool grounded = false;
	private Transform groundCheck;

	public float moveForce = 365f;// 此变量设置添加的刚体力的大小
	public float maxSpeed = 5f; // max speed 

	public JoyStickerController moveJoysticker;
	public JumpButton jumpButton;

	private Rigidbody2D rigidbody2D;
	private Transform camTransform;


	private Animator anim;

	void Awake()
	{
		groundCheck = transform.Find ("groundCheck");
		rigidbody2D = GetComponent<Rigidbody2D> ();
		jumpButton = GetComponent<JumpButton> ();

	}

	void Update()
	{
		grounded = Physics2D.Linecast (transform.position, groundCheck.position, 1 << LayerMask.NameToLayer ("Ground"));
		Debug.DrawLine (transform.position, groundCheck.position, Color.yellow, 1f);
		Debug.Log (grounded);
		if (Input.GetButtonDown ("Jump") && grounded) {
			jump = true;
		}
		if (jumpButton.is_Press && grounded) {
			jump = true;
		}
	}


	void FixedUpdate()
	{
		//h是在-1到+1的范围
		float h = Input.GetAxis ("Horizontal");
		if (moveJoysticker.InputDirection != Vector3.zero) {
			h = moveJoysticker.InputDirection.x;
		}
	

		if (h > 0 && !facingRight) {
			Flip ();
		} else if (h < 0 && facingRight) {
			Flip ();
		}

		if (h * rigidbody2D.velocity.x < maxSpeed) {
			rigidbody2D.AddForce (Vector2.right * h * moveForce);

		}
		if(Mathf.Abs(rigidbody2D.velocity.x) > maxSpeed)
		{
			rigidbody2D.velocity = new Vector2 (Mathf.Sign (rigidbody2D.velocity.x) * maxSpeed, rigidbody2D.velocity.y);
		}
		if (jump) {
			rigidbody2D.AddForce (new Vector2 (0f, jumpForce));
			jump = false;
			jumpButton.is_Press = false;
			Debug.Log ("jump");
		}

	}

	void Flip()
	{
		facingRight = !facingRight;
		Vector3 theScale = transform.localScale;
		theScale.x *= -1;
		transform.localScale = theScale;
	}






	// Use this for initialization
	void Start () {

	}


}
