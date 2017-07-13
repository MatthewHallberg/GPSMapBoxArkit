using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GymBehavior : MonoBehaviour {
	
	// Update is called once per frame
	void Update () {

		if (transform.localPosition.x == 0) {
			//transform.localPosition += new Vector3 (100f, 0, 0);
			transform.localPosition += new Vector3 (100f, 0, 0);
		}
	}
}
