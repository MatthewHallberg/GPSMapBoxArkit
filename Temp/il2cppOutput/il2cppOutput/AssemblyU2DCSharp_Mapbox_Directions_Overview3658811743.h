#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Directions.Overview
struct Overview_t3658811743;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.Overview
struct  Overview_t3658811743  : public Il2CppObject
{
public:
	// System.String Mapbox.Directions.Overview::overview
	String_t* ___overview_3;

public:
	inline static int32_t get_offset_of_overview_3() { return static_cast<int32_t>(offsetof(Overview_t3658811743, ___overview_3)); }
	inline String_t* get_overview_3() const { return ___overview_3; }
	inline String_t** get_address_of_overview_3() { return &___overview_3; }
	inline void set_overview_3(String_t* value)
	{
		___overview_3 = value;
		Il2CppCodeGenWriteBarrier(&___overview_3, value);
	}
};

struct Overview_t3658811743_StaticFields
{
public:
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::Full
	Overview_t3658811743 * ___Full_0;
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::Simplified
	Overview_t3658811743 * ___Simplified_1;
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::False
	Overview_t3658811743 * ___False_2;

public:
	inline static int32_t get_offset_of_Full_0() { return static_cast<int32_t>(offsetof(Overview_t3658811743_StaticFields, ___Full_0)); }
	inline Overview_t3658811743 * get_Full_0() const { return ___Full_0; }
	inline Overview_t3658811743 ** get_address_of_Full_0() { return &___Full_0; }
	inline void set_Full_0(Overview_t3658811743 * value)
	{
		___Full_0 = value;
		Il2CppCodeGenWriteBarrier(&___Full_0, value);
	}

	inline static int32_t get_offset_of_Simplified_1() { return static_cast<int32_t>(offsetof(Overview_t3658811743_StaticFields, ___Simplified_1)); }
	inline Overview_t3658811743 * get_Simplified_1() const { return ___Simplified_1; }
	inline Overview_t3658811743 ** get_address_of_Simplified_1() { return &___Simplified_1; }
	inline void set_Simplified_1(Overview_t3658811743 * value)
	{
		___Simplified_1 = value;
		Il2CppCodeGenWriteBarrier(&___Simplified_1, value);
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(Overview_t3658811743_StaticFields, ___False_2)); }
	inline Overview_t3658811743 * get_False_2() const { return ___False_2; }
	inline Overview_t3658811743 ** get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(Overview_t3658811743 * value)
	{
		___False_2 = value;
		Il2CppCodeGenWriteBarrier(&___False_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
