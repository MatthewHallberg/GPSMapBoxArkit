#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modu3264578301.h"

// Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory[]
struct AbstractTileFactoryU5BU5D_t4000398303;
// Mapbox.Unity.Map.IMap
struct IMap_t4019893491;
// System.Collections.Generic.Dictionary`2<Mapbox.Map.UnwrappedTileId,Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Dictionary_2_t3365447131;
// System.Collections.Generic.Queue`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Queue_1_t1458622086;
// System.Action`1<Mapbox.Unity.MeshGeneration.ModuleState>
struct Action_1_t3066377683;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.MapVisualizer
struct  MapVisualizer_t1285568018  : public ScriptableObject_t1975622470
{
public:
	// Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory[] Mapbox.Unity.MeshGeneration.MapVisualizer::_factories
	AbstractTileFactoryU5BU5D_t4000398303* ____factories_2;
	// Mapbox.Unity.Map.IMap Mapbox.Unity.MeshGeneration.MapVisualizer::_map
	Il2CppObject * ____map_3;
	// System.Collections.Generic.Dictionary`2<Mapbox.Map.UnwrappedTileId,Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.MapVisualizer::_activeTiles
	Dictionary_2_t3365447131 * ____activeTiles_4;
	// System.Collections.Generic.Queue`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.MapVisualizer::_inactiveTiles
	Queue_1_t1458622086 * ____inactiveTiles_5;
	// Mapbox.Unity.MeshGeneration.ModuleState Mapbox.Unity.MeshGeneration.MapVisualizer::_state
	int32_t ____state_6;
	// System.Action`1<Mapbox.Unity.MeshGeneration.ModuleState> Mapbox.Unity.MeshGeneration.MapVisualizer::OnMapVisualizerStateChanged
	Action_1_t3066377683 * ___OnMapVisualizerStateChanged_7;

public:
	inline static int32_t get_offset_of__factories_2() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ____factories_2)); }
	inline AbstractTileFactoryU5BU5D_t4000398303* get__factories_2() const { return ____factories_2; }
	inline AbstractTileFactoryU5BU5D_t4000398303** get_address_of__factories_2() { return &____factories_2; }
	inline void set__factories_2(AbstractTileFactoryU5BU5D_t4000398303* value)
	{
		____factories_2 = value;
		Il2CppCodeGenWriteBarrier(&____factories_2, value);
	}

	inline static int32_t get_offset_of__map_3() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ____map_3)); }
	inline Il2CppObject * get__map_3() const { return ____map_3; }
	inline Il2CppObject ** get_address_of__map_3() { return &____map_3; }
	inline void set__map_3(Il2CppObject * value)
	{
		____map_3 = value;
		Il2CppCodeGenWriteBarrier(&____map_3, value);
	}

	inline static int32_t get_offset_of__activeTiles_4() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ____activeTiles_4)); }
	inline Dictionary_2_t3365447131 * get__activeTiles_4() const { return ____activeTiles_4; }
	inline Dictionary_2_t3365447131 ** get_address_of__activeTiles_4() { return &____activeTiles_4; }
	inline void set__activeTiles_4(Dictionary_2_t3365447131 * value)
	{
		____activeTiles_4 = value;
		Il2CppCodeGenWriteBarrier(&____activeTiles_4, value);
	}

	inline static int32_t get_offset_of__inactiveTiles_5() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ____inactiveTiles_5)); }
	inline Queue_1_t1458622086 * get__inactiveTiles_5() const { return ____inactiveTiles_5; }
	inline Queue_1_t1458622086 ** get_address_of__inactiveTiles_5() { return &____inactiveTiles_5; }
	inline void set__inactiveTiles_5(Queue_1_t1458622086 * value)
	{
		____inactiveTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&____inactiveTiles_5, value);
	}

	inline static int32_t get_offset_of__state_6() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ____state_6)); }
	inline int32_t get__state_6() const { return ____state_6; }
	inline int32_t* get_address_of__state_6() { return &____state_6; }
	inline void set__state_6(int32_t value)
	{
		____state_6 = value;
	}

	inline static int32_t get_offset_of_OnMapVisualizerStateChanged_7() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018, ___OnMapVisualizerStateChanged_7)); }
	inline Action_1_t3066377683 * get_OnMapVisualizerStateChanged_7() const { return ___OnMapVisualizerStateChanged_7; }
	inline Action_1_t3066377683 ** get_address_of_OnMapVisualizerStateChanged_7() { return &___OnMapVisualizerStateChanged_7; }
	inline void set_OnMapVisualizerStateChanged_7(Action_1_t3066377683 * value)
	{
		___OnMapVisualizerStateChanged_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnMapVisualizerStateChanged_7, value);
	}
};

struct MapVisualizer_t1285568018_StaticFields
{
public:
	// System.Action`1<Mapbox.Unity.MeshGeneration.ModuleState> Mapbox.Unity.MeshGeneration.MapVisualizer::<>f__am$cache0
	Action_1_t3066377683 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(MapVisualizer_t1285568018_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_1_t3066377683 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_1_t3066377683 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_1_t3066377683 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
