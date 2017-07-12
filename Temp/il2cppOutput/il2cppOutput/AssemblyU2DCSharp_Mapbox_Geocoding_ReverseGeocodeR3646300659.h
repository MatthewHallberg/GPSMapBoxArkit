#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Geocoding_GeocodeResponse1492488371.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t3447136813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.ReverseGeocodeResponse
struct  ReverseGeocodeResponse_t3646300659  : public GeocodeResponse_t1492488371
{
public:
	// System.Collections.Generic.List`1<System.Double> Mapbox.Geocoding.ReverseGeocodeResponse::<Query>k__BackingField
	List_1_t3447136813 * ___U3CQueryU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CQueryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ReverseGeocodeResponse_t3646300659, ___U3CQueryU3Ek__BackingField_3)); }
	inline List_1_t3447136813 * get_U3CQueryU3Ek__BackingField_3() const { return ___U3CQueryU3Ek__BackingField_3; }
	inline List_1_t3447136813 ** get_address_of_U3CQueryU3Ek__BackingField_3() { return &___U3CQueryU3Ek__BackingField_3; }
	inline void set_U3CQueryU3Ek__BackingField_3(List_1_t3447136813 * value)
	{
		___U3CQueryU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CQueryU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
