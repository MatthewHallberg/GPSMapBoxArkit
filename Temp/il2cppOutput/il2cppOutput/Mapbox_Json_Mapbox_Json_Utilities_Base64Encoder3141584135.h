#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.Base64Encoder
struct  Base64Encoder_t3141584135  : public Il2CppObject
{
public:
	// System.Char[] Mapbox.Json.Utilities.Base64Encoder::_charsLine
	CharU5BU5D_t1328083999* ____charsLine_0;
	// System.IO.TextWriter Mapbox.Json.Utilities.Base64Encoder::_writer
	TextWriter_t4027217640 * ____writer_1;
	// System.Byte[] Mapbox.Json.Utilities.Base64Encoder::_leftOverBytes
	ByteU5BU5D_t3397334013* ____leftOverBytes_2;
	// System.Int32 Mapbox.Json.Utilities.Base64Encoder::_leftOverBytesCount
	int32_t ____leftOverBytesCount_3;

public:
	inline static int32_t get_offset_of__charsLine_0() { return static_cast<int32_t>(offsetof(Base64Encoder_t3141584135, ____charsLine_0)); }
	inline CharU5BU5D_t1328083999* get__charsLine_0() const { return ____charsLine_0; }
	inline CharU5BU5D_t1328083999** get_address_of__charsLine_0() { return &____charsLine_0; }
	inline void set__charsLine_0(CharU5BU5D_t1328083999* value)
	{
		____charsLine_0 = value;
		Il2CppCodeGenWriteBarrier(&____charsLine_0, value);
	}

	inline static int32_t get_offset_of__writer_1() { return static_cast<int32_t>(offsetof(Base64Encoder_t3141584135, ____writer_1)); }
	inline TextWriter_t4027217640 * get__writer_1() const { return ____writer_1; }
	inline TextWriter_t4027217640 ** get_address_of__writer_1() { return &____writer_1; }
	inline void set__writer_1(TextWriter_t4027217640 * value)
	{
		____writer_1 = value;
		Il2CppCodeGenWriteBarrier(&____writer_1, value);
	}

	inline static int32_t get_offset_of__leftOverBytes_2() { return static_cast<int32_t>(offsetof(Base64Encoder_t3141584135, ____leftOverBytes_2)); }
	inline ByteU5BU5D_t3397334013* get__leftOverBytes_2() const { return ____leftOverBytes_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__leftOverBytes_2() { return &____leftOverBytes_2; }
	inline void set__leftOverBytes_2(ByteU5BU5D_t3397334013* value)
	{
		____leftOverBytes_2 = value;
		Il2CppCodeGenWriteBarrier(&____leftOverBytes_2, value);
	}

	inline static int32_t get_offset_of__leftOverBytesCount_3() { return static_cast<int32_t>(offsetof(Base64Encoder_t3141584135, ____leftOverBytesCount_3)); }
	inline int32_t get__leftOverBytesCount_3() const { return ____leftOverBytesCount_3; }
	inline int32_t* get_address_of__leftOverBytesCount_3() { return &____leftOverBytesCount_3; }
	inline void set__leftOverBytesCount_3(int32_t value)
	{
		____leftOverBytesCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
