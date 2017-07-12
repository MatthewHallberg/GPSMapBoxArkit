#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonException3617647423.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonReaderException
struct  JsonReaderException_t2287253696  : public JsonException_t3617647423
{
public:
	// System.Int32 Mapbox.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_11;
	// System.Int32 Mapbox.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_12;
	// System.String Mapbox.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CLineNumberU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonReaderException_t2287253696, ___U3CLineNumberU3Ek__BackingField_11)); }
	inline int32_t get_U3CLineNumberU3Ek__BackingField_11() const { return ___U3CLineNumberU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLineNumberU3Ek__BackingField_11() { return &___U3CLineNumberU3Ek__BackingField_11; }
	inline void set_U3CLineNumberU3Ek__BackingField_11(int32_t value)
	{
		___U3CLineNumberU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLinePositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonReaderException_t2287253696, ___U3CLinePositionU3Ek__BackingField_12)); }
	inline int32_t get_U3CLinePositionU3Ek__BackingField_12() const { return ___U3CLinePositionU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLinePositionU3Ek__BackingField_12() { return &___U3CLinePositionU3Ek__BackingField_12; }
	inline void set_U3CLinePositionU3Ek__BackingField_12(int32_t value)
	{
		___U3CLinePositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReaderException_t2287253696, ___U3CPathU3Ek__BackingField_13)); }
	inline String_t* get_U3CPathU3Ek__BackingField_13() const { return ___U3CPathU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_13() { return &___U3CPathU3Ek__BackingField_13; }
	inline void set_U3CPathU3Ek__BackingField_13(String_t* value)
	{
		___U3CPathU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
