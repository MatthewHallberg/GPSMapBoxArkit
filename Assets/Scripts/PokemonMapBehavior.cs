using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokemonMapBehavior : MonoBehaviour {

	public Vector3 mapScale;
	private Transform player;
	public Transform logo;

	// Use this for initialization
	void Start () {

		player = GameObject.Find ("Player").transform;
		transform.localScale = mapScale;
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (player);
		transform.eulerAngles = new Vector3 (0, transform.eulerAngles.y, 0);
		logo.transform.eulerAngles += new Vector3 (0, 1, 0);

		if (Vector3.Distance (this.transform.position, player.position) < 4) {
			//load scene using name of gameobject
			string name = gameObject.name;
			SceneService.Instance.LoadARScene(name.Substring(0,name.Length-10));
			Destroy (gameObject);
		}
	}
}
