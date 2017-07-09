#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.OutputBuffer
struct  OutputBuffer_t3064841081  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputBuffer::byteBuffer
	ByteU5BU5D_t3397334013* ___byteBuffer_0;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::pos
	int32_t ___pos_1;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer::bitBuf
	uint32_t ___bitBuf_2;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::bitCount
	int32_t ___bitCount_3;

public:
	inline static int32_t get_offset_of_byteBuffer_0() { return static_cast<int32_t>(offsetof(OutputBuffer_t3064841081, ___byteBuffer_0)); }
	inline ByteU5BU5D_t3397334013* get_byteBuffer_0() const { return ___byteBuffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_byteBuffer_0() { return &___byteBuffer_0; }
	inline void set_byteBuffer_0(ByteU5BU5D_t3397334013* value)
	{
		___byteBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___byteBuffer_0, value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(OutputBuffer_t3064841081, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_bitBuf_2() { return static_cast<int32_t>(offsetof(OutputBuffer_t3064841081, ___bitBuf_2)); }
	inline uint32_t get_bitBuf_2() const { return ___bitBuf_2; }
	inline uint32_t* get_address_of_bitBuf_2() { return &___bitBuf_2; }
	inline void set_bitBuf_2(uint32_t value)
	{
		___bitBuf_2 = value;
	}

	inline static int32_t get_offset_of_bitCount_3() { return static_cast<int32_t>(offsetof(OutputBuffer_t3064841081, ___bitCount_3)); }
	inline int32_t get_bitCount_3() const { return ___bitCount_3; }
	inline int32_t* get_address_of_bitCount_3() { return &___bitCount_3; }
	inline void set_bitCount_3(int32_t value)
	{
		___bitCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
