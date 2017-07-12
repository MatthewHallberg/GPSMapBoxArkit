#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.OutputBuffer/BufferState
struct  BufferState_t2419044732 
{
public:
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::pos
	int32_t ___pos_0;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitBuf
	uint32_t ___bitBuf_1;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitCount
	int32_t ___bitCount_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(BufferState_t2419044732, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_bitBuf_1() { return static_cast<int32_t>(offsetof(BufferState_t2419044732, ___bitBuf_1)); }
	inline uint32_t get_bitBuf_1() const { return ___bitBuf_1; }
	inline uint32_t* get_address_of_bitBuf_1() { return &___bitBuf_1; }
	inline void set_bitBuf_1(uint32_t value)
	{
		___bitBuf_1 = value;
	}

	inline static int32_t get_offset_of_bitCount_2() { return static_cast<int32_t>(offsetof(BufferState_t2419044732, ___bitCount_2)); }
	inline int32_t get_bitCount_2() const { return ___bitCount_2; }
	inline int32_t* get_address_of_bitCount_2() { return &___bitCount_2; }
	inline void set_bitCount_2(int32_t value)
	{
		___bitCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
