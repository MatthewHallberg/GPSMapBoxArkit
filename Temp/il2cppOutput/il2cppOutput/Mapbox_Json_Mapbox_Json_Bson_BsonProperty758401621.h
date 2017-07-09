#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Json.Bson.BsonString
struct BsonString_t260379133;
// Mapbox.Json.Bson.BsonToken
struct BsonToken_t1725176127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonProperty
struct  BsonProperty_t758401621  : public Il2CppObject
{
public:
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t260379133 * ___U3CNameU3Ek__BackingField_0;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_t1725176127 * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BsonProperty_t758401621, ___U3CNameU3Ek__BackingField_0)); }
	inline BsonString_t260379133 * get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline BsonString_t260379133 ** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(BsonString_t260379133 * value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BsonProperty_t758401621, ___U3CValueU3Ek__BackingField_1)); }
	inline BsonToken_t1725176127 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline BsonToken_t1725176127 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(BsonToken_t1725176127 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
