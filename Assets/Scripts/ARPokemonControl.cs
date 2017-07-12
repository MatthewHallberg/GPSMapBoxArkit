using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARPokemonControl : MonoBehaviour {

	void Awake(){
		InstantiatePokeObject ();
	}

	public void InstantiatePokeObject(){
		//load prefab from resources folder
		GameObject currentPokeObject = Instantiate(Resources.Load(PokeObjectManager.Instance.currentPokemon),this.transform) as GameObject;
		currentPokeObject.transform.localPosition = Vector3.zero;
	}

	public void ExitButtonDown(){

		SceneService.Instance.BackToMainScene ();
	}
}


