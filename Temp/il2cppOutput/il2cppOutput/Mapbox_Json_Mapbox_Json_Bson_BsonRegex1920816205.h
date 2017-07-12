#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Bson_BsonToken1725176127.h"

// Mapbox.Json.Bson.BsonString
struct BsonString_t260379133;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonRegex
struct  BsonRegex_t1920816205  : public BsonToken_t1725176127
{
public:
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t260379133 * ___U3CPatternU3Ek__BackingField_2;
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t260379133 * ___U3COptionsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPatternU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BsonRegex_t1920816205, ___U3CPatternU3Ek__BackingField_2)); }
	inline BsonString_t260379133 * get_U3CPatternU3Ek__BackingField_2() const { return ___U3CPatternU3Ek__BackingField_2; }
	inline BsonString_t260379133 ** get_address_of_U3CPatternU3Ek__BackingField_2() { return &___U3CPatternU3Ek__BackingField_2; }
	inline void set_U3CPatternU3Ek__BackingField_2(BsonString_t260379133 * value)
	{
		___U3CPatternU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPatternU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BsonRegex_t1920816205, ___U3COptionsU3Ek__BackingField_3)); }
	inline BsonString_t260379133 * get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline BsonString_t260379133 ** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(BsonString_t260379133 * value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3COptionsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
