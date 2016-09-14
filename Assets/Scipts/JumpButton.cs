using UnityEngine;
using System.Collections;

public class JumpButton : MonoBehaviour {

	public bool is_Press = false;

	public void press(){
		is_Press = true;
		Debug.Log ("press");
	}

}
