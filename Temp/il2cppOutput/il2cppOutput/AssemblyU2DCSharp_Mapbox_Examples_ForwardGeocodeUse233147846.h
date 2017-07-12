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

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// Mapbox.Geocoding.ForwardGeocodeResource
struct ForwardGeocodeResource_t949712485;
// Mapbox.Geocoding.ForwardGeocodeResponse
struct ForwardGeocodeResponse_t3120571778;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.ForwardGeocodeUserInput
struct  ForwardGeocodeUserInput_t233147846  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField Mapbox.Examples.ForwardGeocodeUserInput::_inputField
	InputField_t1631627530 * ____inputField_2;
	// Mapbox.Geocoding.ForwardGeocodeResource Mapbox.Examples.ForwardGeocodeUserInput::_resource
	ForwardGeocodeResource_t949712485 * ____resource_3;
	// Mapbox.Utils.Vector2d Mapbox.Examples.ForwardGeocodeUserInput::_coordinate
	Vector2d_t3730485367  ____coordinate_4;
	// System.Boolean Mapbox.Examples.ForwardGeocodeUserInput::_hasResponse
	bool ____hasResponse_5;
	// Mapbox.Geocoding.ForwardGeocodeResponse Mapbox.Examples.ForwardGeocodeUserInput::<Response>k__BackingField
	ForwardGeocodeResponse_t3120571778 * ___U3CResponseU3Ek__BackingField_6;
	// System.EventHandler`1<System.EventArgs> Mapbox.Examples.ForwardGeocodeUserInput::OnGeocoderResponse
	EventHandler_1_t1880931879 * ___OnGeocoderResponse_7;

public:
	inline static int32_t get_offset_of__inputField_2() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ____inputField_2)); }
	inline InputField_t1631627530 * get__inputField_2() const { return ____inputField_2; }
	inline InputField_t1631627530 ** get_address_of__inputField_2() { return &____inputField_2; }
	inline void set__inputField_2(InputField_t1631627530 * value)
	{
		____inputField_2 = value;
		Il2CppCodeGenWriteBarrier(&____inputField_2, value);
	}

	inline static int32_t get_offset_of__resource_3() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ____resource_3)); }
	inline ForwardGeocodeResource_t949712485 * get__resource_3() const { return ____resource_3; }
	inline ForwardGeocodeResource_t949712485 ** get_address_of__resource_3() { return &____resource_3; }
	inline void set__resource_3(ForwardGeocodeResource_t949712485 * value)
	{
		____resource_3 = value;
		Il2CppCodeGenWriteBarrier(&____resource_3, value);
	}

	inline static int32_t get_offset_of__coordinate_4() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ____coordinate_4)); }
	inline Vector2d_t3730485367  get__coordinate_4() const { return ____coordinate_4; }
	inline Vector2d_t3730485367 * get_address_of__coordinate_4() { return &____coordinate_4; }
	inline void set__coordinate_4(Vector2d_t3730485367  value)
	{
		____coordinate_4 = value;
	}

	inline static int32_t get_offset_of__hasResponse_5() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ____hasResponse_5)); }
	inline bool get__hasResponse_5() const { return ____hasResponse_5; }
	inline bool* get_address_of__hasResponse_5() { return &____hasResponse_5; }
	inline void set__hasResponse_5(bool value)
	{
		____hasResponse_5 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ___U3CResponseU3Ek__BackingField_6)); }
	inline ForwardGeocodeResponse_t3120571778 * get_U3CResponseU3Ek__BackingField_6() const { return ___U3CResponseU3Ek__BackingField_6; }
	inline ForwardGeocodeResponse_t3120571778 ** get_address_of_U3CResponseU3Ek__BackingField_6() { return &___U3CResponseU3Ek__BackingField_6; }
	inline void set_U3CResponseU3Ek__BackingField_6(ForwardGeocodeResponse_t3120571778 * value)
	{
		___U3CResponseU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CResponseU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_OnGeocoderResponse_7() { return static_cast<int32_t>(offsetof(ForwardGeocodeUserInput_t233147846, ___OnGeocoderResponse_7)); }
	inline EventHandler_1_t1880931879 * get_OnGeocoderResponse_7() const { return ___OnGeocoderResponse_7; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnGeocoderResponse_7() { return &___OnGeocoderResponse_7; }
	inline void set_OnGeocoderResponse_7(EventHandler_1_t1880931879 * value)
	{
		___OnGeocoderResponse_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnGeocoderResponse_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
