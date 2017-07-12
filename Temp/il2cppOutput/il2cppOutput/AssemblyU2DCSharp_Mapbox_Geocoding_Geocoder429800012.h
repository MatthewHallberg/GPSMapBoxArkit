#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Platform.IFileSource
struct IFileSource_t1542108046;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.Geocoder
struct  Geocoder_t429800012  : public Il2CppObject
{
public:
	// Mapbox.Platform.IFileSource Mapbox.Geocoding.Geocoder::fileSource
	Il2CppObject * ___fileSource_0;

public:
	inline static int32_t get_offset_of_fileSource_0() { return static_cast<int32_t>(offsetof(Geocoder_t429800012, ___fileSource_0)); }
	inline Il2CppObject * get_fileSource_0() const { return ___fileSource_0; }
	inline Il2CppObject ** get_address_of_fileSource_0() { return &___fileSource_0; }
	inline void set_fileSource_0(Il2CppObject * value)
	{
		___fileSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___fileSource_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
