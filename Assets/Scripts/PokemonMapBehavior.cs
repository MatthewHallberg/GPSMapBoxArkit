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

		/*
		 * 
		 * 
		 * selects pokemon if we are close enough decided to remove for testing
		if (Vector3.Distance (this.transform.position, player.position) < 4) {
			//load scene and set current pokemon so we can place in front of user
			string name = gameObject.name;
			PokeObjectManager.Instance.currentPokemon = name.Substring(0,name.Length-10);
			SceneService.Instance.LoadARScene();

			Destroy (gameObject);
		}
		*
		*
		*
		*/
	}
}
