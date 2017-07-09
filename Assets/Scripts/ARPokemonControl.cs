using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPokemonControl : MonoBehaviour {

	public List <GameObject> ArPokeObjects = new List<GameObject> ();//holds all the pokemon obects in the AR scene.


	void Start(){

		PlaceInitialPokemonObjects (0);
	}

	public void PlaceInitialPokemonObjects(float groundY){

		foreach(KeyValuePair<string,Transform> pokeObject in PokeObjectManager.Instance.pokeObjects){

			print (pokeObject.Key);

			//load prefab from resources folder
			GameObject currentPokeObject = Instantiate(Resources.Load(pokeObject.Key),this.transform) as GameObject;
			//position relative to player according to mapbox scene placement(not exactly accurate to real world gps cooordinates, but could be possible with more calculations)
			Transform player = PokeObjectManager.Instance.player;
			Vector3 currentPosition = new Vector3 (pokeObject.Value.position.x - player.position.x, groundY, pokeObject.Value.position.z - player.position.z);
			currentPokeObject.transform.position = currentPosition;
			//add to AR Scene current poke objects list
			ArPokeObjects.Add(currentPokeObject);
		}

	}

	public void RepositionPokemonObjects(float groundY){
		//loop through all poke objects in scene and reset y position according to latest ground plane created.
		foreach (GameObject pokeObject in ArPokeObjects) {
			pokeObject.transform.position = new Vector3 (pokeObject.transform.position.x, groundY, pokeObject.transform.position.z);
		}
	}

	public void ExitButtonDown(){

		SceneService.Instance.BackToMainScene ();
	}
}
