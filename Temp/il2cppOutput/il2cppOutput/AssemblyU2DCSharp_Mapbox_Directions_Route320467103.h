#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Mapbox.Directions.Leg>
struct List_1_t3054602376;
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t3099606499;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.Route
struct  Route_t320467103  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Mapbox.Directions.Leg> Mapbox.Directions.Route::<Legs>k__BackingField
	List_1_t3054602376 * ___U3CLegsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Route::<Geometry>k__BackingField
	List_1_t3099606499 * ___U3CGeometryU3Ek__BackingField_1;
	// System.Double Mapbox.Directions.Route::<Duration>k__BackingField
	double ___U3CDurationU3Ek__BackingField_2;
	// System.Double Mapbox.Directions.Route::<Distance>k__BackingField
	double ___U3CDistanceU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CLegsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Route_t320467103, ___U3CLegsU3Ek__BackingField_0)); }
	inline List_1_t3054602376 * get_U3CLegsU3Ek__BackingField_0() const { return ___U3CLegsU3Ek__BackingField_0; }
	inline List_1_t3054602376 ** get_address_of_U3CLegsU3Ek__BackingField_0() { return &___U3CLegsU3Ek__BackingField_0; }
	inline void set_U3CLegsU3Ek__BackingField_0(List_1_t3054602376 * value)
	{
		___U3CLegsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLegsU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CGeometryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Route_t320467103, ___U3CGeometryU3Ek__BackingField_1)); }
	inline List_1_t3099606499 * get_U3CGeometryU3Ek__BackingField_1() const { return ___U3CGeometryU3Ek__BackingField_1; }
	inline List_1_t3099606499 ** get_address_of_U3CGeometryU3Ek__BackingField_1() { return &___U3CGeometryU3Ek__BackingField_1; }
	inline void set_U3CGeometryU3Ek__BackingField_1(List_1_t3099606499 * value)
	{
		___U3CGeometryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGeometryU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CDurationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Route_t320467103, ___U3CDurationU3Ek__BackingField_2)); }
	inline double get_U3CDurationU3Ek__BackingField_2() const { return ___U3CDurationU3Ek__BackingField_2; }
	inline double* get_address_of_U3CDurationU3Ek__BackingField_2() { return &___U3CDurationU3Ek__BackingField_2; }
	inline void set_U3CDurationU3Ek__BackingField_2(double value)
	{
		___U3CDurationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Route_t320467103, ___U3CDistanceU3Ek__BackingField_3)); }
	inline double get_U3CDistanceU3Ek__BackingField_3() const { return ___U3CDistanceU3Ek__BackingField_3; }
	inline double* get_address_of_U3CDistanceU3Ek__BackingField_3() { return &___U3CDistanceU3Ek__BackingField_3; }
	inline void set_U3CDistanceU3Ek__BackingField_3(double value)
	{
		___U3CDistanceU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
