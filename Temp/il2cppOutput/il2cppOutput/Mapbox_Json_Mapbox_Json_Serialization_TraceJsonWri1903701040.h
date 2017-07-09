#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonWriter1886137423.h"

// Mapbox.Json.JsonWriter
struct JsonWriter_t1886137423;
// Mapbox.Json.JsonTextWriter
struct JsonTextWriter_t3202136832;
// System.IO.StringWriter
struct StringWriter_t4139609088;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.TraceJsonWriter
struct  TraceJsonWriter_t1903701040  : public JsonWriter_t1886137423
{
public:
	// Mapbox.Json.JsonWriter Mapbox.Json.Serialization.TraceJsonWriter::_innerWriter
	JsonWriter_t1886137423 * ____innerWriter_14;
	// Mapbox.Json.JsonTextWriter Mapbox.Json.Serialization.TraceJsonWriter::_textWriter
	JsonTextWriter_t3202136832 * ____textWriter_15;
	// System.IO.StringWriter Mapbox.Json.Serialization.TraceJsonWriter::_sw
	StringWriter_t4139609088 * ____sw_16;

public:
	inline static int32_t get_offset_of__innerWriter_14() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t1903701040, ____innerWriter_14)); }
	inline JsonWriter_t1886137423 * get__innerWriter_14() const { return ____innerWriter_14; }
	inline JsonWriter_t1886137423 ** get_address_of__innerWriter_14() { return &____innerWriter_14; }
	inline void set__innerWriter_14(JsonWriter_t1886137423 * value)
	{
		____innerWriter_14 = value;
		Il2CppCodeGenWriteBarrier(&____innerWriter_14, value);
	}

	inline static int32_t get_offset_of__textWriter_15() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t1903701040, ____textWriter_15)); }
	inline JsonTextWriter_t3202136832 * get__textWriter_15() const { return ____textWriter_15; }
	inline JsonTextWriter_t3202136832 ** get_address_of__textWriter_15() { return &____textWriter_15; }
	inline void set__textWriter_15(JsonTextWriter_t3202136832 * value)
	{
		____textWriter_15 = value;
		Il2CppCodeGenWriteBarrier(&____textWriter_15, value);
	}

	inline static int32_t get_offset_of__sw_16() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t1903701040, ____sw_16)); }
	inline StringWriter_t4139609088 * get__sw_16() const { return ____sw_16; }
	inline StringWriter_t4139609088 ** get_address_of__sw_16() { return &____sw_16; }
	inline void set__sw_16(StringWriter_t4139609088 * value)
	{
		____sw_16 = value;
		Il2CppCodeGenWriteBarrier(&____sw_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
