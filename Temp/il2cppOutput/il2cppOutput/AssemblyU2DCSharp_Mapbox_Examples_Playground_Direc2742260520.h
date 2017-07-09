#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t233147846;
// Mapbox.Directions.Directions
struct Directions_t994913360;
// Mapbox.Utils.Vector2d[]
struct Vector2dU5BU5D_t4084614094;
// Mapbox.Directions.DirectionResource
struct DirectionResource_t3043599327;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Playground.DirectionsExample
struct  DirectionsExample_t2742260520  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Mapbox.Examples.Playground.DirectionsExample::_resultsText
	Text_t356221433 * ____resultsText_2;
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Playground.DirectionsExample::_startLocationGeocoder
	ForwardGeocodeUserInput_t233147846 * ____startLocationGeocoder_3;
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Playground.DirectionsExample::_endLocationGeocoder
	ForwardGeocodeUserInput_t233147846 * ____endLocationGeocoder_4;
	// Mapbox.Directions.Directions Mapbox.Examples.Playground.DirectionsExample::_directions
	Directions_t994913360 * ____directions_5;
	// Mapbox.Utils.Vector2d[] Mapbox.Examples.Playground.DirectionsExample::_coordinates
	Vector2dU5BU5D_t4084614094* ____coordinates_6;
	// Mapbox.Directions.DirectionResource Mapbox.Examples.Playground.DirectionsExample::_directionResource
	DirectionResource_t3043599327 * ____directionResource_7;

public:
	inline static int32_t get_offset_of__resultsText_2() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____resultsText_2)); }
	inline Text_t356221433 * get__resultsText_2() const { return ____resultsText_2; }
	inline Text_t356221433 ** get_address_of__resultsText_2() { return &____resultsText_2; }
	inline void set__resultsText_2(Text_t356221433 * value)
	{
		____resultsText_2 = value;
		Il2CppCodeGenWriteBarrier(&____resultsText_2, value);
	}

	inline static int32_t get_offset_of__startLocationGeocoder_3() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____startLocationGeocoder_3)); }
	inline ForwardGeocodeUserInput_t233147846 * get__startLocationGeocoder_3() const { return ____startLocationGeocoder_3; }
	inline ForwardGeocodeUserInput_t233147846 ** get_address_of__startLocationGeocoder_3() { return &____startLocationGeocoder_3; }
	inline void set__startLocationGeocoder_3(ForwardGeocodeUserInput_t233147846 * value)
	{
		____startLocationGeocoder_3 = value;
		Il2CppCodeGenWriteBarrier(&____startLocationGeocoder_3, value);
	}

	inline static int32_t get_offset_of__endLocationGeocoder_4() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____endLocationGeocoder_4)); }
	inline ForwardGeocodeUserInput_t233147846 * get__endLocationGeocoder_4() const { return ____endLocationGeocoder_4; }
	inline ForwardGeocodeUserInput_t233147846 ** get_address_of__endLocationGeocoder_4() { return &____endLocationGeocoder_4; }
	inline void set__endLocationGeocoder_4(ForwardGeocodeUserInput_t233147846 * value)
	{
		____endLocationGeocoder_4 = value;
		Il2CppCodeGenWriteBarrier(&____endLocationGeocoder_4, value);
	}

	inline static int32_t get_offset_of__directions_5() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____directions_5)); }
	inline Directions_t994913360 * get__directions_5() const { return ____directions_5; }
	inline Directions_t994913360 ** get_address_of__directions_5() { return &____directions_5; }
	inline void set__directions_5(Directions_t994913360 * value)
	{
		____directions_5 = value;
		Il2CppCodeGenWriteBarrier(&____directions_5, value);
	}

	inline static int32_t get_offset_of__coordinates_6() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____coordinates_6)); }
	inline Vector2dU5BU5D_t4084614094* get__coordinates_6() const { return ____coordinates_6; }
	inline Vector2dU5BU5D_t4084614094** get_address_of__coordinates_6() { return &____coordinates_6; }
	inline void set__coordinates_6(Vector2dU5BU5D_t4084614094* value)
	{
		____coordinates_6 = value;
		Il2CppCodeGenWriteBarrier(&____coordinates_6, value);
	}

	inline static int32_t get_offset_of__directionResource_7() { return static_cast<int32_t>(offsetof(DirectionsExample_t2742260520, ____directionResource_7)); }
	inline DirectionResource_t3043599327 * get__directionResource_7() const { return ____directionResource_7; }
	inline DirectionResource_t3043599327 ** get_address_of__directionResource_7() { return &____directionResource_7; }
	inline void set__directionResource_7(DirectionResource_t3043599327 * value)
	{
		____directionResource_7 = value;
		Il2CppCodeGenWriteBarrier(&____directionResource_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
