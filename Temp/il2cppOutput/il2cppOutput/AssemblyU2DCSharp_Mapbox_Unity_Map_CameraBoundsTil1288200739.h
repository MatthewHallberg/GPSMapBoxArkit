#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_Map_AbstractTilePro3856336531.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"
#include "AssemblyU2DCSharp_Mapbox_Map_UnwrappedTileId2874398135.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.CameraBoundsTileProvider
struct  CameraBoundsTileProvider_t1288200739  : public AbstractTileProvider_t3856336531
{
public:
	// UnityEngine.Camera Mapbox.Unity.Map.CameraBoundsTileProvider::_camera
	Camera_t189460977 * ____camera_8;
	// System.Int32 Mapbox.Unity.Map.CameraBoundsTileProvider::_visibleBuffer
	int32_t ____visibleBuffer_9;
	// System.Int32 Mapbox.Unity.Map.CameraBoundsTileProvider::_disposeBuffer
	int32_t ____disposeBuffer_10;
	// System.Single Mapbox.Unity.Map.CameraBoundsTileProvider::_updateInterval
	float ____updateInterval_11;
	// UnityEngine.Plane Mapbox.Unity.Map.CameraBoundsTileProvider::_groundPlane
	Plane_t3727654732  ____groundPlane_12;
	// UnityEngine.Ray Mapbox.Unity.Map.CameraBoundsTileProvider::_ray
	Ray_t2469606224  ____ray_13;
	// System.Single Mapbox.Unity.Map.CameraBoundsTileProvider::_hitDistance
	float ____hitDistance_14;
	// UnityEngine.Vector3 Mapbox.Unity.Map.CameraBoundsTileProvider::_viewportTarget
	Vector3_t2243707580  ____viewportTarget_15;
	// System.Single Mapbox.Unity.Map.CameraBoundsTileProvider::_elapsedTime
	float ____elapsedTime_16;
	// System.Boolean Mapbox.Unity.Map.CameraBoundsTileProvider::_shouldUpdate
	bool ____shouldUpdate_17;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.CameraBoundsTileProvider::_currentLatitudeLongitude
	Vector2d_t3730485367  ____currentLatitudeLongitude_18;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.Map.CameraBoundsTileProvider::_cachedTile
	UnwrappedTileId_t2874398135  ____cachedTile_19;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.Map.CameraBoundsTileProvider::_currentTile
	UnwrappedTileId_t2874398135  ____currentTile_20;

public:
	inline static int32_t get_offset_of__camera_8() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____camera_8)); }
	inline Camera_t189460977 * get__camera_8() const { return ____camera_8; }
	inline Camera_t189460977 ** get_address_of__camera_8() { return &____camera_8; }
	inline void set__camera_8(Camera_t189460977 * value)
	{
		____camera_8 = value;
		Il2CppCodeGenWriteBarrier(&____camera_8, value);
	}

	inline static int32_t get_offset_of__visibleBuffer_9() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____visibleBuffer_9)); }
	inline int32_t get__visibleBuffer_9() const { return ____visibleBuffer_9; }
	inline int32_t* get_address_of__visibleBuffer_9() { return &____visibleBuffer_9; }
	inline void set__visibleBuffer_9(int32_t value)
	{
		____visibleBuffer_9 = value;
	}

	inline static int32_t get_offset_of__disposeBuffer_10() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____disposeBuffer_10)); }
	inline int32_t get__disposeBuffer_10() const { return ____disposeBuffer_10; }
	inline int32_t* get_address_of__disposeBuffer_10() { return &____disposeBuffer_10; }
	inline void set__disposeBuffer_10(int32_t value)
	{
		____disposeBuffer_10 = value;
	}

	inline static int32_t get_offset_of__updateInterval_11() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____updateInterval_11)); }
	inline float get__updateInterval_11() const { return ____updateInterval_11; }
	inline float* get_address_of__updateInterval_11() { return &____updateInterval_11; }
	inline void set__updateInterval_11(float value)
	{
		____updateInterval_11 = value;
	}

	inline static int32_t get_offset_of__groundPlane_12() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____groundPlane_12)); }
	inline Plane_t3727654732  get__groundPlane_12() const { return ____groundPlane_12; }
	inline Plane_t3727654732 * get_address_of__groundPlane_12() { return &____groundPlane_12; }
	inline void set__groundPlane_12(Plane_t3727654732  value)
	{
		____groundPlane_12 = value;
	}

	inline static int32_t get_offset_of__ray_13() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____ray_13)); }
	inline Ray_t2469606224  get__ray_13() const { return ____ray_13; }
	inline Ray_t2469606224 * get_address_of__ray_13() { return &____ray_13; }
	inline void set__ray_13(Ray_t2469606224  value)
	{
		____ray_13 = value;
	}

	inline static int32_t get_offset_of__hitDistance_14() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____hitDistance_14)); }
	inline float get__hitDistance_14() const { return ____hitDistance_14; }
	inline float* get_address_of__hitDistance_14() { return &____hitDistance_14; }
	inline void set__hitDistance_14(float value)
	{
		____hitDistance_14 = value;
	}

	inline static int32_t get_offset_of__viewportTarget_15() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____viewportTarget_15)); }
	inline Vector3_t2243707580  get__viewportTarget_15() const { return ____viewportTarget_15; }
	inline Vector3_t2243707580 * get_address_of__viewportTarget_15() { return &____viewportTarget_15; }
	inline void set__viewportTarget_15(Vector3_t2243707580  value)
	{
		____viewportTarget_15 = value;
	}

	inline static int32_t get_offset_of__elapsedTime_16() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____elapsedTime_16)); }
	inline float get__elapsedTime_16() const { return ____elapsedTime_16; }
	inline float* get_address_of__elapsedTime_16() { return &____elapsedTime_16; }
	inline void set__elapsedTime_16(float value)
	{
		____elapsedTime_16 = value;
	}

	inline static int32_t get_offset_of__shouldUpdate_17() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____shouldUpdate_17)); }
	inline bool get__shouldUpdate_17() const { return ____shouldUpdate_17; }
	inline bool* get_address_of__shouldUpdate_17() { return &____shouldUpdate_17; }
	inline void set__shouldUpdate_17(bool value)
	{
		____shouldUpdate_17 = value;
	}

	inline static int32_t get_offset_of__currentLatitudeLongitude_18() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____currentLatitudeLongitude_18)); }
	inline Vector2d_t3730485367  get__currentLatitudeLongitude_18() const { return ____currentLatitudeLongitude_18; }
	inline Vector2d_t3730485367 * get_address_of__currentLatitudeLongitude_18() { return &____currentLatitudeLongitude_18; }
	inline void set__currentLatitudeLongitude_18(Vector2d_t3730485367  value)
	{
		____currentLatitudeLongitude_18 = value;
	}

	inline static int32_t get_offset_of__cachedTile_19() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____cachedTile_19)); }
	inline UnwrappedTileId_t2874398135  get__cachedTile_19() const { return ____cachedTile_19; }
	inline UnwrappedTileId_t2874398135 * get_address_of__cachedTile_19() { return &____cachedTile_19; }
	inline void set__cachedTile_19(UnwrappedTileId_t2874398135  value)
	{
		____cachedTile_19 = value;
	}

	inline static int32_t get_offset_of__currentTile_20() { return static_cast<int32_t>(offsetof(CameraBoundsTileProvider_t1288200739, ____currentTile_20)); }
	inline UnwrappedTileId_t2874398135  get__currentTile_20() const { return ____currentTile_20; }
	inline UnwrappedTileId_t2874398135 * get_address_of__currentTile_20() { return &____currentTile_20; }
	inline void set__currentTile_20(UnwrappedTileId_t2874398135  value)
	{
		____currentTile_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
