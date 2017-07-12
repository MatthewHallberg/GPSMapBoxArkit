#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Vector2dBounds
struct  Vector2dBounds_t2768535998 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.Vector2dBounds::SouthWest
	Vector2d_t3730485367  ___SouthWest_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.Vector2dBounds::NorthEast
	Vector2d_t3730485367  ___NorthEast_1;

public:
	inline static int32_t get_offset_of_SouthWest_0() { return static_cast<int32_t>(offsetof(Vector2dBounds_t2768535998, ___SouthWest_0)); }
	inline Vector2d_t3730485367  get_SouthWest_0() const { return ___SouthWest_0; }
	inline Vector2d_t3730485367 * get_address_of_SouthWest_0() { return &___SouthWest_0; }
	inline void set_SouthWest_0(Vector2d_t3730485367  value)
	{
		___SouthWest_0 = value;
	}

	inline static int32_t get_offset_of_NorthEast_1() { return static_cast<int32_t>(offsetof(Vector2dBounds_t2768535998, ___NorthEast_1)); }
	inline Vector2d_t3730485367  get_NorthEast_1() const { return ___NorthEast_1; }
	inline Vector2d_t3730485367 * get_address_of_NorthEast_1() { return &___NorthEast_1; }
	inline void set_NorthEast_1(Vector2d_t3730485367  value)
	{
		___NorthEast_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
