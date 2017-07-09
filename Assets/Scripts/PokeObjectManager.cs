using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokeObjectManager : MonoBehaviour {

	public string currentPokemon; //holds selectd pokemon from touch control or closest pokemon from pokemon map behavior
	public Transform player;
	public Dictionary <string,Transform> pokeObjects = new Dictionary<string,Transform> ();//holds all pokemon and gyms currently on the map (although nothing exists to remove them yet when they are too far away)

	private static PokeObjectManager instance;
	public static PokeObjectManager Instance
	{
		get { return instance; }
	}

	void Awake () {
		if (instance == null)
			instance = this;
		else if (instance != this)
		{
			Destroy(gameObject);
			return;
		}
		DontDestroyOnLoad(transform.gameObject);
	}
}
