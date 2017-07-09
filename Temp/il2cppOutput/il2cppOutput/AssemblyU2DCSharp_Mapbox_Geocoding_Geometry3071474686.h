#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.Geometry
struct  Geometry_t3071474686  : public Il2CppObject
{
public:
	// System.String Mapbox.Geocoding.Geometry::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Geocoding.Geometry::<Coordinates>k__BackingField
	Vector2d_t3730485367  ___U3CCoordinatesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Geometry_t3071474686, ___U3CTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCoordinatesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Geometry_t3071474686, ___U3CCoordinatesU3Ek__BackingField_1)); }
	inline Vector2d_t3730485367  get_U3CCoordinatesU3Ek__BackingField_1() const { return ___U3CCoordinatesU3Ek__BackingField_1; }
	inline Vector2d_t3730485367 * get_address_of_U3CCoordinatesU3Ek__BackingField_1() { return &___U3CCoordinatesU3Ek__BackingField_1; }
	inline void set_U3CCoordinatesU3Ek__BackingField_1(Vector2d_t3730485367  value)
	{
		___U3CCoordinatesU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
