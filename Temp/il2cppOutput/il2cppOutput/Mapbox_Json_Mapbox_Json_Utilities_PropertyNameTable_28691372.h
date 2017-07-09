#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Mapbox.Json.Utilities.PropertyNameTable/Entry
struct Entry_t28691372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.PropertyNameTable/Entry
struct  Entry_t28691372  : public Il2CppObject
{
public:
	// System.String Mapbox.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Mapbox.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Mapbox.Json.Utilities.PropertyNameTable/Entry Mapbox.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_t28691372 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t28691372, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t28691372, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t28691372, ___Next_2)); }
	inline Entry_t28691372 * get_Next_2() const { return ___Next_2; }
	inline Entry_t28691372 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t28691372 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier(&___Next_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
