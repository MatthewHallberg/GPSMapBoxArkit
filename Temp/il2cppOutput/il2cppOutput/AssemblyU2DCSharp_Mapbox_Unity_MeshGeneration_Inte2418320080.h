#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Inter623377336.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Interfaces.PoiVisualizer
struct  PoiVisualizer_t2418320080  : public LayerVisualizerBase_t623377336
{
public:
	// System.String Mapbox.Unity.MeshGeneration.Interfaces.PoiVisualizer::_key
	String_t* ____key_3;
	// UnityEngine.GameObject Mapbox.Unity.MeshGeneration.Interfaces.PoiVisualizer::PoiPrefab
	GameObject_t1756533147 * ___PoiPrefab_4;
	// UnityEngine.GameObject Mapbox.Unity.MeshGeneration.Interfaces.PoiVisualizer::_container
	GameObject_t1756533147 * ____container_5;
	// System.Boolean Mapbox.Unity.MeshGeneration.Interfaces.PoiVisualizer::_scaleDownWithWorld
	bool ____scaleDownWithWorld_6;

public:
	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(PoiVisualizer_t2418320080, ____key_3)); }
	inline String_t* get__key_3() const { return ____key_3; }
	inline String_t** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(String_t* value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier(&____key_3, value);
	}

	inline static int32_t get_offset_of_PoiPrefab_4() { return static_cast<int32_t>(offsetof(PoiVisualizer_t2418320080, ___PoiPrefab_4)); }
	inline GameObject_t1756533147 * get_PoiPrefab_4() const { return ___PoiPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_PoiPrefab_4() { return &___PoiPrefab_4; }
	inline void set_PoiPrefab_4(GameObject_t1756533147 * value)
	{
		___PoiPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___PoiPrefab_4, value);
	}

	inline static int32_t get_offset_of__container_5() { return static_cast<int32_t>(offsetof(PoiVisualizer_t2418320080, ____container_5)); }
	inline GameObject_t1756533147 * get__container_5() const { return ____container_5; }
	inline GameObject_t1756533147 ** get_address_of__container_5() { return &____container_5; }
	inline void set__container_5(GameObject_t1756533147 * value)
	{
		____container_5 = value;
		Il2CppCodeGenWriteBarrier(&____container_5, value);
	}

	inline static int32_t get_offset_of__scaleDownWithWorld_6() { return static_cast<int32_t>(offsetof(PoiVisualizer_t2418320080, ____scaleDownWithWorld_6)); }
	inline bool get__scaleDownWithWorld_6() const { return ____scaleDownWithWorld_6; }
	inline bool* get_address_of__scaleDownWithWorld_6() { return &____scaleDownWithWorld_6; }
	inline void set__scaleDownWithWorld_6(bool value)
	{
		____scaleDownWithWorld_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
