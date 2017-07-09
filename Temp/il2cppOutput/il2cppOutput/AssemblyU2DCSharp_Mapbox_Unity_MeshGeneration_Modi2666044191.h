#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi1486536946.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.PrefabModifier
struct  PrefabModifier_t2666044191  : public GameObjectModifier_t1486536946
{
public:
	// UnityEngine.GameObject Mapbox.Unity.MeshGeneration.Modifiers.PrefabModifier::_prefab
	GameObject_t1756533147 * ____prefab_3;
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.PrefabModifier::_scaleDownWithWorld
	bool ____scaleDownWithWorld_4;

public:
	inline static int32_t get_offset_of__prefab_3() { return static_cast<int32_t>(offsetof(PrefabModifier_t2666044191, ____prefab_3)); }
	inline GameObject_t1756533147 * get__prefab_3() const { return ____prefab_3; }
	inline GameObject_t1756533147 ** get_address_of__prefab_3() { return &____prefab_3; }
	inline void set__prefab_3(GameObject_t1756533147 * value)
	{
		____prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&____prefab_3, value);
	}

	inline static int32_t get_offset_of__scaleDownWithWorld_4() { return static_cast<int32_t>(offsetof(PrefabModifier_t2666044191, ____scaleDownWithWorld_4)); }
	inline bool get__scaleDownWithWorld_4() const { return ____scaleDownWithWorld_4; }
	inline bool* get_address_of__scaleDownWithWorld_4() { return &____scaleDownWithWorld_4; }
	inline void set__scaleDownWithWorld_4(bool value)
	{
		____scaleDownWithWorld_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
