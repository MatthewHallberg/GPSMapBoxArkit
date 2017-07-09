#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.HeadingUpdatedEventArgs
struct  HeadingUpdatedEventArgs_t959309580  : public EventArgs_t3289624707
{
public:
	// System.Single Mapbox.Unity.Location.HeadingUpdatedEventArgs::Heading
	float ___Heading_1;

public:
	inline static int32_t get_offset_of_Heading_1() { return static_cast<int32_t>(offsetof(HeadingUpdatedEventArgs_t959309580, ___Heading_1)); }
	inline float get_Heading_1() const { return ___Heading_1; }
	inline float* get_address_of_Heading_1() { return &___Heading_1; }
	inline void set_Heading_1(float value)
	{
		___Heading_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
