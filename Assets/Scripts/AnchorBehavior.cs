using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace UnityEngine.XR.iOS
{
	public class AnchorBehavior : MonoBehaviour {

		private ARPokemonControl pokemonControl;

		// Use this for initialization
		void Start () {
			pokemonControl = GameObject.Find ("PokemonHolder").GetComponent<ARPokemonControl> ();
			pokemonControl.RepositionPokemonObjects ();
			//find reference to ARPokemon control and resposition pokemon every tiume new anchor is added.
		}
	}
}
