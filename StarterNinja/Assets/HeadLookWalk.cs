using UnityEngine;
using System.Collections;

public class HeadLookWalk : MonoBehaviour {
	public float velocity = 0.7f;
	public bool isWalking = false;
//	private CharacterController controller;


	// Use this for initialization
/*	void Start () {
		controller = GetComponent<CharacterController> ();
	}
*/	
	// Update is called once per frame
	void Update () {
		
//			controller.SimpleMove(Camera.main.transform.forward * velocity);
	
		Vector3 moveDirection = Camera.main.transform.forward;
		moveDirection *= velocity * Time.deltaTime;
		moveDirection.y = 0.0f;
		//transform.position += moveDirection;
		//controller.Move(moveDirection);
	}
}
