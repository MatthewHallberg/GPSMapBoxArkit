#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Geocoding_GeocodeResource1609166343.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.ReverseGeocodeResource
struct  ReverseGeocodeResource_t910734276  : public GeocodeResource_1_t1609166343
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Geocoding.ReverseGeocodeResource::query
	Vector2d_t3730485367  ___query_8;

public:
	inline static int32_t get_offset_of_query_8() { return static_cast<int32_t>(offsetof(ReverseGeocodeResource_t910734276, ___query_8)); }
	inline Vector2d_t3730485367  get_query_8() const { return ___query_8; }
	inline Vector2d_t3730485367 * get_address_of_query_8() { return &___query_8; }
	inline void set_query_8(Vector2d_t3730485367  value)
	{
		___query_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
