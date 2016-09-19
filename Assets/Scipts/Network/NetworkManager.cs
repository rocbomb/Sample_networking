using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class NetworkManager : MonoBehaviour {

	private const string VERSION = "v0.0.1"; 
	public string roomName = "room";
	public string playerPrefabName = "player";
	public Transform spawnPoint;
	public Text name;
	// Use this for initialization

	void Start () {
		//		PhotonNetwork.ConnectUsingSettings (VERSION);
		Connect();
	}


	void Connect () {
		PhotonNetwork.ConnectUsingSettings (VERSION);
	}

	void OnGUI () {
		GUILayout.Label (PhotonNetwork.connectionStateDetailed.ToString ());
	}

	void OnJoinedLobby () {
		//		RoomOptions roomOptions = new RoomOptions () { IsVisible = false, MaxPlayers = 4 };
		//		PhotonNetwork.JoinOrCreateRoom (roomName, roomOptions, TypedLobby.Default);
		Debug.Log("OnJoinedLobby");
		PhotonNetwork.JoinRandomRoom ();
	}

	void OnPhotonRandomJoinFailed(){
		Debug.Log ("OnPhotonRandomJoinFailed");
		PhotonNetwork.CreateRoom (null);
	}

	void OnJoinedRoom () {
		Debug.Log("OnJoinedRoom");

		SpawnPlayer ();
	}

	void SpawnPlayer () {
		GameObject myPlayer = (GameObject)PhotonNetwork.Instantiate (playerPrefabName, spawnPoint.position, spawnPoint.rotation, 0);
		myPlayer.GetComponent<PlayerController> ().enabled = true;
		name.text = "haha";
	}
}
