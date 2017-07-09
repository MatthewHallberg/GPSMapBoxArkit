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

// Mapbox.Json.JsonWriterException
struct  JsonWriterException_t4250353334  : public JsonException_t3617647423
{
public:
	// System.String Mapbox.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonWriterException_t4250353334, ___U3CPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CPathU3Ek__BackingField_11() const { return ___U3CPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_11() { return &___U3CPathU3Ek__BackingField_11; }
	inline void set_U3CPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
