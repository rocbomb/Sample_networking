using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class NetworkManager : MonoBehaviour {

	private const string VERSION = "v0.0.1"; 
	public string roomName = "room";
	public string playerPrefabName = "player";
	public Transform spawnPoint;
	// Use this for initialization

	public string baseName = "YOU";
	private int playerNum = 1;
	public Text playerName;

	void Start () {
		//		PhotonNetwork.ConnectUsingSettings (VERSION);
		Connect();
	}


	void Connect () {
		if (playerName != null) {
			playerName.enabled = false;
		}
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
	

	}
}
