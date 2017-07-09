#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.Location.DeviceLocationProvider
struct DeviceLocationProvider_t4057413382;
// Mapbox.Unity.Location.EditorLocationProvider
struct EditorLocationProvider_t84973165;
// Mapbox.Unity.Location.TransformLocationProvider
struct TransformLocationProvider_t811292470;
// Mapbox.Unity.Location.LocationProviderFactory
struct LocationProviderFactory_t996742390;
// Mapbox.Unity.Location.ILocationProvider
struct ILocationProvider_t1903064329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Location.LocationProviderFactory
struct  LocationProviderFactory_t996742390  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Location.DeviceLocationProvider Mapbox.Unity.Location.LocationProviderFactory::_deviceLocationProvider
	DeviceLocationProvider_t4057413382 * ____deviceLocationProvider_2;
	// Mapbox.Unity.Location.EditorLocationProvider Mapbox.Unity.Location.LocationProviderFactory::_editorLocationProvider
	EditorLocationProvider_t84973165 * ____editorLocationProvider_3;
	// Mapbox.Unity.Location.TransformLocationProvider Mapbox.Unity.Location.LocationProviderFactory::_transformLocationProvider
	TransformLocationProvider_t811292470 * ____transformLocationProvider_4;
	// Mapbox.Unity.Location.ILocationProvider Mapbox.Unity.Location.LocationProviderFactory::_defaultLocationProvider
	Il2CppObject * ____defaultLocationProvider_6;

public:
	inline static int32_t get_offset_of__deviceLocationProvider_2() { return static_cast<int32_t>(offsetof(LocationProviderFactory_t996742390, ____deviceLocationProvider_2)); }
	inline DeviceLocationProvider_t4057413382 * get__deviceLocationProvider_2() const { return ____deviceLocationProvider_2; }
	inline DeviceLocationProvider_t4057413382 ** get_address_of__deviceLocationProvider_2() { return &____deviceLocationProvider_2; }
	inline void set__deviceLocationProvider_2(DeviceLocationProvider_t4057413382 * value)
	{
		____deviceLocationProvider_2 = value;
		Il2CppCodeGenWriteBarrier(&____deviceLocationProvider_2, value);
	}

	inline static int32_t get_offset_of__editorLocationProvider_3() { return static_cast<int32_t>(offsetof(LocationProviderFactory_t996742390, ____editorLocationProvider_3)); }
	inline EditorLocationProvider_t84973165 * get__editorLocationProvider_3() const { return ____editorLocationProvider_3; }
	inline EditorLocationProvider_t84973165 ** get_address_of__editorLocationProvider_3() { return &____editorLocationProvider_3; }
	inline void set__editorLocationProvider_3(EditorLocationProvider_t84973165 * value)
	{
		____editorLocationProvider_3 = value;
		Il2CppCodeGenWriteBarrier(&____editorLocationProvider_3, value);
	}

	inline static int32_t get_offset_of__transformLocationProvider_4() { return static_cast<int32_t>(offsetof(LocationProviderFactory_t996742390, ____transformLocationProvider_4)); }
	inline TransformLocationProvider_t811292470 * get__transformLocationProvider_4() const { return ____transformLocationProvider_4; }
	inline TransformLocationProvider_t811292470 ** get_address_of__transformLocationProvider_4() { return &____transformLocationProvider_4; }
	inline void set__transformLocationProvider_4(TransformLocationProvider_t811292470 * value)
	{
		____transformLocationProvider_4 = value;
		Il2CppCodeGenWriteBarrier(&____transformLocationProvider_4, value);
	}

	inline static int32_t get_offset_of__defaultLocationProvider_6() { return static_cast<int32_t>(offsetof(LocationProviderFactory_t996742390, ____defaultLocationProvider_6)); }
	inline Il2CppObject * get__defaultLocationProvider_6() const { return ____defaultLocationProvider_6; }
	inline Il2CppObject ** get_address_of__defaultLocationProvider_6() { return &____defaultLocationProvider_6; }
	inline void set__defaultLocationProvider_6(Il2CppObject * value)
	{
		____defaultLocationProvider_6 = value;
		Il2CppCodeGenWriteBarrier(&____defaultLocationProvider_6, value);
	}
};

struct LocationProviderFactory_t996742390_StaticFields
{
public:
	// Mapbox.Unity.Location.LocationProviderFactory Mapbox.Unity.Location.LocationProviderFactory::_instance
	LocationProviderFactory_t996742390 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(LocationProviderFactory_t996742390_StaticFields, ____instance_5)); }
	inline LocationProviderFactory_t996742390 * get__instance_5() const { return ____instance_5; }
	inline LocationProviderFactory_t996742390 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(LocationProviderFactory_t996742390 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
