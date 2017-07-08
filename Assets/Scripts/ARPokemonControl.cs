using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPokemonControl : MonoBehaviour {

	GameObject currentPokemon;

	// Use this for initialization
	void Start () {

		currentPokemon = Instantiate (Resources.Load (SceneService.currentPokemon),this.transform) as GameObject;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ExitButtonDown(){

		SceneService.Instance.BackToMainScene ();
	}
}
