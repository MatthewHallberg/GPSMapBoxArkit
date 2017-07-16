using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARPokemonControl : MonoBehaviour {

	void Awake(){
		InstantiatePokeObject ();
	}

	public void InstantiatePokeObject(){
		//load prefab from resources folder position selected pokemon at position zero
//		GameObject currentPokeObject = Instantiate(Resources.Load(PokeObjectManager.Instance.currentPokemon),this.transform) as GameObject;
//		currentPokeObject.transform.localPosition = Vector3.zero;
//		currentPokeObject.transform.LookAt (Camera.main.transform.position);
//		currentPokeObject.transform.localEulerAngles = new Vector3 (0,currentPokeObject.transform.localEulerAngles.y, 0);

		//load all other nearby pokemon in scene
		foreach(KeyValuePair<string,Transform> pokeObject in PokeObjectManager.Instance.pokeObjects){
//			if (pokeObject.Key != PokeObjectManager.Instance.currentPokemon) {
				//load prefab from resources folder
				GameObject otherPokeObject = Instantiate (Resources.Load (pokeObject.Key), this.transform) as GameObject;
				//position relative to player according to mapbox scene placement(not exactly accurate to real world gps cooordinates, but could be possible with more calculations)
				Transform player = PokeObjectManager.Instance.player;
				Vector3 currentPosition = new Vector3 (pokeObject.Value.position.x - player.position.x, 0, pokeObject.Value.position.z - player.position.z);
				otherPokeObject.transform.position = currentPosition;
				otherPokeObject.transform.LookAt (Camera.main.transform.position);
				otherPokeObject.transform.localEulerAngles = new Vector3 (0,otherPokeObject.transform.localEulerAngles.y, 0);
//			}
		}
	}

	public void ExitButtonDown(){

		SceneService.Instance.BackToMainScene ();
	}
}


