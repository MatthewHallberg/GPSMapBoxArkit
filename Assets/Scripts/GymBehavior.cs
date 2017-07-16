using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GymBehavior : MonoBehaviour {
	
	// Update is called once per frame
	void Update () {
		//for some reason gym is always crooked so force straight.
		transform.localEulerAngles = Vector3.zero;
		//Debug.Log ("WORLD: " + transform.eulerAngles);
		//Debug.Log ("Local: " + transform.localEulerAngles);

	}
}
