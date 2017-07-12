#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_Map_CanonicalTileId3196769505.h"
#include "AssemblyU2DCSharp_Mapbox_Map_Tile_State2242625883.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t1296561819;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t1660589460;
// System.Action
struct Action_t3226471752;
// System.Func`2<System.Exception,System.String>
struct Func_2_t331498127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Tile
struct  Tile_t1819912606  : public Il2CppObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::_id
	CanonicalTileId_t3196769505  ____id_0;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.Tile::_exceptions
	List_1_t1296561819 * ____exceptions_1;
	// Mapbox.Map.Tile/State Mapbox.Map.Tile::_state
	int32_t ____state_2;
	// Mapbox.Platform.IAsyncRequest Mapbox.Map.Tile::_request
	Il2CppObject * ____request_3;
	// System.Action Mapbox.Map.Tile::_callback
	Action_t3226471752 * ____callback_4;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Tile_t1819912606, ____id_0)); }
	inline CanonicalTileId_t3196769505  get__id_0() const { return ____id_0; }
	inline CanonicalTileId_t3196769505 * get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(CanonicalTileId_t3196769505  value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__exceptions_1() { return static_cast<int32_t>(offsetof(Tile_t1819912606, ____exceptions_1)); }
	inline List_1_t1296561819 * get__exceptions_1() const { return ____exceptions_1; }
	inline List_1_t1296561819 ** get_address_of__exceptions_1() { return &____exceptions_1; }
	inline void set__exceptions_1(List_1_t1296561819 * value)
	{
		____exceptions_1 = value;
		Il2CppCodeGenWriteBarrier(&____exceptions_1, value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Tile_t1819912606, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(Tile_t1819912606, ____request_3)); }
	inline Il2CppObject * get__request_3() const { return ____request_3; }
	inline Il2CppObject ** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(Il2CppObject * value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier(&____request_3, value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(Tile_t1819912606, ____callback_4)); }
	inline Action_t3226471752 * get__callback_4() const { return ____callback_4; }
	inline Action_t3226471752 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t3226471752 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier(&____callback_4, value);
	}
};

struct Tile_t1819912606_StaticFields
{
public:
	// System.Func`2<System.Exception,System.String> Mapbox.Map.Tile::<>f__am$cache0
	Func_2_t331498127 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Tile_t1819912606_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t331498127 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t331498127 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t331498127 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
