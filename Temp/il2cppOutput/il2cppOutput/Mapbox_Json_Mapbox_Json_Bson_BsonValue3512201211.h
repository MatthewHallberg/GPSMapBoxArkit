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

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonValue
struct  BsonValue_t3512201211  : public BsonToken_t1725176127
{
public:
	// System.Object Mapbox.Json.Bson.BsonValue::_value
	Il2CppObject * ____value_2;
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonValue::_type
	int8_t ____type_3;

public:
	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(BsonValue_t3512201211, ____value_2)); }
	inline Il2CppObject * get__value_2() const { return ____value_2; }
	inline Il2CppObject ** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(Il2CppObject * value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier(&____value_2, value);
	}

	inline static int32_t get_offset_of__type_3() { return static_cast<int32_t>(offsetof(BsonValue_t3512201211, ____type_3)); }
	inline int8_t get__type_3() const { return ____type_3; }
	inline int8_t* get_address_of__type_3() { return &____type_3; }
	inline void set__type_3(int8_t value)
	{
		____type_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
