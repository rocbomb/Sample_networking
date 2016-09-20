using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class PlayerController : Photon.MonoBehaviour 
{
	[HideInInspector]
	public bool facingRight = true;
	[HideInInspector]
	public bool jump = false;
	public float jumpForce = 360f;

	private bool grounded = false;
	private Transform groundCheck;

	public float moveForce = 365f;// 
	public float maxSpeed = 5f; // max speed 

	public JoyStickerController moveJoysticker;
	public JumpButton jumpButton;

	private Rigidbody2D rigidbody2D;
	private Transform camTransform;

	private Animator anim;

	public string baseName = "YOU";
	private int playerNum = 1;
	public Text playerName;

	public PhotonView photonView;


	void Awake()
	{
		groundCheck = transform.Find ("groundCheck");
		rigidbody2D = GetComponent<Rigidbody2D> ();
		jumpButton = GetComponent<JumpButton> ();
		photonView = GetComponent<PhotonView> ();
		Debug.Log (jumpButton);
		moveJoysticker = GameObject.Find("JoystickerContainer").GetComponent<JoyStickerController> (); 

		if (!photonView.isMine) {
			GetComponent<SpriteRenderer> ().color = Color.red;
            GetComponent<Rigidbody2D>().gravityScale = 0;
        }
	}

	void Update()
	{
		grounded = Physics2D.Linecast (transform.position, groundCheck.position, 1 << LayerMask.NameToLayer ("Ground"));
//		Debug.DrawLine (transform.position, groundCheck.position, Color.yellow, 1f);
//		Debug.Log (grounded);
		if (Input.GetButtonDown ("Jump") && grounded) {
			jump = true;
		}
		if (jumpButton.is_Press && grounded) {
			jump = true;
			Debug.Log ("asddsaasd jumppppppp");
		}
	}


	void FixedUpdate()
	{
		//h是在-1到+1的范围
		float h = Input.GetAxis ("Horizontal");
		Debug.Log (moveJoysticker.InputDirection);
		if (moveJoysticker.InputDirection != Vector3.zero) {
			h = moveJoysticker.InputDirection.x;
			Debug.Log ("horizontal :"+h);
			if (moveJoysticker.InputDirection.z > 0) {
				jumpForce = 360f;
				jumpForce = jumpForce * moveJoysticker.InputDirection.z * moveJoysticker.InputDirection.z;
				jump = true;
			}
		}


		if (h > 0 && !facingRight) {
			Flip ();
		} else if (h < 0 && facingRight) {
			Flip ();
		}

		if (h * rigidbody2D.velocity.x < maxSpeed) {
			rigidbody2D.AddForce (Vector2.right * h * moveForce);
//			Debug.Log ("moveeee");
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
		playerName.text = baseName;
		playerNum++;
	}


}
