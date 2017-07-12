#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonWriter1886137423.h"

// Mapbox.Json.Linq.JContainer
struct JContainer_t1655356485;
// Mapbox.Json.Linq.JValue
struct JValue_t987754451;
// Mapbox.Json.Linq.JToken
struct JToken_t221585239;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JTokenWriter
struct  JTokenWriter_t2104426008  : public JsonWriter_t1886137423
{
public:
	// Mapbox.Json.Linq.JContainer Mapbox.Json.Linq.JTokenWriter::_token
	JContainer_t1655356485 * ____token_14;
	// Mapbox.Json.Linq.JContainer Mapbox.Json.Linq.JTokenWriter::_parent
	JContainer_t1655356485 * ____parent_15;
	// Mapbox.Json.Linq.JValue Mapbox.Json.Linq.JTokenWriter::_value
	JValue_t987754451 * ____value_16;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JTokenWriter::_current
	JToken_t221585239 * ____current_17;

public:
	inline static int32_t get_offset_of__token_14() { return static_cast<int32_t>(offsetof(JTokenWriter_t2104426008, ____token_14)); }
	inline JContainer_t1655356485 * get__token_14() const { return ____token_14; }
	inline JContainer_t1655356485 ** get_address_of__token_14() { return &____token_14; }
	inline void set__token_14(JContainer_t1655356485 * value)
	{
		____token_14 = value;
		Il2CppCodeGenWriteBarrier(&____token_14, value);
	}

	inline static int32_t get_offset_of__parent_15() { return static_cast<int32_t>(offsetof(JTokenWriter_t2104426008, ____parent_15)); }
	inline JContainer_t1655356485 * get__parent_15() const { return ____parent_15; }
	inline JContainer_t1655356485 ** get_address_of__parent_15() { return &____parent_15; }
	inline void set__parent_15(JContainer_t1655356485 * value)
	{
		____parent_15 = value;
		Il2CppCodeGenWriteBarrier(&____parent_15, value);
	}

	inline static int32_t get_offset_of__value_16() { return static_cast<int32_t>(offsetof(JTokenWriter_t2104426008, ____value_16)); }
	inline JValue_t987754451 * get__value_16() const { return ____value_16; }
	inline JValue_t987754451 ** get_address_of__value_16() { return &____value_16; }
	inline void set__value_16(JValue_t987754451 * value)
	{
		____value_16 = value;
		Il2CppCodeGenWriteBarrier(&____value_16, value);
	}

	inline static int32_t get_offset_of__current_17() { return static_cast<int32_t>(offsetof(JTokenWriter_t2104426008, ____current_17)); }
	inline JToken_t221585239 * get__current_17() const { return ____current_17; }
	inline JToken_t221585239 ** get_address_of__current_17() { return &____current_17; }
	inline void set__current_17(JToken_t221585239 * value)
	{
		____current_17 = value;
		Il2CppCodeGenWriteBarrier(&____current_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
