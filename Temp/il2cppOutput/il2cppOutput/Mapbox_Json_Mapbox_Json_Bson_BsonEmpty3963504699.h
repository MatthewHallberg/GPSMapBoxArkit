#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Bson_BsonToken1725176127.h"
#include "Mapbox_Json_Mapbox_Json_Bson_BsonType4093671382.h"

// Mapbox.Json.Bson.BsonToken
struct BsonToken_t1725176127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonEmpty
struct  BsonEmpty_t3963504699  : public BsonToken_t1725176127
{
public:
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonEmpty::<Type>k__BackingField
	int8_t ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BsonEmpty_t3963504699, ___U3CTypeU3Ek__BackingField_4)); }
	inline int8_t get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline int8_t* get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(int8_t value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
	}
};

struct BsonEmpty_t3963504699_StaticFields
{
public:
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonEmpty::Null
	BsonToken_t1725176127 * ___Null_2;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonEmpty::Undefined
	BsonToken_t1725176127 * ___Undefined_3;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(BsonEmpty_t3963504699_StaticFields, ___Null_2)); }
	inline BsonToken_t1725176127 * get_Null_2() const { return ___Null_2; }
	inline BsonToken_t1725176127 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(BsonToken_t1725176127 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier(&___Null_2, value);
	}

	inline static int32_t get_offset_of_Undefined_3() { return static_cast<int32_t>(offsetof(BsonEmpty_t3963504699_StaticFields, ___Undefined_3)); }
	inline BsonToken_t1725176127 * get_Undefined_3() const { return ___Undefined_3; }
	inline BsonToken_t1725176127 ** get_address_of_Undefined_3() { return &___Undefined_3; }
	inline void set_Undefined_3(BsonToken_t1725176127 * value)
	{
		___Undefined_3 = value;
		Il2CppCodeGenWriteBarrier(&___Undefined_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
