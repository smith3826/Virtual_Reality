using UnityEngine;
using System.Collections;

public class HeadLookWalk : MonoBehaviour {
	public float velocity = 0.7f;
	private Camera camera;
	public bool isWalking = false;
	//private CharacterController controller;


	// Use this for initialization
	//void Start () {
	//	controller = GetComponent<CharacterController> ();
	//}

	// Update is called once per frame
	void Update () {
		GameController _gameController = this.GetComponent<GameController> ();
//		if (_gameController.isGameOver != null && _gameController.isGameOver) {
//			return;
//		}

		Camera cam = GameObject.FindWithTag ("Main.Camera").GetComponent<Camera> ();
		Vector3 moveDirection = cam.transform.forward;
		moveDirection *= velocity * Time.deltaTime;
		moveDirection.y = 0.0f;
		cam.transform.position += moveDirection;

		GameController gameController = FindObjectOfType<GameController> ();
		if (gameController.VRGameOverCanvas.isActiveAndEnabled) {
			gameController.VRGameOverCanvas.transform.position = cam.transform.position + cam.transform.forward * 2.0f;
			gameController.VRGameOverCanvas.transform.rotation = new Quaternion (0.0f, cam.transform.rotation.y, 0.0f, cam.transform.rotation.w);
		}

		if (gameController.gameOverCanvas.isActiveAndEnabled) {
			gameController.gameOverCanvas.transform.position = cam.transform.position + cam.transform.forward * 2.0f;
			gameController.gameOverCanvas.transform.rotation = new Quaternion (0.0f, cam.transform.rotation.y, 0.0f, cam.transform.rotation.w);
		}
	
	}
}
