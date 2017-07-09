#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<Mapbox.Map.UnwrappedTileId>
struct Action_1_t2676197517;
// Mapbox.Unity.Map.IMap
struct IMap_t4019893491;
// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>
struct List_1_t2243519267;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.AbstractTileProvider
struct  AbstractTileProvider_t3856336531  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractTileProvider::OnTileAdded
	Action_1_t2676197517 * ___OnTileAdded_2;
	// System.Action`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractTileProvider::OnTileRemoved
	Action_1_t2676197517 * ___OnTileRemoved_3;
	// Mapbox.Unity.Map.IMap Mapbox.Unity.Map.AbstractTileProvider::_map
	Il2CppObject * ____map_4;
	// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractTileProvider::_activeTiles
	List_1_t2243519267 * ____activeTiles_5;

public:
	inline static int32_t get_offset_of_OnTileAdded_2() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531, ___OnTileAdded_2)); }
	inline Action_1_t2676197517 * get_OnTileAdded_2() const { return ___OnTileAdded_2; }
	inline Action_1_t2676197517 ** get_address_of_OnTileAdded_2() { return &___OnTileAdded_2; }
	inline void set_OnTileAdded_2(Action_1_t2676197517 * value)
	{
		___OnTileAdded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnTileAdded_2, value);
	}

	inline static int32_t get_offset_of_OnTileRemoved_3() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531, ___OnTileRemoved_3)); }
	inline Action_1_t2676197517 * get_OnTileRemoved_3() const { return ___OnTileRemoved_3; }
	inline Action_1_t2676197517 ** get_address_of_OnTileRemoved_3() { return &___OnTileRemoved_3; }
	inline void set_OnTileRemoved_3(Action_1_t2676197517 * value)
	{
		___OnTileRemoved_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnTileRemoved_3, value);
	}

	inline static int32_t get_offset_of__map_4() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531, ____map_4)); }
	inline Il2CppObject * get__map_4() const { return ____map_4; }
	inline Il2CppObject ** get_address_of__map_4() { return &____map_4; }
	inline void set__map_4(Il2CppObject * value)
	{
		____map_4 = value;
		Il2CppCodeGenWriteBarrier(&____map_4, value);
	}

	inline static int32_t get_offset_of__activeTiles_5() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531, ____activeTiles_5)); }
	inline List_1_t2243519267 * get__activeTiles_5() const { return ____activeTiles_5; }
	inline List_1_t2243519267 ** get_address_of__activeTiles_5() { return &____activeTiles_5; }
	inline void set__activeTiles_5(List_1_t2243519267 * value)
	{
		____activeTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&____activeTiles_5, value);
	}
};

struct AbstractTileProvider_t3856336531_StaticFields
{
public:
	// System.Action`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractTileProvider::<>f__am$cache0
	Action_1_t2676197517 * ___U3CU3Ef__amU24cache0_6;
	// System.Action`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractTileProvider::<>f__am$cache1
	Action_1_t2676197517 * ___U3CU3Ef__amU24cache1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t2676197517 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t2676197517 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t2676197517 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(AbstractTileProvider_t3856336531_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline Action_1_t2676197517 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline Action_1_t2676197517 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(Action_1_t2676197517 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
