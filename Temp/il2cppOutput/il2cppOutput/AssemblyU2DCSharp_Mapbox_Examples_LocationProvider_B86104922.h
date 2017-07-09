#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_t1382569190;
// Mapbox.Unity.Location.ILocationProvider
struct ILocationProvider_t1903064329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.LocationProvider.BuildMapAtLocation
struct  BuildMapAtLocation_t86104922  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Map.AbstractMap Mapbox.Examples.LocationProvider.BuildMapAtLocation::_map
	AbstractMap_t1382569190 * ____map_2;
	// Mapbox.Unity.Location.ILocationProvider Mapbox.Examples.LocationProvider.BuildMapAtLocation::_locationProvider
	Il2CppObject * ____locationProvider_3;

public:
	inline static int32_t get_offset_of__map_2() { return static_cast<int32_t>(offsetof(BuildMapAtLocation_t86104922, ____map_2)); }
	inline AbstractMap_t1382569190 * get__map_2() const { return ____map_2; }
	inline AbstractMap_t1382569190 ** get_address_of__map_2() { return &____map_2; }
	inline void set__map_2(AbstractMap_t1382569190 * value)
	{
		____map_2 = value;
		Il2CppCodeGenWriteBarrier(&____map_2, value);
	}

	inline static int32_t get_offset_of__locationProvider_3() { return static_cast<int32_t>(offsetof(BuildMapAtLocation_t86104922, ____locationProvider_3)); }
	inline Il2CppObject * get__locationProvider_3() const { return ____locationProvider_3; }
	inline Il2CppObject ** get_address_of__locationProvider_3() { return &____locationProvider_3; }
	inline void set__locationProvider_3(Il2CppObject * value)
	{
		____locationProvider_3 = value;
		Il2CppCodeGenWriteBarrier(&____locationProvider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
