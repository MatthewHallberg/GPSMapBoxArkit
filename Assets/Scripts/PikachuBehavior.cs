using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PikachuBehavior : MonoBehaviour {

	public AnimationClip idle, walk;
	public GameObject electric;

	// Use this for initialization
	void Start () {
		StartCoroutine (Behavior ());
		GetComponent<Animation> ().clip = idle;
		GetComponent<Animation> ().Play ();
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
	// Update is called once per frame
	void Update () {
		
	}
}
