using UnityEngine;
using System.Collections;

public class YouLoseIfEnemyHitsThis : MonoBehaviour {

	public GameController gameController;
	
	
	void OnTriggerEnter (Collider other) 
	{
		// End the game if an enemy not in the dying state hits us.
		if (other.tag == "Enemy") {
			EnemyMover badGuy = other.gameObject.GetComponent<EnemyMover>();
			if (!badGuy.IsDying()) {
				gameController.GameOver(false);

				Camera cam = GameObject.FindWithTag("Main.Camera").GetComponent<Camera>();
				Vector3 moveDirection = cam.transform.position;
				moveDirection.y = 1.13f;
				moveDirection.x = 0.0f;
				moveDirection.z = 0.0f;
			}
		}
	}	

}
