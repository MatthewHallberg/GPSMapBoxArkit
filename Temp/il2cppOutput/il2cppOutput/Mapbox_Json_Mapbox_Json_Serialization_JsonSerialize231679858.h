#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonSerializer754141078.h"

// Mapbox.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t2915891512;
// Mapbox.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t2935640646;
// Mapbox.Json.JsonSerializer
struct JsonSerializer_t754141078;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonSerializerProxy
struct  JsonSerializerProxy_t231679858  : public JsonSerializer_t754141078
{
public:
	// Mapbox.Json.Serialization.JsonSerializerInternalReader Mapbox.Json.Serialization.JsonSerializerProxy::_serializerReader
	JsonSerializerInternalReader_t2915891512 * ____serializerReader_31;
	// Mapbox.Json.Serialization.JsonSerializerInternalWriter Mapbox.Json.Serialization.JsonSerializerProxy::_serializerWriter
	JsonSerializerInternalWriter_t2935640646 * ____serializerWriter_32;
	// Mapbox.Json.JsonSerializer Mapbox.Json.Serialization.JsonSerializerProxy::_serializer
	JsonSerializer_t754141078 * ____serializer_33;

public:
	inline static int32_t get_offset_of__serializerReader_31() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t231679858, ____serializerReader_31)); }
	inline JsonSerializerInternalReader_t2915891512 * get__serializerReader_31() const { return ____serializerReader_31; }
	inline JsonSerializerInternalReader_t2915891512 ** get_address_of__serializerReader_31() { return &____serializerReader_31; }
	inline void set__serializerReader_31(JsonSerializerInternalReader_t2915891512 * value)
	{
		____serializerReader_31 = value;
		Il2CppCodeGenWriteBarrier(&____serializerReader_31, value);
	}

	inline static int32_t get_offset_of__serializerWriter_32() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t231679858, ____serializerWriter_32)); }
	inline JsonSerializerInternalWriter_t2935640646 * get__serializerWriter_32() const { return ____serializerWriter_32; }
	inline JsonSerializerInternalWriter_t2935640646 ** get_address_of__serializerWriter_32() { return &____serializerWriter_32; }
	inline void set__serializerWriter_32(JsonSerializerInternalWriter_t2935640646 * value)
	{
		____serializerWriter_32 = value;
		Il2CppCodeGenWriteBarrier(&____serializerWriter_32, value);
	}

	inline static int32_t get_offset_of__serializer_33() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t231679858, ____serializer_33)); }
	inline JsonSerializer_t754141078 * get__serializer_33() const { return ____serializer_33; }
	inline JsonSerializer_t754141078 ** get_address_of__serializer_33() { return &____serializer_33; }
	inline void set__serializer_33(JsonSerializer_t754141078 * value)
	{
		____serializer_33 = value;
		Il2CppCodeGenWriteBarrier(&____serializer_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
