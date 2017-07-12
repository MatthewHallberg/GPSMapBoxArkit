#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t1638965251;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Int32>
struct  KeyValuePair_2_t4099363306 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	UnityTile_t1638965251 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4099363306, ___key_0)); }
	inline UnityTile_t1638965251 * get_key_0() const { return ___key_0; }
	inline UnityTile_t1638965251 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(UnityTile_t1638965251 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4099363306, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
