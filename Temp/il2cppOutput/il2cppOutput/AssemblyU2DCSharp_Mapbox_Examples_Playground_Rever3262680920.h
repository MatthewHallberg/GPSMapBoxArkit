#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Examples.ReverseGeocodeUserInput
struct ReverseGeocodeUserInput_t3669824795;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Playground.ReverseGeocoderExample
struct  ReverseGeocoderExample_t3262680920  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Examples.ReverseGeocodeUserInput Mapbox.Examples.Playground.ReverseGeocoderExample::_searchLocation
	ReverseGeocodeUserInput_t3669824795 * ____searchLocation_2;
	// UnityEngine.UI.Text Mapbox.Examples.Playground.ReverseGeocoderExample::_resultsText
	Text_t356221433 * ____resultsText_3;

public:
	inline static int32_t get_offset_of__searchLocation_2() { return static_cast<int32_t>(offsetof(ReverseGeocoderExample_t3262680920, ____searchLocation_2)); }
	inline ReverseGeocodeUserInput_t3669824795 * get__searchLocation_2() const { return ____searchLocation_2; }
	inline ReverseGeocodeUserInput_t3669824795 ** get_address_of__searchLocation_2() { return &____searchLocation_2; }
	inline void set__searchLocation_2(ReverseGeocodeUserInput_t3669824795 * value)
	{
		____searchLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&____searchLocation_2, value);
	}

	inline static int32_t get_offset_of__resultsText_3() { return static_cast<int32_t>(offsetof(ReverseGeocoderExample_t3262680920, ____resultsText_3)); }
	inline Text_t356221433 * get__resultsText_3() const { return ____resultsText_3; }
	inline Text_t356221433 ** get_address_of__resultsText_3() { return &____resultsText_3; }
	inline void set__resultsText_3(Text_t356221433 * value)
	{
		____resultsText_3 = value;
		Il2CppCodeGenWriteBarrier(&____resultsText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
