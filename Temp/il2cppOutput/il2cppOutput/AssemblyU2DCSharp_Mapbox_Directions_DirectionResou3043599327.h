#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Platform_Resource2839633034.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// System.String
struct String_t;
// Mapbox.Directions.RoutingProfile
struct RoutingProfile_t3025365347;
// Mapbox.Utils.Vector2d[]
struct Vector2dU5BU5D_t4084614094;
// Mapbox.Utils.BearingFilter[]
struct BearingFilterU5BU5D_t595092015;
// Mapbox.Directions.Overview
struct Overview_t3658811743;
// System.Double[]
struct DoubleU5BU5D_t1889952540;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.DirectionResource
struct  DirectionResource_t3043599327  : public Resource_t2839633034
{
public:
	// System.String Mapbox.Directions.DirectionResource::apiEndpoint
	String_t* ___apiEndpoint_4;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.DirectionResource::profile
	RoutingProfile_t3025365347 * ___profile_5;
	// Mapbox.Utils.Vector2d[] Mapbox.Directions.DirectionResource::coordinates
	Vector2dU5BU5D_t4084614094* ___coordinates_6;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::alternatives
	Nullable_1_t2088641033  ___alternatives_7;
	// Mapbox.Utils.BearingFilter[] Mapbox.Directions.DirectionResource::bearings
	BearingFilterU5BU5D_t595092015* ___bearings_8;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::continueStraight
	Nullable_1_t2088641033  ___continueStraight_9;
	// Mapbox.Directions.Overview Mapbox.Directions.DirectionResource::overview
	Overview_t3658811743 * ___overview_10;
	// System.Double[] Mapbox.Directions.DirectionResource::radiuses
	DoubleU5BU5D_t1889952540* ___radiuses_11;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::steps
	Nullable_1_t2088641033  ___steps_12;

public:
	inline static int32_t get_offset_of_apiEndpoint_4() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___apiEndpoint_4)); }
	inline String_t* get_apiEndpoint_4() const { return ___apiEndpoint_4; }
	inline String_t** get_address_of_apiEndpoint_4() { return &___apiEndpoint_4; }
	inline void set_apiEndpoint_4(String_t* value)
	{
		___apiEndpoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___apiEndpoint_4, value);
	}

	inline static int32_t get_offset_of_profile_5() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___profile_5)); }
	inline RoutingProfile_t3025365347 * get_profile_5() const { return ___profile_5; }
	inline RoutingProfile_t3025365347 ** get_address_of_profile_5() { return &___profile_5; }
	inline void set_profile_5(RoutingProfile_t3025365347 * value)
	{
		___profile_5 = value;
		Il2CppCodeGenWriteBarrier(&___profile_5, value);
	}

	inline static int32_t get_offset_of_coordinates_6() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___coordinates_6)); }
	inline Vector2dU5BU5D_t4084614094* get_coordinates_6() const { return ___coordinates_6; }
	inline Vector2dU5BU5D_t4084614094** get_address_of_coordinates_6() { return &___coordinates_6; }
	inline void set_coordinates_6(Vector2dU5BU5D_t4084614094* value)
	{
		___coordinates_6 = value;
		Il2CppCodeGenWriteBarrier(&___coordinates_6, value);
	}

	inline static int32_t get_offset_of_alternatives_7() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___alternatives_7)); }
	inline Nullable_1_t2088641033  get_alternatives_7() const { return ___alternatives_7; }
	inline Nullable_1_t2088641033 * get_address_of_alternatives_7() { return &___alternatives_7; }
	inline void set_alternatives_7(Nullable_1_t2088641033  value)
	{
		___alternatives_7 = value;
	}

	inline static int32_t get_offset_of_bearings_8() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___bearings_8)); }
	inline BearingFilterU5BU5D_t595092015* get_bearings_8() const { return ___bearings_8; }
	inline BearingFilterU5BU5D_t595092015** get_address_of_bearings_8() { return &___bearings_8; }
	inline void set_bearings_8(BearingFilterU5BU5D_t595092015* value)
	{
		___bearings_8 = value;
		Il2CppCodeGenWriteBarrier(&___bearings_8, value);
	}

	inline static int32_t get_offset_of_continueStraight_9() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___continueStraight_9)); }
	inline Nullable_1_t2088641033  get_continueStraight_9() const { return ___continueStraight_9; }
	inline Nullable_1_t2088641033 * get_address_of_continueStraight_9() { return &___continueStraight_9; }
	inline void set_continueStraight_9(Nullable_1_t2088641033  value)
	{
		___continueStraight_9 = value;
	}

	inline static int32_t get_offset_of_overview_10() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___overview_10)); }
	inline Overview_t3658811743 * get_overview_10() const { return ___overview_10; }
	inline Overview_t3658811743 ** get_address_of_overview_10() { return &___overview_10; }
	inline void set_overview_10(Overview_t3658811743 * value)
	{
		___overview_10 = value;
		Il2CppCodeGenWriteBarrier(&___overview_10, value);
	}

	inline static int32_t get_offset_of_radiuses_11() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___radiuses_11)); }
	inline DoubleU5BU5D_t1889952540* get_radiuses_11() const { return ___radiuses_11; }
	inline DoubleU5BU5D_t1889952540** get_address_of_radiuses_11() { return &___radiuses_11; }
	inline void set_radiuses_11(DoubleU5BU5D_t1889952540* value)
	{
		___radiuses_11 = value;
		Il2CppCodeGenWriteBarrier(&___radiuses_11, value);
	}

	inline static int32_t get_offset_of_steps_12() { return static_cast<int32_t>(offsetof(DirectionResource_t3043599327, ___steps_12)); }
	inline Nullable_1_t2088641033  get_steps_12() const { return ___steps_12; }
	inline Nullable_1_t2088641033 * get_address_of_steps_12() { return &___steps_12; }
	inline void set_steps_12(Nullable_1_t2088641033  value)
	{
		___steps_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
