#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs>
struct EventHandler_1_t3845584048;
// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs>
struct EventHandler_1_t872916981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.EditorLocationProvider
struct  EditorLocationProvider_t84973165  : public MonoBehaviour_t1158329972
{
public:
	// System.String Mapbox.Unity.Location.EditorLocationProvider::_latitudeLongitude
	String_t* ____latitudeLongitude_2;
	// System.Single Mapbox.Unity.Location.EditorLocationProvider::_heading
	float ____heading_3;
	// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs> Mapbox.Unity.Location.EditorLocationProvider::OnHeadingUpdated
	EventHandler_1_t3845584048 * ___OnHeadingUpdated_4;
	// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs> Mapbox.Unity.Location.EditorLocationProvider::OnLocationUpdated
	EventHandler_1_t872916981 * ___OnLocationUpdated_5;

public:
	inline static int32_t get_offset_of__latitudeLongitude_2() { return static_cast<int32_t>(offsetof(EditorLocationProvider_t84973165, ____latitudeLongitude_2)); }
	inline String_t* get__latitudeLongitude_2() const { return ____latitudeLongitude_2; }
	inline String_t** get_address_of__latitudeLongitude_2() { return &____latitudeLongitude_2; }
	inline void set__latitudeLongitude_2(String_t* value)
	{
		____latitudeLongitude_2 = value;
		Il2CppCodeGenWriteBarrier(&____latitudeLongitude_2, value);
	}

	inline static int32_t get_offset_of__heading_3() { return static_cast<int32_t>(offsetof(EditorLocationProvider_t84973165, ____heading_3)); }
	inline float get__heading_3() const { return ____heading_3; }
	inline float* get_address_of__heading_3() { return &____heading_3; }
	inline void set__heading_3(float value)
	{
		____heading_3 = value;
	}

	inline static int32_t get_offset_of_OnHeadingUpdated_4() { return static_cast<int32_t>(offsetof(EditorLocationProvider_t84973165, ___OnHeadingUpdated_4)); }
	inline EventHandler_1_t3845584048 * get_OnHeadingUpdated_4() const { return ___OnHeadingUpdated_4; }
	inline EventHandler_1_t3845584048 ** get_address_of_OnHeadingUpdated_4() { return &___OnHeadingUpdated_4; }
	inline void set_OnHeadingUpdated_4(EventHandler_1_t3845584048 * value)
	{
		___OnHeadingUpdated_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeadingUpdated_4, value);
	}

	inline static int32_t get_offset_of_OnLocationUpdated_5() { return static_cast<int32_t>(offsetof(EditorLocationProvider_t84973165, ___OnLocationUpdated_5)); }
	inline EventHandler_1_t872916981 * get_OnLocationUpdated_5() const { return ___OnLocationUpdated_5; }
	inline EventHandler_1_t872916981 ** get_address_of_OnLocationUpdated_5() { return &___OnLocationUpdated_5; }
	inline void set_OnLocationUpdated_5(EventHandler_1_t872916981 * value)
	{
		___OnLocationUpdated_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocationUpdated_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
