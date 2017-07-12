#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonReader705127463.h"

// Mapbox.Json.JsonReader
struct JsonReader_t705127463;
// Mapbox.Json.JsonTextWriter
struct JsonTextWriter_t3202136832;
// System.IO.StringWriter
struct StringWriter_t4139609088;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.TraceJsonReader
struct  TraceJsonReader_t3478734114  : public JsonReader_t705127463
{
public:
	// Mapbox.Json.JsonReader Mapbox.Json.Serialization.TraceJsonReader::_innerReader
	JsonReader_t705127463 * ____innerReader_15;
	// Mapbox.Json.JsonTextWriter Mapbox.Json.Serialization.TraceJsonReader::_textWriter
	JsonTextWriter_t3202136832 * ____textWriter_16;
	// System.IO.StringWriter Mapbox.Json.Serialization.TraceJsonReader::_sw
	StringWriter_t4139609088 * ____sw_17;

public:
	inline static int32_t get_offset_of__innerReader_15() { return static_cast<int32_t>(offsetof(TraceJsonReader_t3478734114, ____innerReader_15)); }
	inline JsonReader_t705127463 * get__innerReader_15() const { return ____innerReader_15; }
	inline JsonReader_t705127463 ** get_address_of__innerReader_15() { return &____innerReader_15; }
	inline void set__innerReader_15(JsonReader_t705127463 * value)
	{
		____innerReader_15 = value;
		Il2CppCodeGenWriteBarrier(&____innerReader_15, value);
	}

	inline static int32_t get_offset_of__textWriter_16() { return static_cast<int32_t>(offsetof(TraceJsonReader_t3478734114, ____textWriter_16)); }
	inline JsonTextWriter_t3202136832 * get__textWriter_16() const { return ____textWriter_16; }
	inline JsonTextWriter_t3202136832 ** get_address_of__textWriter_16() { return &____textWriter_16; }
	inline void set__textWriter_16(JsonTextWriter_t3202136832 * value)
	{
		____textWriter_16 = value;
		Il2CppCodeGenWriteBarrier(&____textWriter_16, value);
	}

	inline static int32_t get_offset_of__sw_17() { return static_cast<int32_t>(offsetof(TraceJsonReader_t3478734114, ____sw_17)); }
	inline StringWriter_t4139609088 * get__sw_17() const { return ____sw_17; }
	inline StringWriter_t4139609088 ** get_address_of__sw_17() { return &____sw_17; }
	inline void set__sw_17(StringWriter_t4139609088 * value)
	{
		____sw_17 = value;
		Il2CppCodeGenWriteBarrier(&____sw_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
