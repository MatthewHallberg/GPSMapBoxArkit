#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"

// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs>
struct EventHandler_1_t872916981;
// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs>
struct EventHandler_1_t3845584048;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.DeviceLocationProvider
struct  DeviceLocationProvider_t4057413382  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Mapbox.Unity.Location.DeviceLocationProvider::_desiredAccuracyInMeters
	float ____desiredAccuracyInMeters_2;
	// System.Single Mapbox.Unity.Location.DeviceLocationProvider::_updateDistanceInMeters
	float ____updateDistanceInMeters_3;
	// UnityEngine.Coroutine Mapbox.Unity.Location.DeviceLocationProvider::_pollRoutine
	Coroutine_t2299508840 * ____pollRoutine_4;
	// System.Double Mapbox.Unity.Location.DeviceLocationProvider::_lastLocationTimestamp
	double ____lastLocationTimestamp_5;
	// System.Double Mapbox.Unity.Location.DeviceLocationProvider::_lastHeadingTimestamp
	double ____lastHeadingTimestamp_6;
	// UnityEngine.WaitForSeconds Mapbox.Unity.Location.DeviceLocationProvider::_wait
	WaitForSeconds_t3839502067 * ____wait_7;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Location.DeviceLocationProvider::_location
	Vector2d_t3730485367  ____location_8;
	// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs> Mapbox.Unity.Location.DeviceLocationProvider::OnLocationUpdated
	EventHandler_1_t872916981 * ___OnLocationUpdated_9;
	// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs> Mapbox.Unity.Location.DeviceLocationProvider::OnHeadingUpdated
	EventHandler_1_t3845584048 * ___OnHeadingUpdated_10;

public:
	inline static int32_t get_offset_of__desiredAccuracyInMeters_2() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____desiredAccuracyInMeters_2)); }
	inline float get__desiredAccuracyInMeters_2() const { return ____desiredAccuracyInMeters_2; }
	inline float* get_address_of__desiredAccuracyInMeters_2() { return &____desiredAccuracyInMeters_2; }
	inline void set__desiredAccuracyInMeters_2(float value)
	{
		____desiredAccuracyInMeters_2 = value;
	}

	inline static int32_t get_offset_of__updateDistanceInMeters_3() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____updateDistanceInMeters_3)); }
	inline float get__updateDistanceInMeters_3() const { return ____updateDistanceInMeters_3; }
	inline float* get_address_of__updateDistanceInMeters_3() { return &____updateDistanceInMeters_3; }
	inline void set__updateDistanceInMeters_3(float value)
	{
		____updateDistanceInMeters_3 = value;
	}

	inline static int32_t get_offset_of__pollRoutine_4() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____pollRoutine_4)); }
	inline Coroutine_t2299508840 * get__pollRoutine_4() const { return ____pollRoutine_4; }
	inline Coroutine_t2299508840 ** get_address_of__pollRoutine_4() { return &____pollRoutine_4; }
	inline void set__pollRoutine_4(Coroutine_t2299508840 * value)
	{
		____pollRoutine_4 = value;
		Il2CppCodeGenWriteBarrier(&____pollRoutine_4, value);
	}

	inline static int32_t get_offset_of__lastLocationTimestamp_5() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____lastLocationTimestamp_5)); }
	inline double get__lastLocationTimestamp_5() const { return ____lastLocationTimestamp_5; }
	inline double* get_address_of__lastLocationTimestamp_5() { return &____lastLocationTimestamp_5; }
	inline void set__lastLocationTimestamp_5(double value)
	{
		____lastLocationTimestamp_5 = value;
	}

	inline static int32_t get_offset_of__lastHeadingTimestamp_6() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____lastHeadingTimestamp_6)); }
	inline double get__lastHeadingTimestamp_6() const { return ____lastHeadingTimestamp_6; }
	inline double* get_address_of__lastHeadingTimestamp_6() { return &____lastHeadingTimestamp_6; }
	inline void set__lastHeadingTimestamp_6(double value)
	{
		____lastHeadingTimestamp_6 = value;
	}

	inline static int32_t get_offset_of__wait_7() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____wait_7)); }
	inline WaitForSeconds_t3839502067 * get__wait_7() const { return ____wait_7; }
	inline WaitForSeconds_t3839502067 ** get_address_of__wait_7() { return &____wait_7; }
	inline void set__wait_7(WaitForSeconds_t3839502067 * value)
	{
		____wait_7 = value;
		Il2CppCodeGenWriteBarrier(&____wait_7, value);
	}

	inline static int32_t get_offset_of__location_8() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ____location_8)); }
	inline Vector2d_t3730485367  get__location_8() const { return ____location_8; }
	inline Vector2d_t3730485367 * get_address_of__location_8() { return &____location_8; }
	inline void set__location_8(Vector2d_t3730485367  value)
	{
		____location_8 = value;
	}

	inline static int32_t get_offset_of_OnLocationUpdated_9() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ___OnLocationUpdated_9)); }
	inline EventHandler_1_t872916981 * get_OnLocationUpdated_9() const { return ___OnLocationUpdated_9; }
	inline EventHandler_1_t872916981 ** get_address_of_OnLocationUpdated_9() { return &___OnLocationUpdated_9; }
	inline void set_OnLocationUpdated_9(EventHandler_1_t872916981 * value)
	{
		___OnLocationUpdated_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocationUpdated_9, value);
	}

	inline static int32_t get_offset_of_OnHeadingUpdated_10() { return static_cast<int32_t>(offsetof(DeviceLocationProvider_t4057413382, ___OnHeadingUpdated_10)); }
	inline EventHandler_1_t3845584048 * get_OnHeadingUpdated_10() const { return ___OnHeadingUpdated_10; }
	inline EventHandler_1_t3845584048 ** get_address_of_OnHeadingUpdated_10() { return &___OnHeadingUpdated_10; }
	inline void set_OnHeadingUpdated_10(EventHandler_1_t3845584048 * value)
	{
		___OnHeadingUpdated_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeadingUpdated_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
