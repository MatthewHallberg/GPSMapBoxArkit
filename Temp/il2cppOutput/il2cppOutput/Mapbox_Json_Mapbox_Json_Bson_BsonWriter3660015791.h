#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonWriter1886137423.h"

// Mapbox.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t112094954;
// Mapbox.Json.Bson.BsonToken
struct BsonToken_t1725176127;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonWriter
struct  BsonWriter_t3660015791  : public JsonWriter_t1886137423
{
public:
	// Mapbox.Json.Bson.BsonBinaryWriter Mapbox.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t112094954 * ____writer_14;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonWriter::_root
	BsonToken_t1725176127 * ____root_15;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonWriter::_parent
	BsonToken_t1725176127 * ____parent_16;
	// System.String Mapbox.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_17;

public:
	inline static int32_t get_offset_of__writer_14() { return static_cast<int32_t>(offsetof(BsonWriter_t3660015791, ____writer_14)); }
	inline BsonBinaryWriter_t112094954 * get__writer_14() const { return ____writer_14; }
	inline BsonBinaryWriter_t112094954 ** get_address_of__writer_14() { return &____writer_14; }
	inline void set__writer_14(BsonBinaryWriter_t112094954 * value)
	{
		____writer_14 = value;
		Il2CppCodeGenWriteBarrier(&____writer_14, value);
	}

	inline static int32_t get_offset_of__root_15() { return static_cast<int32_t>(offsetof(BsonWriter_t3660015791, ____root_15)); }
	inline BsonToken_t1725176127 * get__root_15() const { return ____root_15; }
	inline BsonToken_t1725176127 ** get_address_of__root_15() { return &____root_15; }
	inline void set__root_15(BsonToken_t1725176127 * value)
	{
		____root_15 = value;
		Il2CppCodeGenWriteBarrier(&____root_15, value);
	}

	inline static int32_t get_offset_of__parent_16() { return static_cast<int32_t>(offsetof(BsonWriter_t3660015791, ____parent_16)); }
	inline BsonToken_t1725176127 * get__parent_16() const { return ____parent_16; }
	inline BsonToken_t1725176127 ** get_address_of__parent_16() { return &____parent_16; }
	inline void set__parent_16(BsonToken_t1725176127 * value)
	{
		____parent_16 = value;
		Il2CppCodeGenWriteBarrier(&____parent_16, value);
	}

	inline static int32_t get_offset_of__propertyName_17() { return static_cast<int32_t>(offsetof(BsonWriter_t3660015791, ____propertyName_17)); }
	inline String_t* get__propertyName_17() const { return ____propertyName_17; }
	inline String_t** get_address_of__propertyName_17() { return &____propertyName_17; }
	inline void set__propertyName_17(String_t* value)
	{
		____propertyName_17 = value;
		Il2CppCodeGenWriteBarrier(&____propertyName_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
