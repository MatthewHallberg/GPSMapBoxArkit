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

// Mapbox.IO.Compression.InputBuffer
struct  InputBuffer_t2737451788  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.InputBuffer::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::start
	int32_t ___start_1;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::end
	int32_t ___end_2;
	// System.UInt32 Mapbox.IO.Compression.InputBuffer::bitBuffer
	uint32_t ___bitBuffer_3;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::bitsInBuffer
	int32_t ___bitsInBuffer_4;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InputBuffer_t2737451788, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(InputBuffer_t2737451788, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(InputBuffer_t2737451788, ___end_2)); }
	inline int32_t get_end_2() const { return ___end_2; }
	inline int32_t* get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(int32_t value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_bitBuffer_3() { return static_cast<int32_t>(offsetof(InputBuffer_t2737451788, ___bitBuffer_3)); }
	inline uint32_t get_bitBuffer_3() const { return ___bitBuffer_3; }
	inline uint32_t* get_address_of_bitBuffer_3() { return &___bitBuffer_3; }
	inline void set_bitBuffer_3(uint32_t value)
	{
		___bitBuffer_3 = value;
	}

	inline static int32_t get_offset_of_bitsInBuffer_4() { return static_cast<int32_t>(offsetof(InputBuffer_t2737451788, ___bitsInBuffer_4)); }
	inline int32_t get_bitsInBuffer_4() const { return ___bitsInBuffer_4; }
	inline int32_t* get_address_of_bitsInBuffer_4() { return &___bitsInBuffer_4; }
	inline void set_bitsInBuffer_4(int32_t value)
	{
		___bitsInBuffer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
