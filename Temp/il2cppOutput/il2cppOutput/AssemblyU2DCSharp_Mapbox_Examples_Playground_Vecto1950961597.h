#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t233147846;
// UnityEngine.UI.Text
struct Text_t356221433;
// Mapbox.Map.Map`1<Mapbox.Map.VectorTile>
struct Map_1_t1800332871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Playground.VectorTileExample
struct  VectorTileExample_t1950961597  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Playground.VectorTileExample::_searchLocation
	ForwardGeocodeUserInput_t233147846 * ____searchLocation_2;
	// UnityEngine.UI.Text Mapbox.Examples.Playground.VectorTileExample::_resultsText
	Text_t356221433 * ____resultsText_3;
	// Mapbox.Map.Map`1<Mapbox.Map.VectorTile> Mapbox.Examples.Playground.VectorTileExample::_map
	Map_1_t1800332871 * ____map_4;

public:
	inline static int32_t get_offset_of__searchLocation_2() { return static_cast<int32_t>(offsetof(VectorTileExample_t1950961597, ____searchLocation_2)); }
	inline ForwardGeocodeUserInput_t233147846 * get__searchLocation_2() const { return ____searchLocation_2; }
	inline ForwardGeocodeUserInput_t233147846 ** get_address_of__searchLocation_2() { return &____searchLocation_2; }
	inline void set__searchLocation_2(ForwardGeocodeUserInput_t233147846 * value)
	{
		____searchLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&____searchLocation_2, value);
	}

	inline static int32_t get_offset_of__resultsText_3() { return static_cast<int32_t>(offsetof(VectorTileExample_t1950961597, ____resultsText_3)); }
	inline Text_t356221433 * get__resultsText_3() const { return ____resultsText_3; }
	inline Text_t356221433 ** get_address_of__resultsText_3() { return &____resultsText_3; }
	inline void set__resultsText_3(Text_t356221433 * value)
	{
		____resultsText_3 = value;
		Il2CppCodeGenWriteBarrier(&____resultsText_3, value);
	}

	inline static int32_t get_offset_of__map_4() { return static_cast<int32_t>(offsetof(VectorTileExample_t1950961597, ____map_4)); }
	inline Map_1_t1800332871 * get__map_4() const { return ____map_4; }
	inline Map_1_t1800332871 ** get_address_of__map_4() { return &____map_4; }
	inline void set__map_4(Map_1_t1800332871 * value)
	{
		____map_4 = value;
		Il2CppCodeGenWriteBarrier(&____map_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
