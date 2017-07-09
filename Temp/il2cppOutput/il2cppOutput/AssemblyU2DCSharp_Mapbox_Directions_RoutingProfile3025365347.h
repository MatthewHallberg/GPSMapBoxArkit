#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Directions.RoutingProfile
struct RoutingProfile_t3025365347;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.RoutingProfile
struct  RoutingProfile_t3025365347  : public Il2CppObject
{
public:
	// System.String Mapbox.Directions.RoutingProfile::profile
	String_t* ___profile_3;

public:
	inline static int32_t get_offset_of_profile_3() { return static_cast<int32_t>(offsetof(RoutingProfile_t3025365347, ___profile_3)); }
	inline String_t* get_profile_3() const { return ___profile_3; }
	inline String_t** get_address_of_profile_3() { return &___profile_3; }
	inline void set_profile_3(String_t* value)
	{
		___profile_3 = value;
		Il2CppCodeGenWriteBarrier(&___profile_3, value);
	}
};

struct RoutingProfile_t3025365347_StaticFields
{
public:
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Driving
	RoutingProfile_t3025365347 * ___Driving_0;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Walking
	RoutingProfile_t3025365347 * ___Walking_1;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Cycling
	RoutingProfile_t3025365347 * ___Cycling_2;

public:
	inline static int32_t get_offset_of_Driving_0() { return static_cast<int32_t>(offsetof(RoutingProfile_t3025365347_StaticFields, ___Driving_0)); }
	inline RoutingProfile_t3025365347 * get_Driving_0() const { return ___Driving_0; }
	inline RoutingProfile_t3025365347 ** get_address_of_Driving_0() { return &___Driving_0; }
	inline void set_Driving_0(RoutingProfile_t3025365347 * value)
	{
		___Driving_0 = value;
		Il2CppCodeGenWriteBarrier(&___Driving_0, value);
	}

	inline static int32_t get_offset_of_Walking_1() { return static_cast<int32_t>(offsetof(RoutingProfile_t3025365347_StaticFields, ___Walking_1)); }
	inline RoutingProfile_t3025365347 * get_Walking_1() const { return ___Walking_1; }
	inline RoutingProfile_t3025365347 ** get_address_of_Walking_1() { return &___Walking_1; }
	inline void set_Walking_1(RoutingProfile_t3025365347 * value)
	{
		___Walking_1 = value;
		Il2CppCodeGenWriteBarrier(&___Walking_1, value);
	}

	inline static int32_t get_offset_of_Cycling_2() { return static_cast<int32_t>(offsetof(RoutingProfile_t3025365347_StaticFields, ___Cycling_2)); }
	inline RoutingProfile_t3025365347 * get_Cycling_2() const { return ___Cycling_2; }
	inline RoutingProfile_t3025365347 ** get_address_of_Cycling_2() { return &___Cycling_2; }
	inline void set_Cycling_2(RoutingProfile_t3025365347 * value)
	{
		___Cycling_2 = value;
		Il2CppCodeGenWriteBarrier(&___Cycling_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
