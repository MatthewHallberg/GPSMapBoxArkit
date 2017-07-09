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

// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t233147846;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// Mapbox.Map.Map`1<Mapbox.Map.RasterTile>
struct Map_1_t2961013281;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Playground.RasterTileExample
struct  RasterTileExample_t3785224679  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Playground.RasterTileExample::_searchLocation
	ForwardGeocodeUserInput_t233147846 * ____searchLocation_2;
	// UnityEngine.UI.Slider Mapbox.Examples.Playground.RasterTileExample::_zoomSlider
	Slider_t297367283 * ____zoomSlider_3;
	// UnityEngine.UI.Dropdown Mapbox.Examples.Playground.RasterTileExample::_stylesDropdown
	Dropdown_t1985816271 * ____stylesDropdown_4;
	// UnityEngine.UI.RawImage Mapbox.Examples.Playground.RasterTileExample::_imageContainer
	RawImage_t2749640213 * ____imageContainer_5;
	// Mapbox.Map.Map`1<Mapbox.Map.RasterTile> Mapbox.Examples.Playground.RasterTileExample::_map
	Map_1_t2961013281 * ____map_6;
	// System.String Mapbox.Examples.Playground.RasterTileExample::_latLon
	String_t* ____latLon_7;
	// System.String[] Mapbox.Examples.Playground.RasterTileExample::_mapboxStyles
	StringU5BU5D_t1642385972* ____mapboxStyles_8;
	// Mapbox.Utils.Vector2d Mapbox.Examples.Playground.RasterTileExample::_startLoc
	Vector2d_t3730485367  ____startLoc_9;
	// System.Int32 Mapbox.Examples.Playground.RasterTileExample::_mapstyle
	int32_t ____mapstyle_10;

public:
	inline static int32_t get_offset_of__searchLocation_2() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____searchLocation_2)); }
	inline ForwardGeocodeUserInput_t233147846 * get__searchLocation_2() const { return ____searchLocation_2; }
	inline ForwardGeocodeUserInput_t233147846 ** get_address_of__searchLocation_2() { return &____searchLocation_2; }
	inline void set__searchLocation_2(ForwardGeocodeUserInput_t233147846 * value)
	{
		____searchLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&____searchLocation_2, value);
	}

	inline static int32_t get_offset_of__zoomSlider_3() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____zoomSlider_3)); }
	inline Slider_t297367283 * get__zoomSlider_3() const { return ____zoomSlider_3; }
	inline Slider_t297367283 ** get_address_of__zoomSlider_3() { return &____zoomSlider_3; }
	inline void set__zoomSlider_3(Slider_t297367283 * value)
	{
		____zoomSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&____zoomSlider_3, value);
	}

	inline static int32_t get_offset_of__stylesDropdown_4() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____stylesDropdown_4)); }
	inline Dropdown_t1985816271 * get__stylesDropdown_4() const { return ____stylesDropdown_4; }
	inline Dropdown_t1985816271 ** get_address_of__stylesDropdown_4() { return &____stylesDropdown_4; }
	inline void set__stylesDropdown_4(Dropdown_t1985816271 * value)
	{
		____stylesDropdown_4 = value;
		Il2CppCodeGenWriteBarrier(&____stylesDropdown_4, value);
	}

	inline static int32_t get_offset_of__imageContainer_5() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____imageContainer_5)); }
	inline RawImage_t2749640213 * get__imageContainer_5() const { return ____imageContainer_5; }
	inline RawImage_t2749640213 ** get_address_of__imageContainer_5() { return &____imageContainer_5; }
	inline void set__imageContainer_5(RawImage_t2749640213 * value)
	{
		____imageContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&____imageContainer_5, value);
	}

	inline static int32_t get_offset_of__map_6() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____map_6)); }
	inline Map_1_t2961013281 * get__map_6() const { return ____map_6; }
	inline Map_1_t2961013281 ** get_address_of__map_6() { return &____map_6; }
	inline void set__map_6(Map_1_t2961013281 * value)
	{
		____map_6 = value;
		Il2CppCodeGenWriteBarrier(&____map_6, value);
	}

	inline static int32_t get_offset_of__latLon_7() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____latLon_7)); }
	inline String_t* get__latLon_7() const { return ____latLon_7; }
	inline String_t** get_address_of__latLon_7() { return &____latLon_7; }
	inline void set__latLon_7(String_t* value)
	{
		____latLon_7 = value;
		Il2CppCodeGenWriteBarrier(&____latLon_7, value);
	}

	inline static int32_t get_offset_of__mapboxStyles_8() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____mapboxStyles_8)); }
	inline StringU5BU5D_t1642385972* get__mapboxStyles_8() const { return ____mapboxStyles_8; }
	inline StringU5BU5D_t1642385972** get_address_of__mapboxStyles_8() { return &____mapboxStyles_8; }
	inline void set__mapboxStyles_8(StringU5BU5D_t1642385972* value)
	{
		____mapboxStyles_8 = value;
		Il2CppCodeGenWriteBarrier(&____mapboxStyles_8, value);
	}

	inline static int32_t get_offset_of__startLoc_9() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____startLoc_9)); }
	inline Vector2d_t3730485367  get__startLoc_9() const { return ____startLoc_9; }
	inline Vector2d_t3730485367 * get_address_of__startLoc_9() { return &____startLoc_9; }
	inline void set__startLoc_9(Vector2d_t3730485367  value)
	{
		____startLoc_9 = value;
	}

	inline static int32_t get_offset_of__mapstyle_10() { return static_cast<int32_t>(offsetof(RasterTileExample_t3785224679, ____mapstyle_10)); }
	inline int32_t get__mapstyle_10() const { return ____mapstyle_10; }
	inline int32_t* get_address_of__mapstyle_10() { return &____mapstyle_10; }
	inline void set__mapstyle_10(int32_t value)
	{
		____mapstyle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
