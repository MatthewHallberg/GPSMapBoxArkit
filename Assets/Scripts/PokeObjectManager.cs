using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PokeObjectManager : MonoBehaviour {

	/// <summary>
	/// This instance persists between scenes, originally it had a list that held all nearby objects
	/// because I was placing them all at once in relation to the players position and their gps location (in the AR scene)
	/// but I was never happy with the results because when you place virtual objects far away they don't get occluded by trees 
	/// and what not, so that funtionality was abandoned. 
	/// </summary>

	public string currentPokemon; //holds selectd pokemon from touch control or closest pokemon from pokemon map behavior

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
