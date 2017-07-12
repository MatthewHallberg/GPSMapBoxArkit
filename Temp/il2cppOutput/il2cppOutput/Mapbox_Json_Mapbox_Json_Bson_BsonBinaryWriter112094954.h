#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTimeKind2186819611.h"

// System.Text.Encoding
struct Encoding_t663144255;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonBinaryWriter
struct  BsonBinaryWriter_t112094954  : public Il2CppObject
{
public:
	// System.IO.BinaryWriter Mapbox.Json.Bson.BsonBinaryWriter::_writer
	BinaryWriter_t3179371318 * ____writer_1;
	// System.Byte[] Mapbox.Json.Bson.BsonBinaryWriter::_largeByteBuffer
	ByteU5BU5D_t3397334013* ____largeByteBuffer_2;
	// System.DateTimeKind Mapbox.Json.Bson.BsonBinaryWriter::<DateTimeKindHandling>k__BackingField
	int32_t ___U3CDateTimeKindHandlingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__writer_1() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_t112094954, ____writer_1)); }
	inline BinaryWriter_t3179371318 * get__writer_1() const { return ____writer_1; }
	inline BinaryWriter_t3179371318 ** get_address_of__writer_1() { return &____writer_1; }
	inline void set__writer_1(BinaryWriter_t3179371318 * value)
	{
		____writer_1 = value;
		Il2CppCodeGenWriteBarrier(&____writer_1, value);
	}

	inline static int32_t get_offset_of__largeByteBuffer_2() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_t112094954, ____largeByteBuffer_2)); }
	inline ByteU5BU5D_t3397334013* get__largeByteBuffer_2() const { return ____largeByteBuffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__largeByteBuffer_2() { return &____largeByteBuffer_2; }
	inline void set__largeByteBuffer_2(ByteU5BU5D_t3397334013* value)
	{
		____largeByteBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&____largeByteBuffer_2, value);
	}

	inline static int32_t get_offset_of_U3CDateTimeKindHandlingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_t112094954, ___U3CDateTimeKindHandlingU3Ek__BackingField_3)); }
	inline int32_t get_U3CDateTimeKindHandlingU3Ek__BackingField_3() const { return ___U3CDateTimeKindHandlingU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDateTimeKindHandlingU3Ek__BackingField_3() { return &___U3CDateTimeKindHandlingU3Ek__BackingField_3; }
	inline void set_U3CDateTimeKindHandlingU3Ek__BackingField_3(int32_t value)
	{
		___U3CDateTimeKindHandlingU3Ek__BackingField_3 = value;
	}
};

struct BsonBinaryWriter_t112094954_StaticFields
{
public:
	// System.Text.Encoding Mapbox.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t663144255 * ___Encoding_0;

public:
	inline static int32_t get_offset_of_Encoding_0() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_t112094954_StaticFields, ___Encoding_0)); }
	inline Encoding_t663144255 * get_Encoding_0() const { return ___Encoding_0; }
	inline Encoding_t663144255 ** get_address_of_Encoding_0() { return &___Encoding_0; }
	inline void set_Encoding_0(Encoding_t663144255 * value)
	{
		___Encoding_0 = value;
		Il2CppCodeGenWriteBarrier(&___Encoding_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
