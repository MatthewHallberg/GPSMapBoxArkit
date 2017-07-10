using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharizardBehavior : MonoBehaviour {

	public AnimationClip idle, attack;
	public ParticleSystem ps;

	// Use this for initialization
	void Start () {
		ps.Stop ();
		StartCoroutine (Behavior ());
	}

	IEnumerator Behavior(){
		while (true) {
			GetComponent<Animation> ().clip = idle;
			GetComponent<Animation> ().Play ();
			yield return new WaitForSeconds (2f);
			GetComponent<Animation> ().clip = attack;
			GetComponent<Animation> ().Play ();
			yield return new WaitForSeconds (.8f);
			GetComponent<AudioSource> ().Play ();
			yield return new WaitForSeconds (.2f);
			ps.Play ();
			yield return new WaitForSeconds (1f);
			ps.Stop ();
			yield return new WaitForSeconds (1f);
		}
	}
}
