#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.HashSet`1<Mapbox.Map.CanonicalTileId>
struct HashSet_1_t1530230359;
// Mapbox.Map.Map`1<Mapbox.Map.VectorTile>
struct Map_1_t1800332871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Map`1/<Update>c__AnonStorey0<Mapbox.Map.VectorTile>
struct  U3CUpdateU3Ec__AnonStorey0_t743950193  : public Il2CppObject
{
public:
	// System.Collections.Generic.HashSet`1<Mapbox.Map.CanonicalTileId> Mapbox.Map.Map`1/<Update>c__AnonStorey0::cover
	HashSet_1_t1530230359 * ___cover_0;
	// Mapbox.Map.Map`1<T> Mapbox.Map.Map`1/<Update>c__AnonStorey0::$this
	Map_1_t1800332871 * ___U24this_1;

public:
	inline static int32_t get_offset_of_cover_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey0_t743950193, ___cover_0)); }
	inline HashSet_1_t1530230359 * get_cover_0() const { return ___cover_0; }
	inline HashSet_1_t1530230359 ** get_address_of_cover_0() { return &___cover_0; }
	inline void set_cover_0(HashSet_1_t1530230359 * value)
	{
		___cover_0 = value;
		Il2CppCodeGenWriteBarrier(&___cover_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey0_t743950193, ___U24this_1)); }
	inline Map_1_t1800332871 * get_U24this_1() const { return ___U24this_1; }
	inline Map_1_t1800332871 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Map_1_t1800332871 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
