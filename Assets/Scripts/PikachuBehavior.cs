using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PikachuBehavior : MonoBehaviour {

	public AnimationClip idle, walk;
	public GameObject electric;
	private bool shouldMove;
	private bool shouldTurn;
	private float rotateZ;


	// Use this for initialization
	void Start () {
		StartCoroutine (Behavior ());
		StartCoroutine (Run ());
		StartCoroutine (Tilt ());
		GetComponent<Animation> ().clip = idle;
		GetComponent<Animation> ().Play ();
	}

	void Update(){

		if (shouldMove) {
			transform.Translate (Vector3.forward * Time.deltaTime);
			transform.eulerAngles += new Vector3 (0, 0, rotateZ);
		}

		if (shouldTurn){
			transform.eulerAngles += new Vector3 (0, 2f, rotateZ);
		}
	}

	IEnumerator Tilt(){
		while (true) {
			transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 0);
			rotateZ = 1;
			yield return new WaitForSeconds (.1f);
			rotateZ = -1;
			yield return new WaitForSeconds (.1f);
			transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 0);
			yield return new WaitForSeconds (.1f);
		}
	}

	IEnumerator Run(){
		while (true) {
			yield return new WaitForSeconds (5f);
			GetComponent<Animation> ().clip = walk;
			GetComponent<Animation> ().Play ();
			shouldMove = true;
			shouldTurn = true;
			yield return new WaitForSeconds (4f);
			shouldTurn = false;
			yield return new WaitForSeconds (5f);
			shouldMove = false;
			GetComponent<Animation> ().clip = idle;
			GetComponent<Animation> ().Play ();

		}
	}

	IEnumerator Behavior(){
		while (true) {
			electric.SetActive (true);
			GetComponent<AudioSource> ().Play ();
			yield return new WaitForSeconds (1f);
			electric.SetActive (false);
			yield return new WaitForSeconds (3f);
		}
	}
}
