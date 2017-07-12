#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.LocationUpdatedEventArgs
struct  LocationUpdatedEventArgs_t2281609809  : public EventArgs_t3289624707
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Unity.Location.LocationUpdatedEventArgs::Location
	Vector2d_t3730485367  ___Location_1;

public:
	inline static int32_t get_offset_of_Location_1() { return static_cast<int32_t>(offsetof(LocationUpdatedEventArgs_t2281609809, ___Location_1)); }
	inline Vector2d_t3730485367  get_Location_1() const { return ___Location_1; }
	inline Vector2d_t3730485367 * get_address_of_Location_1() { return &___Location_1; }
	inline void set_Location_1(Vector2d_t3730485367  value)
	{
		___Location_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
