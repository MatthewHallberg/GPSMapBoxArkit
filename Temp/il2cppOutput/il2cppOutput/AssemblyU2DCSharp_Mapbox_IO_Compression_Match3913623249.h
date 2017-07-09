#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_MatchState1502204718.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.Match
struct  Match_t3913623249  : public Il2CppObject
{
public:
	// MatchState Mapbox.IO.Compression.Match::state
	int32_t ___state_0;
	// System.Int32 Mapbox.IO.Compression.Match::pos
	int32_t ___pos_1;
	// System.Int32 Mapbox.IO.Compression.Match::len
	int32_t ___len_2;
	// System.Byte Mapbox.IO.Compression.Match::symbol
	uint8_t ___symbol_3;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(Match_t3913623249, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(Match_t3913623249, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(Match_t3913623249, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_symbol_3() { return static_cast<int32_t>(offsetof(Match_t3913623249, ___symbol_3)); }
	inline uint8_t get_symbol_3() const { return ___symbol_3; }
	inline uint8_t* get_address_of_symbol_3() { return &___symbol_3; }
	inline void set_symbol_3(uint8_t value)
	{
		___symbol_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
