#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_t1382569190;
// Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier[]
struct MeshModifierU5BU5D_t2019686119;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Material
struct Material_t193706927;
// Mapbox.Directions.Directions
struct Directions_t994913360;
// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean>
struct Func_2_t2366681589;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory
struct  DirectionsFactory_t2177167164  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Map.AbstractMap Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::_map
	AbstractMap_t1382569190 * ____map_2;
	// Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier[] Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::MeshModifiers
	MeshModifierU5BU5D_t2019686119* ___MeshModifiers_3;
	// UnityEngine.Transform[] Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::_waypoints
	TransformU5BU5D_t3764228911* ____waypoints_4;
	// UnityEngine.Material Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::_material
	Material_t193706927 * ____material_5;
	// Mapbox.Directions.Directions Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::_directions
	Directions_t994913360 * ____directions_6;

public:
	inline static int32_t get_offset_of__map_2() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164, ____map_2)); }
	inline AbstractMap_t1382569190 * get__map_2() const { return ____map_2; }
	inline AbstractMap_t1382569190 ** get_address_of__map_2() { return &____map_2; }
	inline void set__map_2(AbstractMap_t1382569190 * value)
	{
		____map_2 = value;
		Il2CppCodeGenWriteBarrier(&____map_2, value);
	}

	inline static int32_t get_offset_of_MeshModifiers_3() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164, ___MeshModifiers_3)); }
	inline MeshModifierU5BU5D_t2019686119* get_MeshModifiers_3() const { return ___MeshModifiers_3; }
	inline MeshModifierU5BU5D_t2019686119** get_address_of_MeshModifiers_3() { return &___MeshModifiers_3; }
	inline void set_MeshModifiers_3(MeshModifierU5BU5D_t2019686119* value)
	{
		___MeshModifiers_3 = value;
		Il2CppCodeGenWriteBarrier(&___MeshModifiers_3, value);
	}

	inline static int32_t get_offset_of__waypoints_4() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164, ____waypoints_4)); }
	inline TransformU5BU5D_t3764228911* get__waypoints_4() const { return ____waypoints_4; }
	inline TransformU5BU5D_t3764228911** get_address_of__waypoints_4() { return &____waypoints_4; }
	inline void set__waypoints_4(TransformU5BU5D_t3764228911* value)
	{
		____waypoints_4 = value;
		Il2CppCodeGenWriteBarrier(&____waypoints_4, value);
	}

	inline static int32_t get_offset_of__material_5() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164, ____material_5)); }
	inline Material_t193706927 * get__material_5() const { return ____material_5; }
	inline Material_t193706927 ** get_address_of__material_5() { return &____material_5; }
	inline void set__material_5(Material_t193706927 * value)
	{
		____material_5 = value;
		Il2CppCodeGenWriteBarrier(&____material_5, value);
	}

	inline static int32_t get_offset_of__directions_6() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164, ____directions_6)); }
	inline Directions_t994913360 * get__directions_6() const { return ____directions_6; }
	inline Directions_t994913360 ** get_address_of__directions_6() { return &____directions_6; }
	inline void set__directions_6(Directions_t994913360 * value)
	{
		____directions_6 = value;
		Il2CppCodeGenWriteBarrier(&____directions_6, value);
	}
};

struct DirectionsFactory_t2177167164_StaticFields
{
public:
	// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean> Mapbox.Unity.MeshGeneration.Factories.DirectionsFactory::<>f__am$cache0
	Func_2_t2366681589 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(DirectionsFactory_t2177167164_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t2366681589 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t2366681589 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t2366681589 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
