using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchControl : MonoBehaviour {

	/// <summary>
	/// Allows user to select pokemon from map and starts AR scene. Sets current pokemon 
	/// (which I decided not to use but it was going to spawn right in front of them) currently all Pokemon 
	/// get placed relative to the player so that their real world locations simulate their gps locations.
	/// </summary>

	public Transform player;	

	void Update () {

		if (Input.GetMouseButtonDown (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				if (hit.collider.gameObject.tag == "MapObject") {
					//load scene and set current pokemon
					string name = hit.collider.gameObject.name;
					PokeObjectManager.Instance.currentPokemon = name.Substring(0,name.Length-10);
					PokeObjectManager.Instance.player = player;
					SceneService.Instance.LoadARScene();
				}
			}
		}
	}
}
