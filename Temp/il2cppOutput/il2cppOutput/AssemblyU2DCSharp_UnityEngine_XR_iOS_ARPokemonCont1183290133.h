#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t1086564192;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPokemonControl
struct  ARPokemonControl_t1183290133  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.iOS.ARPokemonControl::ArPokeObjects
	List_1_t1125654279 * ___ArPokeObjects_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.ARPokemonControl::unityARAnchorManager
	UnityARAnchorManager_t1086564192 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_ArPokeObjects_2() { return static_cast<int32_t>(offsetof(ARPokemonControl_t1183290133, ___ArPokeObjects_2)); }
	inline List_1_t1125654279 * get_ArPokeObjects_2() const { return ___ArPokeObjects_2; }
	inline List_1_t1125654279 ** get_address_of_ArPokeObjects_2() { return &___ArPokeObjects_2; }
	inline void set_ArPokeObjects_2(List_1_t1125654279 * value)
	{
		___ArPokeObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___ArPokeObjects_2, value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(ARPokemonControl_t1183290133, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t1086564192 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t1086564192 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t1086564192 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___unityARAnchorManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
