namespace Mapbox.Examples.LocationProvider
{
	using Mapbox.Unity.Location;
	using Mapbox.Unity.Utilities;
	using Mapbox.Unity.Map;
	using UnityEngine;

	public class TestPosition : MonoBehaviour
	{
		[SerializeField]
		private AbstractMap _map;
		private Mapbox.Utils.Vector2d location;

		Vector3 _targetPosition;

		bool _isInitialized;

		void Awake()
		{
			_map.OnInitialized += () => _isInitialized = true;
		}

		void Start(){




	
		}

		void Update(){


			if (_isInitialized) {
				_isInitialized = false;

				location = new Mapbox.Utils.Vector2d (40.45, -79.98);

				//calculate map location 
				_targetPosition = Conversions.GeoToWorldPosition (location,
					_map.CenterMercator,
					_map.WorldRelativeScale).ToVector3xz ();

				print (_targetPosition);

				//position POI on map
				transform.position = _targetPosition;
			}




		}
	}
}