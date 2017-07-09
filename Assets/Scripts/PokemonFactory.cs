namespace Mapbox.Examples.LocationProvider
{
	using Mapbox.Unity.Location;
	using Mapbox.Unity.Utilities;
	using Mapbox.Unity.Map;
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	/// <summary>
	/// Pokemon factory. Random generates pokemon here based on users location when the app was started,
	/// rather than storing in a database due to me being lazy. They could be placed at a position on the map,
	/// however I am going to place them here at particular gps coordinates because I think that is more useful.
	/// </summary>

	public class PokemonFactory : MonoBehaviour {

		[SerializeField]
		private AbstractMap _map;
		[SerializeField]
		public Transform player;
		//list contains all pokemon map objects that can show up in AR
		[Header ("Spawnable Pokemon")]
		public List<GameObject> pokemonMapObjects = new List<GameObject> ();

		public void PlacePokemon(Mapbox.Utils.Vector2d initialLocation){

			//loop through all pokemon instantiate at location
			foreach(GameObject pokemon in pokemonMapObjects){

				float randomLat = UnityEngine.Random.Range (-.001f, .001f);
				float randomLong = UnityEngine.Random.Range (-.001f, .001f);

				//create new random location close to users initial location
				Mapbox.Utils.Vector2d pokemonLocation = new Mapbox.Utils.Vector2d (initialLocation.x + randomLat, initialLocation.y + randomLong);

				/*test to see if real world distance matches unity distance...It does not unfortunately. Tested with an online distance 
				 * calculator and it was off by a different factor each time. To get accurate distances in AR scene it could be possible by placing 
				 * objects based on gps distance relative to player assuming one unity scene unit to be one meter. 
				if (pokemon.name.Contains ("mewtwo")) {
					print (pokemon.name + ": " + pokemonLocation);
					GameObject player = GameObject.Find ("Player");
					print("Unity Distance: " + Vector3.Distance(pokemon.transform.position,player.transform.position));
				}
				*/

				//calculate map location 
				Vector3 _targetPosition = Conversions.GeoToWorldPosition (pokemonLocation,
					_map.CenterMercator,
					_map.WorldRelativeScale).ToVector3xz ();

				GameObject currentPokemon = Instantiate (pokemon);
				//position POI on map
				currentPokemon.transform.position = _targetPosition;
				//get name so we can write to dictionary
				string currentPokemonName = currentPokemon.name.Substring(0,currentPokemon.name.Length-10);
				//add pokemon map object to poke object manager that holds all transforms and persists between scenes so we can attempt to accuratly place pokemon and gyms in AR scene.
				PokeObjectManager.Instance.pokeObjects.Add(currentPokemonName,currentPokemon.transform);
			}
		}
	}
}
