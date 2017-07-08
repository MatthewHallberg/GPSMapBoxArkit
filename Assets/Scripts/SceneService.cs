using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneService : MonoBehaviour {

	private static SceneService instance;
	public static SceneService Instance
	{
		get { return instance; }
	}

	public static string currentPokemon;

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
	

	public void BackToMainScene(){

		Scene mainScene = SceneManager.GetSceneByBuildIndex (0);

		foreach (GameObject sceneObject in mainScene.GetRootGameObjects ()) {

			sceneObject.SetActive (true);
		}

		SceneManager.SetActiveScene (mainScene);

		SceneManager.UnloadSceneAsync ("ARScene");
	}

	public void LoadARScene(string pokemonName){

		currentPokemon = pokemonName;
		Scene oldScene = SceneManager.GetActiveScene ();

		SceneManager.LoadScene("ARScene", LoadSceneMode.Additive);

		foreach (GameObject sceneObject in oldScene.GetRootGameObjects ()) {

			sceneObject.SetActive (false);
		}
	}
}
