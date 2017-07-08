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
		//list contains all pokemon with animations for catching (right now only Mewtwo and Pikachu)
		[Header ("Spawnable Pokemon")]
		public List<GameObject> pokemonList = new List<GameObject> ();

		public void PlacePokemon(Mapbox.Utils.Vector2d initialLocation){

			//loop through all pokemon instantiate at location
			foreach(GameObject pokemon in pokemonList){

				float randomLat = UnityEngine.Random.Range (-.001f, .001f);
				float randomLong = UnityEngine.Random.Range (-.001f, .001f);

				//create new random location
				Mapbox.Utils.Vector2d pokemonLocation = new Mapbox.Utils.Vector2d (initialLocation.x + randomLat, initialLocation.y + randomLong);

				//calculate map location 
				Vector3 _targetPosition = Conversions.GeoToWorldPosition (pokemonLocation,
					_map.CenterMercator,
					_map.WorldRelativeScale).ToVector3xz ();

				GameObject currentPokemon = Instantiate (pokemon);
				//position POI on map
				currentPokemon.transform.position = _targetPosition;
			}
		}
	}
}
