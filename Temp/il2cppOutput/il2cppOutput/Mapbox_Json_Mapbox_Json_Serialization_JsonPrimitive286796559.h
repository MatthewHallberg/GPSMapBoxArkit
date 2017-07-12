#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Serialization_JsonContract3987907316.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_PrimitiveTypeCod2643848138.h"

// System.Collections.Generic.Dictionary`2<System.Type,Mapbox.Json.ReadType>
struct Dictionary_2_t588181453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonPrimitiveContract
struct  JsonPrimitiveContract_t286796559  : public JsonContract_t3987907316
{
public:
	// Mapbox.Json.Utilities.PrimitiveTypeCode Mapbox.Json.Serialization.JsonPrimitiveContract::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonPrimitiveContract_t286796559, ___U3CTypeCodeU3Ek__BackingField_21)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_21() const { return ___U3CTypeCodeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_21() { return &___U3CTypeCodeU3Ek__BackingField_21; }
	inline void set_U3CTypeCodeU3Ek__BackingField_21(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_21 = value;
	}
};

struct JsonPrimitiveContract_t286796559_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Mapbox.Json.ReadType> Mapbox.Json.Serialization.JsonPrimitiveContract::ReadTypeMap
	Dictionary_2_t588181453 * ___ReadTypeMap_22;

public:
	inline static int32_t get_offset_of_ReadTypeMap_22() { return static_cast<int32_t>(offsetof(JsonPrimitiveContract_t286796559_StaticFields, ___ReadTypeMap_22)); }
	inline Dictionary_2_t588181453 * get_ReadTypeMap_22() const { return ___ReadTypeMap_22; }
	inline Dictionary_2_t588181453 ** get_address_of_ReadTypeMap_22() { return &___ReadTypeMap_22; }
	inline void set_ReadTypeMap_22(Dictionary_2_t588181453 * value)
	{
		___ReadTypeMap_22 = value;
		Il2CppCodeGenWriteBarrier(&___ReadTypeMap_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
