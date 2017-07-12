#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Mapbox.Directions.Intersection>
struct List_1_t2141757457;
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t3099606499;
// Mapbox.Directions.Maneuver
struct Maneuver_t3359337115;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.Step
struct  Step_t3681463660  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Mapbox.Directions.Intersection> Mapbox.Directions.Step::<Intersections>k__BackingField
	List_1_t2141757457 * ___U3CIntersectionsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Step::<Geometry>k__BackingField
	List_1_t3099606499 * ___U3CGeometryU3Ek__BackingField_1;
	// Mapbox.Directions.Maneuver Mapbox.Directions.Step::<Maneuver>k__BackingField
	Maneuver_t3359337115 * ___U3CManeuverU3Ek__BackingField_2;
	// System.Double Mapbox.Directions.Step::<Duration>k__BackingField
	double ___U3CDurationU3Ek__BackingField_3;
	// System.Double Mapbox.Directions.Step::<Distance>k__BackingField
	double ___U3CDistanceU3Ek__BackingField_4;
	// System.String Mapbox.Directions.Step::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// System.String Mapbox.Directions.Step::<Mode>k__BackingField
	String_t* ___U3CModeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIntersectionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CIntersectionsU3Ek__BackingField_0)); }
	inline List_1_t2141757457 * get_U3CIntersectionsU3Ek__BackingField_0() const { return ___U3CIntersectionsU3Ek__BackingField_0; }
	inline List_1_t2141757457 ** get_address_of_U3CIntersectionsU3Ek__BackingField_0() { return &___U3CIntersectionsU3Ek__BackingField_0; }
	inline void set_U3CIntersectionsU3Ek__BackingField_0(List_1_t2141757457 * value)
	{
		___U3CIntersectionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIntersectionsU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CGeometryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CGeometryU3Ek__BackingField_1)); }
	inline List_1_t3099606499 * get_U3CGeometryU3Ek__BackingField_1() const { return ___U3CGeometryU3Ek__BackingField_1; }
	inline List_1_t3099606499 ** get_address_of_U3CGeometryU3Ek__BackingField_1() { return &___U3CGeometryU3Ek__BackingField_1; }
	inline void set_U3CGeometryU3Ek__BackingField_1(List_1_t3099606499 * value)
	{
		___U3CGeometryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGeometryU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CManeuverU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CManeuverU3Ek__BackingField_2)); }
	inline Maneuver_t3359337115 * get_U3CManeuverU3Ek__BackingField_2() const { return ___U3CManeuverU3Ek__BackingField_2; }
	inline Maneuver_t3359337115 ** get_address_of_U3CManeuverU3Ek__BackingField_2() { return &___U3CManeuverU3Ek__BackingField_2; }
	inline void set_U3CManeuverU3Ek__BackingField_2(Maneuver_t3359337115 * value)
	{
		___U3CManeuverU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CManeuverU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CDurationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CDurationU3Ek__BackingField_3)); }
	inline double get_U3CDurationU3Ek__BackingField_3() const { return ___U3CDurationU3Ek__BackingField_3; }
	inline double* get_address_of_U3CDurationU3Ek__BackingField_3() { return &___U3CDurationU3Ek__BackingField_3; }
	inline void set_U3CDurationU3Ek__BackingField_3(double value)
	{
		___U3CDurationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CDistanceU3Ek__BackingField_4)); }
	inline double get_U3CDistanceU3Ek__BackingField_4() const { return ___U3CDistanceU3Ek__BackingField_4; }
	inline double* get_address_of_U3CDistanceU3Ek__BackingField_4() { return &___U3CDistanceU3Ek__BackingField_4; }
	inline void set_U3CDistanceU3Ek__BackingField_4(double value)
	{
		___U3CDistanceU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CNameU3Ek__BackingField_5() const { return ___U3CNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_5() { return &___U3CNameU3Ek__BackingField_5; }
	inline void set_U3CNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Step_t3681463660, ___U3CModeU3Ek__BackingField_6)); }
	inline String_t* get_U3CModeU3Ek__BackingField_6() const { return ___U3CModeU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CModeU3Ek__BackingField_6() { return &___U3CModeU3Ek__BackingField_6; }
	inline void set_U3CModeU3Ek__BackingField_6(String_t* value)
	{
		___U3CModeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CModeU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
