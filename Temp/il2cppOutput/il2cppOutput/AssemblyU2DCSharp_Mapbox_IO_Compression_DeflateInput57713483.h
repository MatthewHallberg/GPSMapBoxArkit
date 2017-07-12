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

// Mapbox.IO.Compression.DeflateInput
struct  DeflateInput_t57713483  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateInput::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::count
	int32_t ___count_1;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::startIndex
	int32_t ___startIndex_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateInput_t57713483, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(DeflateInput_t57713483, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_startIndex_2() { return static_cast<int32_t>(offsetof(DeflateInput_t57713483, ___startIndex_2)); }
	inline int32_t get_startIndex_2() const { return ___startIndex_2; }
	inline int32_t* get_address_of_startIndex_2() { return &___startIndex_2; }
	inline void set_startIndex_2(int32_t value)
	{
		___startIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
