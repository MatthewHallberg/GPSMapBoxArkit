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
// Mapbox.Geocoding.ReverseGeocodeResource
struct ReverseGeocodeResource_t910734276;
// Mapbox.Geocoding.Geocoder
struct Geocoder_t429800012;
// Mapbox.Geocoding.ReverseGeocodeResponse
struct ReverseGeocodeResponse_t3646300659;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.ReverseGeocodeUserInput
struct  ReverseGeocodeUserInput_t3669824795  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField Mapbox.Examples.ReverseGeocodeUserInput::_inputField
	InputField_t1631627530 * ____inputField_2;
	// Mapbox.Geocoding.ReverseGeocodeResource Mapbox.Examples.ReverseGeocodeUserInput::_resource
	ReverseGeocodeResource_t910734276 * ____resource_3;
	// Mapbox.Geocoding.Geocoder Mapbox.Examples.ReverseGeocodeUserInput::_geocoder
	Geocoder_t429800012 * ____geocoder_4;
	// Mapbox.Utils.Vector2d Mapbox.Examples.ReverseGeocodeUserInput::_coordinate
	Vector2d_t3730485367  ____coordinate_5;
	// System.Boolean Mapbox.Examples.ReverseGeocodeUserInput::_hasResponse
	bool ____hasResponse_6;
	// Mapbox.Geocoding.ReverseGeocodeResponse Mapbox.Examples.ReverseGeocodeUserInput::<Response>k__BackingField
	ReverseGeocodeResponse_t3646300659 * ___U3CResponseU3Ek__BackingField_7;
	// System.EventHandler`1<System.EventArgs> Mapbox.Examples.ReverseGeocodeUserInput::OnGeocoderResponse
	EventHandler_1_t1880931879 * ___OnGeocoderResponse_8;

public:
	inline static int32_t get_offset_of__inputField_2() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ____inputField_2)); }
	inline InputField_t1631627530 * get__inputField_2() const { return ____inputField_2; }
	inline InputField_t1631627530 ** get_address_of__inputField_2() { return &____inputField_2; }
	inline void set__inputField_2(InputField_t1631627530 * value)
	{
		____inputField_2 = value;
		Il2CppCodeGenWriteBarrier(&____inputField_2, value);
	}

	inline static int32_t get_offset_of__resource_3() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ____resource_3)); }
	inline ReverseGeocodeResource_t910734276 * get__resource_3() const { return ____resource_3; }
	inline ReverseGeocodeResource_t910734276 ** get_address_of__resource_3() { return &____resource_3; }
	inline void set__resource_3(ReverseGeocodeResource_t910734276 * value)
	{
		____resource_3 = value;
		Il2CppCodeGenWriteBarrier(&____resource_3, value);
	}

	inline static int32_t get_offset_of__geocoder_4() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ____geocoder_4)); }
	inline Geocoder_t429800012 * get__geocoder_4() const { return ____geocoder_4; }
	inline Geocoder_t429800012 ** get_address_of__geocoder_4() { return &____geocoder_4; }
	inline void set__geocoder_4(Geocoder_t429800012 * value)
	{
		____geocoder_4 = value;
		Il2CppCodeGenWriteBarrier(&____geocoder_4, value);
	}

	inline static int32_t get_offset_of__coordinate_5() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ____coordinate_5)); }
	inline Vector2d_t3730485367  get__coordinate_5() const { return ____coordinate_5; }
	inline Vector2d_t3730485367 * get_address_of__coordinate_5() { return &____coordinate_5; }
	inline void set__coordinate_5(Vector2d_t3730485367  value)
	{
		____coordinate_5 = value;
	}

	inline static int32_t get_offset_of__hasResponse_6() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ____hasResponse_6)); }
	inline bool get__hasResponse_6() const { return ____hasResponse_6; }
	inline bool* get_address_of__hasResponse_6() { return &____hasResponse_6; }
	inline void set__hasResponse_6(bool value)
	{
		____hasResponse_6 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ___U3CResponseU3Ek__BackingField_7)); }
	inline ReverseGeocodeResponse_t3646300659 * get_U3CResponseU3Ek__BackingField_7() const { return ___U3CResponseU3Ek__BackingField_7; }
	inline ReverseGeocodeResponse_t3646300659 ** get_address_of_U3CResponseU3Ek__BackingField_7() { return &___U3CResponseU3Ek__BackingField_7; }
	inline void set_U3CResponseU3Ek__BackingField_7(ReverseGeocodeResponse_t3646300659 * value)
	{
		___U3CResponseU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CResponseU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_OnGeocoderResponse_8() { return static_cast<int32_t>(offsetof(ReverseGeocodeUserInput_t3669824795, ___OnGeocoderResponse_8)); }
	inline EventHandler_1_t1880931879 * get_OnGeocoderResponse_8() const { return ___OnGeocoderResponse_8; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnGeocoderResponse_8() { return &___OnGeocoderResponse_8; }
	inline void set_OnGeocoderResponse_8(EventHandler_1_t1880931879 * value)
	{
		___OnGeocoderResponse_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnGeocoderResponse_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
