using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.iOS
{
	public class ARPokemonControl : MonoBehaviour {

		public List <GameObject> ArPokeObjects = new List<GameObject> ();//holds all the pokemon obects in the AR scene.
		private UnityARAnchorManager unityARAnchorManager;


		void Start(){
			unityARAnchorManager = new UnityARAnchorManager();
			PlaceInitialPokemonObjects (0);
		}

		public void PlaceInitialPokemonObjects(float groundY){

			foreach(KeyValuePair<string,Transform> pokeObject in PokeObjectManager.Instance.pokeObjects){

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
		//this gets called from the plane prefab everytime a new one is added to the scene.
		public void RepositionPokemonObjects(){
			List<ARPlaneAnchorGameObject> anchorPlaneObjects = unityARAnchorManager.GetCurrentPlaneAnchors ();
			//extract all anchor plane gameobjects tolist
			List<GameObject> anchorPlanes = new List<GameObject>();
			foreach (ARPlaneAnchorGameObject arpag in anchorPlaneObjects) {
				anchorPlanes.Add (arpag.gameObject);
			}
			//loop through all poke objects in scene and reset y position according to closest ground plane.
			foreach (GameObject pokeObject in ArPokeObjects) {
				GameObject closestPlane = GetClosestPlane (pokeObject, anchorPlanes);
				pokeObject.transform.position = new Vector3 (pokeObject.transform.position.x, closestPlane.transform.position.y, pokeObject.transform.position.z);
				Debug.Log ("closest plane is: " + closestPlane.name);
			}
			anchorPlanes.Clear ();
			anchorPlaneObjects.Clear ();
		}

		GameObject GetClosestPlane(GameObject pokeObject,List<GameObject> planes)
		{
			GameObject gMin = null;
			float minDist = Mathf.Infinity;
			Vector3 currentPos = pokeObject.transform.position;
			foreach (GameObject g in planes)
			{
				float dist = Vector3.Distance(g.transform.position, currentPos);
				if (dist < minDist)
				{
					gMin = g;
					minDist = dist;
				}
			}
			return gMin;
		}

		public void ExitButtonDown(){

			SceneService.Instance.BackToMainScene ();
		}
	}
}
