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
// UnityEngine.Transform
struct Transform_t3275118058;
// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs>
struct EventHandler_1_t3845584048;
// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs>
struct EventHandler_1_t872916981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.TransformLocationProvider
struct  TransformLocationProvider_t811292470  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Map.AbstractMap Mapbox.Unity.Location.TransformLocationProvider::_map
	AbstractMap_t1382569190 * ____map_2;
	// UnityEngine.Transform Mapbox.Unity.Location.TransformLocationProvider::_targetTransform
	Transform_t3275118058 * ____targetTransform_3;
	// System.EventHandler`1<Mapbox.Unity.Location.HeadingUpdatedEventArgs> Mapbox.Unity.Location.TransformLocationProvider::OnHeadingUpdated
	EventHandler_1_t3845584048 * ___OnHeadingUpdated_4;
	// System.EventHandler`1<Mapbox.Unity.Location.LocationUpdatedEventArgs> Mapbox.Unity.Location.TransformLocationProvider::OnLocationUpdated
	EventHandler_1_t872916981 * ___OnLocationUpdated_5;

public:
	inline static int32_t get_offset_of__map_2() { return static_cast<int32_t>(offsetof(TransformLocationProvider_t811292470, ____map_2)); }
	inline AbstractMap_t1382569190 * get__map_2() const { return ____map_2; }
	inline AbstractMap_t1382569190 ** get_address_of__map_2() { return &____map_2; }
	inline void set__map_2(AbstractMap_t1382569190 * value)
	{
		____map_2 = value;
		Il2CppCodeGenWriteBarrier(&____map_2, value);
	}

	inline static int32_t get_offset_of__targetTransform_3() { return static_cast<int32_t>(offsetof(TransformLocationProvider_t811292470, ____targetTransform_3)); }
	inline Transform_t3275118058 * get__targetTransform_3() const { return ____targetTransform_3; }
	inline Transform_t3275118058 ** get_address_of__targetTransform_3() { return &____targetTransform_3; }
	inline void set__targetTransform_3(Transform_t3275118058 * value)
	{
		____targetTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&____targetTransform_3, value);
	}

	inline static int32_t get_offset_of_OnHeadingUpdated_4() { return static_cast<int32_t>(offsetof(TransformLocationProvider_t811292470, ___OnHeadingUpdated_4)); }
	inline EventHandler_1_t3845584048 * get_OnHeadingUpdated_4() const { return ___OnHeadingUpdated_4; }
	inline EventHandler_1_t3845584048 ** get_address_of_OnHeadingUpdated_4() { return &___OnHeadingUpdated_4; }
	inline void set_OnHeadingUpdated_4(EventHandler_1_t3845584048 * value)
	{
		___OnHeadingUpdated_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeadingUpdated_4, value);
	}

	inline static int32_t get_offset_of_OnLocationUpdated_5() { return static_cast<int32_t>(offsetof(TransformLocationProvider_t811292470, ___OnLocationUpdated_5)); }
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
