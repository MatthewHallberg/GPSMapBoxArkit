#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Mapbox.Unity.Location.ILocationProvider
struct ILocationProvider_t1903064329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.LocationProvider.RotateWithLocationProvider
struct  RotateWithLocationProvider_t1286584825  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Mapbox.Examples.LocationProvider.RotateWithLocationProvider::_rotationFollowFactor
	float ____rotationFollowFactor_2;
	// System.Boolean Mapbox.Examples.LocationProvider.RotateWithLocationProvider::_rotateZ
	bool ____rotateZ_3;
	// System.Boolean Mapbox.Examples.LocationProvider.RotateWithLocationProvider::_useTransformLocationProvider
	bool ____useTransformLocationProvider_4;
	// Mapbox.Unity.Location.ILocationProvider Mapbox.Examples.LocationProvider.RotateWithLocationProvider::_locationProvider
	Il2CppObject * ____locationProvider_5;
	// UnityEngine.Vector3 Mapbox.Examples.LocationProvider.RotateWithLocationProvider::_targetPosition
	Vector3_t2243707580  ____targetPosition_6;

public:
	inline static int32_t get_offset_of__rotationFollowFactor_2() { return static_cast<int32_t>(offsetof(RotateWithLocationProvider_t1286584825, ____rotationFollowFactor_2)); }
	inline float get__rotationFollowFactor_2() const { return ____rotationFollowFactor_2; }
	inline float* get_address_of__rotationFollowFactor_2() { return &____rotationFollowFactor_2; }
	inline void set__rotationFollowFactor_2(float value)
	{
		____rotationFollowFactor_2 = value;
	}

	inline static int32_t get_offset_of__rotateZ_3() { return static_cast<int32_t>(offsetof(RotateWithLocationProvider_t1286584825, ____rotateZ_3)); }
	inline bool get__rotateZ_3() const { return ____rotateZ_3; }
	inline bool* get_address_of__rotateZ_3() { return &____rotateZ_3; }
	inline void set__rotateZ_3(bool value)
	{
		____rotateZ_3 = value;
	}

	inline static int32_t get_offset_of__useTransformLocationProvider_4() { return static_cast<int32_t>(offsetof(RotateWithLocationProvider_t1286584825, ____useTransformLocationProvider_4)); }
	inline bool get__useTransformLocationProvider_4() const { return ____useTransformLocationProvider_4; }
	inline bool* get_address_of__useTransformLocationProvider_4() { return &____useTransformLocationProvider_4; }
	inline void set__useTransformLocationProvider_4(bool value)
	{
		____useTransformLocationProvider_4 = value;
	}

	inline static int32_t get_offset_of__locationProvider_5() { return static_cast<int32_t>(offsetof(RotateWithLocationProvider_t1286584825, ____locationProvider_5)); }
	inline Il2CppObject * get__locationProvider_5() const { return ____locationProvider_5; }
	inline Il2CppObject ** get_address_of__locationProvider_5() { return &____locationProvider_5; }
	inline void set__locationProvider_5(Il2CppObject * value)
	{
		____locationProvider_5 = value;
		Il2CppCodeGenWriteBarrier(&____locationProvider_5, value);
	}

	inline static int32_t get_offset_of__targetPosition_6() { return static_cast<int32_t>(offsetof(RotateWithLocationProvider_t1286584825, ____targetPosition_6)); }
	inline Vector3_t2243707580  get__targetPosition_6() const { return ____targetPosition_6; }
	inline Vector3_t2243707580 * get_address_of__targetPosition_6() { return &____targetPosition_6; }
	inline void set__targetPosition_6(Vector3_t2243707580  value)
	{
		____targetPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
