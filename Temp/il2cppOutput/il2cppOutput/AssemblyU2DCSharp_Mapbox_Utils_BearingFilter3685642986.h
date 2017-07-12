#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.BearingFilter
struct  BearingFilter_t3685642986 
{
public:
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Bearing
	Nullable_1_t2341081996  ___Bearing_0;
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Range
	Nullable_1_t2341081996  ___Range_1;

public:
	inline static int32_t get_offset_of_Bearing_0() { return static_cast<int32_t>(offsetof(BearingFilter_t3685642986, ___Bearing_0)); }
	inline Nullable_1_t2341081996  get_Bearing_0() const { return ___Bearing_0; }
	inline Nullable_1_t2341081996 * get_address_of_Bearing_0() { return &___Bearing_0; }
	inline void set_Bearing_0(Nullable_1_t2341081996  value)
	{
		___Bearing_0 = value;
	}

	inline static int32_t get_offset_of_Range_1() { return static_cast<int32_t>(offsetof(BearingFilter_t3685642986, ___Range_1)); }
	inline Nullable_1_t2341081996  get_Range_1() const { return ___Range_1; }
	inline Nullable_1_t2341081996 * get_address_of_Range_1() { return &___Range_1; }
	inline void set_Range_1(Nullable_1_t2341081996  value)
	{
		___Range_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_t3685642986_marshaled_pinvoke
{
	Nullable_1_t2341081996  ___Bearing_0;
	Nullable_1_t2341081996  ___Range_1;
};
// Native definition for COM marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_t3685642986_marshaled_com
{
	Nullable_1_t2341081996  ___Bearing_0;
	Nullable_1_t2341081996  ___Range_1;
};
