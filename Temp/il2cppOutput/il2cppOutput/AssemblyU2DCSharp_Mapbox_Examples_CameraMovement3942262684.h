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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.CameraMovement
struct  CameraMovement_t3942262684  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Mapbox.Examples.CameraMovement::Speed
	float ___Speed_2;
	// UnityEngine.Vector3 Mapbox.Examples.CameraMovement::_dragOrigin
	Vector3_t2243707580  ____dragOrigin_3;
	// UnityEngine.Vector3 Mapbox.Examples.CameraMovement::_cameraPosition
	Vector3_t2243707580  ____cameraPosition_4;
	// UnityEngine.Vector3 Mapbox.Examples.CameraMovement::_panOrigin
	Vector3_t2243707580  ____panOrigin_5;

public:
	inline static int32_t get_offset_of_Speed_2() { return static_cast<int32_t>(offsetof(CameraMovement_t3942262684, ___Speed_2)); }
	inline float get_Speed_2() const { return ___Speed_2; }
	inline float* get_address_of_Speed_2() { return &___Speed_2; }
	inline void set_Speed_2(float value)
	{
		___Speed_2 = value;
	}

	inline static int32_t get_offset_of__dragOrigin_3() { return static_cast<int32_t>(offsetof(CameraMovement_t3942262684, ____dragOrigin_3)); }
	inline Vector3_t2243707580  get__dragOrigin_3() const { return ____dragOrigin_3; }
	inline Vector3_t2243707580 * get_address_of__dragOrigin_3() { return &____dragOrigin_3; }
	inline void set__dragOrigin_3(Vector3_t2243707580  value)
	{
		____dragOrigin_3 = value;
	}

	inline static int32_t get_offset_of__cameraPosition_4() { return static_cast<int32_t>(offsetof(CameraMovement_t3942262684, ____cameraPosition_4)); }
	inline Vector3_t2243707580  get__cameraPosition_4() const { return ____cameraPosition_4; }
	inline Vector3_t2243707580 * get_address_of__cameraPosition_4() { return &____cameraPosition_4; }
	inline void set__cameraPosition_4(Vector3_t2243707580  value)
	{
		____cameraPosition_4 = value;
	}

	inline static int32_t get_offset_of__panOrigin_5() { return static_cast<int32_t>(offsetof(CameraMovement_t3942262684, ____panOrigin_5)); }
	inline Vector3_t2243707580  get__panOrigin_5() const { return ____panOrigin_5; }
	inline Vector3_t2243707580 * get_address_of__panOrigin_5() { return &____panOrigin_5; }
	inline void set__panOrigin_5(Vector3_t2243707580  value)
	{
		____panOrigin_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
