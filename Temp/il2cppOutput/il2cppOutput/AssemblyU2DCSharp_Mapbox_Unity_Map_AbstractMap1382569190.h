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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// Mapbox.Unity.Map.AbstractTileProvider
struct AbstractTileProvider_t3856336531;
// Mapbox.Unity.MeshGeneration.MapVisualizer
struct MapVisualizer_t1285568018;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_t937130441;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.AbstractMap
struct  AbstractMap_t1382569190  : public MonoBehaviour_t1158329972
{
public:
	// System.String Mapbox.Unity.Map.AbstractMap::_latitudeLongitudeString
	String_t* ____latitudeLongitudeString_2;
	// System.Int32 Mapbox.Unity.Map.AbstractMap::_zoom
	int32_t ____zoom_3;
	// UnityEngine.Transform Mapbox.Unity.Map.AbstractMap::_root
	Transform_t3275118058 * ____root_4;
	// Mapbox.Unity.Map.AbstractTileProvider Mapbox.Unity.Map.AbstractMap::_tileProvider
	AbstractTileProvider_t3856336531 * ____tileProvider_5;
	// Mapbox.Unity.MeshGeneration.MapVisualizer Mapbox.Unity.Map.AbstractMap::_mapVisualizer
	MapVisualizer_t1285568018 * ____mapVisualizer_6;
	// System.Single Mapbox.Unity.Map.AbstractMap::_unityTileSize
	float ____unityTileSize_7;
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.Map.AbstractMap::_fileSouce
	MapboxAccess_t937130441 * ____fileSouce_8;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_mapCenterLatitudeLongitude
	Vector2d_t3730485367  ____mapCenterLatitudeLongitude_9;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_mapCenterMercator
	Vector2d_t3730485367  ____mapCenterMercator_10;
	// System.Single Mapbox.Unity.Map.AbstractMap::_worldRelativeScale
	float ____worldRelativeScale_11;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnInitialized
	Action_t3226471752 * ___OnInitialized_12;

public:
	inline static int32_t get_offset_of__latitudeLongitudeString_2() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____latitudeLongitudeString_2)); }
	inline String_t* get__latitudeLongitudeString_2() const { return ____latitudeLongitudeString_2; }
	inline String_t** get_address_of__latitudeLongitudeString_2() { return &____latitudeLongitudeString_2; }
	inline void set__latitudeLongitudeString_2(String_t* value)
	{
		____latitudeLongitudeString_2 = value;
		Il2CppCodeGenWriteBarrier(&____latitudeLongitudeString_2, value);
	}

	inline static int32_t get_offset_of__zoom_3() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____zoom_3)); }
	inline int32_t get__zoom_3() const { return ____zoom_3; }
	inline int32_t* get_address_of__zoom_3() { return &____zoom_3; }
	inline void set__zoom_3(int32_t value)
	{
		____zoom_3 = value;
	}

	inline static int32_t get_offset_of__root_4() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____root_4)); }
	inline Transform_t3275118058 * get__root_4() const { return ____root_4; }
	inline Transform_t3275118058 ** get_address_of__root_4() { return &____root_4; }
	inline void set__root_4(Transform_t3275118058 * value)
	{
		____root_4 = value;
		Il2CppCodeGenWriteBarrier(&____root_4, value);
	}

	inline static int32_t get_offset_of__tileProvider_5() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____tileProvider_5)); }
	inline AbstractTileProvider_t3856336531 * get__tileProvider_5() const { return ____tileProvider_5; }
	inline AbstractTileProvider_t3856336531 ** get_address_of__tileProvider_5() { return &____tileProvider_5; }
	inline void set__tileProvider_5(AbstractTileProvider_t3856336531 * value)
	{
		____tileProvider_5 = value;
		Il2CppCodeGenWriteBarrier(&____tileProvider_5, value);
	}

	inline static int32_t get_offset_of__mapVisualizer_6() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____mapVisualizer_6)); }
	inline MapVisualizer_t1285568018 * get__mapVisualizer_6() const { return ____mapVisualizer_6; }
	inline MapVisualizer_t1285568018 ** get_address_of__mapVisualizer_6() { return &____mapVisualizer_6; }
	inline void set__mapVisualizer_6(MapVisualizer_t1285568018 * value)
	{
		____mapVisualizer_6 = value;
		Il2CppCodeGenWriteBarrier(&____mapVisualizer_6, value);
	}

	inline static int32_t get_offset_of__unityTileSize_7() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____unityTileSize_7)); }
	inline float get__unityTileSize_7() const { return ____unityTileSize_7; }
	inline float* get_address_of__unityTileSize_7() { return &____unityTileSize_7; }
	inline void set__unityTileSize_7(float value)
	{
		____unityTileSize_7 = value;
	}

	inline static int32_t get_offset_of__fileSouce_8() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____fileSouce_8)); }
	inline MapboxAccess_t937130441 * get__fileSouce_8() const { return ____fileSouce_8; }
	inline MapboxAccess_t937130441 ** get_address_of__fileSouce_8() { return &____fileSouce_8; }
	inline void set__fileSouce_8(MapboxAccess_t937130441 * value)
	{
		____fileSouce_8 = value;
		Il2CppCodeGenWriteBarrier(&____fileSouce_8, value);
	}

	inline static int32_t get_offset_of__mapCenterLatitudeLongitude_9() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____mapCenterLatitudeLongitude_9)); }
	inline Vector2d_t3730485367  get__mapCenterLatitudeLongitude_9() const { return ____mapCenterLatitudeLongitude_9; }
	inline Vector2d_t3730485367 * get_address_of__mapCenterLatitudeLongitude_9() { return &____mapCenterLatitudeLongitude_9; }
	inline void set__mapCenterLatitudeLongitude_9(Vector2d_t3730485367  value)
	{
		____mapCenterLatitudeLongitude_9 = value;
	}

	inline static int32_t get_offset_of__mapCenterMercator_10() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____mapCenterMercator_10)); }
	inline Vector2d_t3730485367  get__mapCenterMercator_10() const { return ____mapCenterMercator_10; }
	inline Vector2d_t3730485367 * get_address_of__mapCenterMercator_10() { return &____mapCenterMercator_10; }
	inline void set__mapCenterMercator_10(Vector2d_t3730485367  value)
	{
		____mapCenterMercator_10 = value;
	}

	inline static int32_t get_offset_of__worldRelativeScale_11() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ____worldRelativeScale_11)); }
	inline float get__worldRelativeScale_11() const { return ____worldRelativeScale_11; }
	inline float* get_address_of__worldRelativeScale_11() { return &____worldRelativeScale_11; }
	inline void set__worldRelativeScale_11(float value)
	{
		____worldRelativeScale_11 = value;
	}

	inline static int32_t get_offset_of_OnInitialized_12() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190, ___OnInitialized_12)); }
	inline Action_t3226471752 * get_OnInitialized_12() const { return ___OnInitialized_12; }
	inline Action_t3226471752 ** get_address_of_OnInitialized_12() { return &___OnInitialized_12; }
	inline void set_OnInitialized_12(Action_t3226471752 * value)
	{
		___OnInitialized_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitialized_12, value);
	}
};

struct AbstractMap_t1382569190_StaticFields
{
public:
	// System.Action Mapbox.Unity.Map.AbstractMap::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(AbstractMap_t1382569190_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
