using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MewtwoBehavior : MonoBehaviour {

	[Header ("Animations")]
	public AnimationClip idle;
	public AnimationClip up;
	public AnimationClip down;
	public Animation mewAnim;


	public GameObject particles;

	private bool shouldMove = false;
	private Vector3 desiredPosition;

	// Use this for initialization
	void Start () {
		mewAnim = GetComponent<Animation> ();
		mewAnim.clip = idle;
		mewAnim.Play ();
		StartCoroutine (MewBehavior ());
	}

	void Update(){

		if (shouldMove) {
			transform.localPosition = Vector3.Lerp (transform.localPosition, desiredPosition, 2f * Time.deltaTime);
		}
	}
	
	IEnumerator MewBehavior(){
		while (true) {
			yield return new WaitForSeconds (5f);
			mewAnim.Stop ();
			mewAnim.clip = up;
			mewAnim.Play ();
			desiredPosition = new Vector3 (0, 15, 0);
			particles.SetActive (true);
			shouldMove = true;
			GetComponent<AudioSource> ().Play ();
			yield return new WaitForSeconds (8f);
			mewAnim.Stop ();
			mewAnim.clip = down;
			mewAnim.Play ();
			desiredPosition = Vector3.zero;
			yield return new WaitForSeconds (2f);
			GetComponent<AudioSource> ().Stop ();
			mewAnim.Stop ();
			mewAnim.clip = idle;
			mewAnim.Play ();
			particles.SetActive (false);
		}
	}
}
