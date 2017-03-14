using UnityEngine;
using System.Collections;

public class NinjaStarLauncher : MonoBehaviour {

	//public GameObject ninja;
	public NinjaStarController ninjaStar;
	public AudioSource whooshSound;

	private Vector3 _vrShooterOffset;

	private GameController _gameController;
	private Vector3 _shooterOffset;

    private magneticClick magnetClick = new magneticClick();

	public float velocity = 0.7f;
	//public bool isWalking = false;
	//private CharacterController controller;

	void Start () {
        //	ninja = GetComponent<GameObject> ();
        magnetClick.init();
		_gameController = this.GetComponent<GameController>();
		_shooterOffset = new Vector3(0.0f, 0.0f, 1.0f);

		_vrShooterOffset = new Vector3 (0.0f, -0.4f, 1.0f);
	}
	
	void Update () {
		//1 
	//	controller.SimpleMove(Camera.main.transform.forward * velocity);
		Camera cam = GameObject.FindWithTag("Main.Camera").GetComponent<Camera>();
        magnetClick.magUpdate(Input.acceleration, Input.compass.rawVector);
		if (GvrViewer.Instance.VRModeEnabled && (GvrViewer.Instance.Triggered || magnetClick.clicked()) && !_gameController.isGameOver) {  
			GameObject vrLauncher = GvrViewer.Instance.GetComponentInChildren<GvrHead>().gameObject;
			// 2
			LaunchNinjaStarFrom(cam.gameObject, _vrShooterOffset);
		} else if (!GvrViewer.Instance.VRModeEnabled && (Input.GetButtonDown("Fire1") || magnetClick.clicked()) && 
			!_gameController.isGameOver) {
			// This is the same code as before
			Vector3 mouseLoc = Input.mousePosition;
			Vector3 worldMouseLoc = Camera.main.ScreenToWorldPoint(mouseLoc);
			//worldMouseLoc.y = ninja.transform.position.y;
			//ninja.transform.LookAt(worldMouseLoc);
			LaunchNinjaStarFrom(cam.gameObject, _shooterOffset);
		}
	}
	
	void LaunchNinjaStarFrom(GameObject origin, Vector3 shooterOffset) {
		
		// This will a ninja star slightly in front of our origin object.
		// We also have to rotate our model 90 degrees in the x-coordinate.
		Vector3 ninjaStarRotation = origin.transform.rotation.eulerAngles;
		ninjaStarRotation.x = 90.0f;
		Vector3 transformedOffset = origin.transform.rotation * shooterOffset;
		Instantiate(ninjaStar, origin.transform.position + transformedOffset, Quaternion.Euler(ninjaStarRotation));
		
		// Play a sound effect!
		whooshSound.Play();
		
	}
	
}
