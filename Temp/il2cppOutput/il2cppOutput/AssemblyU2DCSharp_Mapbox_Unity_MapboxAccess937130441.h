#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_t937130441;
// Mapbox.Unity.Telemetry.ITelemetryLibrary
struct ITelemetryLibrary_t1091583727;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t1821968684;
// Mapbox.Geocoding.Geocoder
struct Geocoder_t429800012;
// Mapbox.Directions.Directions
struct Directions_t994913360;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MapboxAccess
struct  MapboxAccess_t937130441  : public Il2CppObject
{
public:
	// System.String Mapbox.Unity.MapboxAccess::_accessPath
	String_t* ____accessPath_0;
	// Mapbox.Unity.Telemetry.ITelemetryLibrary Mapbox.Unity.MapboxAccess::_telemetryLibrary
	Il2CppObject * ____telemetryLibrary_2;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Unity.MapboxAccess::_fileSource
	CachingWebFileSource_t1821968684 * ____fileSource_3;
	// System.Boolean Mapbox.Unity.MapboxAccess::_isTelemetryEnabled
	bool ____isTelemetryEnabled_4;
	// System.String Mapbox.Unity.MapboxAccess::_accessToken
	String_t* ____accessToken_5;
	// Mapbox.Geocoding.Geocoder Mapbox.Unity.MapboxAccess::_geocoder
	Geocoder_t429800012 * ____geocoder_6;
	// Mapbox.Directions.Directions Mapbox.Unity.MapboxAccess::_directions
	Directions_t994913360 * ____directions_7;

public:
	inline static int32_t get_offset_of__accessPath_0() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____accessPath_0)); }
	inline String_t* get__accessPath_0() const { return ____accessPath_0; }
	inline String_t** get_address_of__accessPath_0() { return &____accessPath_0; }
	inline void set__accessPath_0(String_t* value)
	{
		____accessPath_0 = value;
		Il2CppCodeGenWriteBarrier(&____accessPath_0, value);
	}

	inline static int32_t get_offset_of__telemetryLibrary_2() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____telemetryLibrary_2)); }
	inline Il2CppObject * get__telemetryLibrary_2() const { return ____telemetryLibrary_2; }
	inline Il2CppObject ** get_address_of__telemetryLibrary_2() { return &____telemetryLibrary_2; }
	inline void set__telemetryLibrary_2(Il2CppObject * value)
	{
		____telemetryLibrary_2 = value;
		Il2CppCodeGenWriteBarrier(&____telemetryLibrary_2, value);
	}

	inline static int32_t get_offset_of__fileSource_3() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____fileSource_3)); }
	inline CachingWebFileSource_t1821968684 * get__fileSource_3() const { return ____fileSource_3; }
	inline CachingWebFileSource_t1821968684 ** get_address_of__fileSource_3() { return &____fileSource_3; }
	inline void set__fileSource_3(CachingWebFileSource_t1821968684 * value)
	{
		____fileSource_3 = value;
		Il2CppCodeGenWriteBarrier(&____fileSource_3, value);
	}

	inline static int32_t get_offset_of__isTelemetryEnabled_4() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____isTelemetryEnabled_4)); }
	inline bool get__isTelemetryEnabled_4() const { return ____isTelemetryEnabled_4; }
	inline bool* get_address_of__isTelemetryEnabled_4() { return &____isTelemetryEnabled_4; }
	inline void set__isTelemetryEnabled_4(bool value)
	{
		____isTelemetryEnabled_4 = value;
	}

	inline static int32_t get_offset_of__accessToken_5() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____accessToken_5)); }
	inline String_t* get__accessToken_5() const { return ____accessToken_5; }
	inline String_t** get_address_of__accessToken_5() { return &____accessToken_5; }
	inline void set__accessToken_5(String_t* value)
	{
		____accessToken_5 = value;
		Il2CppCodeGenWriteBarrier(&____accessToken_5, value);
	}

	inline static int32_t get_offset_of__geocoder_6() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____geocoder_6)); }
	inline Geocoder_t429800012 * get__geocoder_6() const { return ____geocoder_6; }
	inline Geocoder_t429800012 ** get_address_of__geocoder_6() { return &____geocoder_6; }
	inline void set__geocoder_6(Geocoder_t429800012 * value)
	{
		____geocoder_6 = value;
		Il2CppCodeGenWriteBarrier(&____geocoder_6, value);
	}

	inline static int32_t get_offset_of__directions_7() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441, ____directions_7)); }
	inline Directions_t994913360 * get__directions_7() const { return ____directions_7; }
	inline Directions_t994913360 ** get_address_of__directions_7() { return &____directions_7; }
	inline void set__directions_7(Directions_t994913360 * value)
	{
		____directions_7 = value;
		Il2CppCodeGenWriteBarrier(&____directions_7, value);
	}
};

struct MapboxAccess_t937130441_StaticFields
{
public:
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.MapboxAccess::_instance
	MapboxAccess_t937130441 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(MapboxAccess_t937130441_StaticFields, ____instance_1)); }
	inline MapboxAccess_t937130441 * get__instance_1() const { return ____instance_1; }
	inline MapboxAccess_t937130441 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(MapboxAccess_t937130441 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
