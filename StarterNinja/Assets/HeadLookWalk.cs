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
		
			//controller.SimpleMove(Camera.main.transform.forward * velocity);
		Camera cam = GameObject.FindWithTag("Main.Camera").GetComponent<Camera>();
		Vector3 moveDirection = cam.transform.forward;
		moveDirection *= velocity * Time.deltaTime;
		moveDirection.y = 0.0f;
		Debug.Log (moveDirection);
		cam.transform.position += moveDirection;
		//controller.Move(moveDirection);

		GameObject Button = GameObject.Find("Button");
		if (GameObject.Find ("Button") != null) {
			Vector3 pos = Button.transform.forward;
			pos *= velocity * Time.deltaTime;
			pos.y = 0.0f;
			Button.transform.position = pos;
			Debug.Log ("foundButton");
			Debug.Log (pos);
		}
	}
}
