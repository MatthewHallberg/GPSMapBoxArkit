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
// Mapbox.Examples.Voxels.VoxelFetcher
struct VoxelFetcher_t1248037101;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// Mapbox.Map.Map`1<Mapbox.Map.RasterTile>
struct Map_1_t2961013281;
// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile>
struct Map_1_t4076246168;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// Mapbox.Platform.IFileSource
struct IFileSource_t1542108046;
// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t828920838;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Voxels.VoxelTile
struct  VoxelTile_t2299867662  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Voxels.VoxelTile::_geocodeInput
	ForwardGeocodeUserInput_t233147846 * ____geocodeInput_2;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_zoom
	int32_t ____zoom_3;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_elevationMultiplier
	float ____elevationMultiplier_4;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelDepthPadding
	int32_t ____voxelDepthPadding_5;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_tileWidthInVoxels
	int32_t ____tileWidthInVoxels_6;
	// Mapbox.Examples.Voxels.VoxelFetcher Mapbox.Examples.Voxels.VoxelTile::_voxelFetcher
	VoxelFetcher_t1248037101 * ____voxelFetcher_7;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelTile::_camera
	GameObject_t1756533147 * ____camera_8;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelBatchCount
	int32_t ____voxelBatchCount_9;
	// System.String Mapbox.Examples.Voxels.VoxelTile::_styleUrl
	String_t* ____styleUrl_10;
	// Mapbox.Map.Map`1<Mapbox.Map.RasterTile> Mapbox.Examples.Voxels.VoxelTile::_raster
	Map_1_t2961013281 * ____raster_11;
	// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile> Mapbox.Examples.Voxels.VoxelTile::_elevation
	Map_1_t4076246168 * ____elevation_12;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_rasterTexture
	Texture2D_t3542995729 * ____rasterTexture_13;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_elevationTexture
	Texture2D_t3542995729 * ____elevationTexture_14;
	// Mapbox.Platform.IFileSource Mapbox.Examples.Voxels.VoxelTile::_fileSource
	Il2CppObject * ____fileSource_15;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile::_voxels
	List_1_t828920838 * ____voxels_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mapbox.Examples.Voxels.VoxelTile::_instantiatedVoxels
	List_1_t1125654279 * ____instantiatedVoxels_17;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_tileScale
	float ____tileScale_18;

public:
	inline static int32_t get_offset_of__geocodeInput_2() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____geocodeInput_2)); }
	inline ForwardGeocodeUserInput_t233147846 * get__geocodeInput_2() const { return ____geocodeInput_2; }
	inline ForwardGeocodeUserInput_t233147846 ** get_address_of__geocodeInput_2() { return &____geocodeInput_2; }
	inline void set__geocodeInput_2(ForwardGeocodeUserInput_t233147846 * value)
	{
		____geocodeInput_2 = value;
		Il2CppCodeGenWriteBarrier(&____geocodeInput_2, value);
	}

	inline static int32_t get_offset_of__zoom_3() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____zoom_3)); }
	inline int32_t get__zoom_3() const { return ____zoom_3; }
	inline int32_t* get_address_of__zoom_3() { return &____zoom_3; }
	inline void set__zoom_3(int32_t value)
	{
		____zoom_3 = value;
	}

	inline static int32_t get_offset_of__elevationMultiplier_4() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____elevationMultiplier_4)); }
	inline float get__elevationMultiplier_4() const { return ____elevationMultiplier_4; }
	inline float* get_address_of__elevationMultiplier_4() { return &____elevationMultiplier_4; }
	inline void set__elevationMultiplier_4(float value)
	{
		____elevationMultiplier_4 = value;
	}

	inline static int32_t get_offset_of__voxelDepthPadding_5() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____voxelDepthPadding_5)); }
	inline int32_t get__voxelDepthPadding_5() const { return ____voxelDepthPadding_5; }
	inline int32_t* get_address_of__voxelDepthPadding_5() { return &____voxelDepthPadding_5; }
	inline void set__voxelDepthPadding_5(int32_t value)
	{
		____voxelDepthPadding_5 = value;
	}

	inline static int32_t get_offset_of__tileWidthInVoxels_6() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____tileWidthInVoxels_6)); }
	inline int32_t get__tileWidthInVoxels_6() const { return ____tileWidthInVoxels_6; }
	inline int32_t* get_address_of__tileWidthInVoxels_6() { return &____tileWidthInVoxels_6; }
	inline void set__tileWidthInVoxels_6(int32_t value)
	{
		____tileWidthInVoxels_6 = value;
	}

	inline static int32_t get_offset_of__voxelFetcher_7() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____voxelFetcher_7)); }
	inline VoxelFetcher_t1248037101 * get__voxelFetcher_7() const { return ____voxelFetcher_7; }
	inline VoxelFetcher_t1248037101 ** get_address_of__voxelFetcher_7() { return &____voxelFetcher_7; }
	inline void set__voxelFetcher_7(VoxelFetcher_t1248037101 * value)
	{
		____voxelFetcher_7 = value;
		Il2CppCodeGenWriteBarrier(&____voxelFetcher_7, value);
	}

	inline static int32_t get_offset_of__camera_8() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____camera_8)); }
	inline GameObject_t1756533147 * get__camera_8() const { return ____camera_8; }
	inline GameObject_t1756533147 ** get_address_of__camera_8() { return &____camera_8; }
	inline void set__camera_8(GameObject_t1756533147 * value)
	{
		____camera_8 = value;
		Il2CppCodeGenWriteBarrier(&____camera_8, value);
	}

	inline static int32_t get_offset_of__voxelBatchCount_9() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____voxelBatchCount_9)); }
	inline int32_t get__voxelBatchCount_9() const { return ____voxelBatchCount_9; }
	inline int32_t* get_address_of__voxelBatchCount_9() { return &____voxelBatchCount_9; }
	inline void set__voxelBatchCount_9(int32_t value)
	{
		____voxelBatchCount_9 = value;
	}

	inline static int32_t get_offset_of__styleUrl_10() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____styleUrl_10)); }
	inline String_t* get__styleUrl_10() const { return ____styleUrl_10; }
	inline String_t** get_address_of__styleUrl_10() { return &____styleUrl_10; }
	inline void set__styleUrl_10(String_t* value)
	{
		____styleUrl_10 = value;
		Il2CppCodeGenWriteBarrier(&____styleUrl_10, value);
	}

	inline static int32_t get_offset_of__raster_11() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____raster_11)); }
	inline Map_1_t2961013281 * get__raster_11() const { return ____raster_11; }
	inline Map_1_t2961013281 ** get_address_of__raster_11() { return &____raster_11; }
	inline void set__raster_11(Map_1_t2961013281 * value)
	{
		____raster_11 = value;
		Il2CppCodeGenWriteBarrier(&____raster_11, value);
	}

	inline static int32_t get_offset_of__elevation_12() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____elevation_12)); }
	inline Map_1_t4076246168 * get__elevation_12() const { return ____elevation_12; }
	inline Map_1_t4076246168 ** get_address_of__elevation_12() { return &____elevation_12; }
	inline void set__elevation_12(Map_1_t4076246168 * value)
	{
		____elevation_12 = value;
		Il2CppCodeGenWriteBarrier(&____elevation_12, value);
	}

	inline static int32_t get_offset_of__rasterTexture_13() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____rasterTexture_13)); }
	inline Texture2D_t3542995729 * get__rasterTexture_13() const { return ____rasterTexture_13; }
	inline Texture2D_t3542995729 ** get_address_of__rasterTexture_13() { return &____rasterTexture_13; }
	inline void set__rasterTexture_13(Texture2D_t3542995729 * value)
	{
		____rasterTexture_13 = value;
		Il2CppCodeGenWriteBarrier(&____rasterTexture_13, value);
	}

	inline static int32_t get_offset_of__elevationTexture_14() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____elevationTexture_14)); }
	inline Texture2D_t3542995729 * get__elevationTexture_14() const { return ____elevationTexture_14; }
	inline Texture2D_t3542995729 ** get_address_of__elevationTexture_14() { return &____elevationTexture_14; }
	inline void set__elevationTexture_14(Texture2D_t3542995729 * value)
	{
		____elevationTexture_14 = value;
		Il2CppCodeGenWriteBarrier(&____elevationTexture_14, value);
	}

	inline static int32_t get_offset_of__fileSource_15() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____fileSource_15)); }
	inline Il2CppObject * get__fileSource_15() const { return ____fileSource_15; }
	inline Il2CppObject ** get_address_of__fileSource_15() { return &____fileSource_15; }
	inline void set__fileSource_15(Il2CppObject * value)
	{
		____fileSource_15 = value;
		Il2CppCodeGenWriteBarrier(&____fileSource_15, value);
	}

	inline static int32_t get_offset_of__voxels_16() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____voxels_16)); }
	inline List_1_t828920838 * get__voxels_16() const { return ____voxels_16; }
	inline List_1_t828920838 ** get_address_of__voxels_16() { return &____voxels_16; }
	inline void set__voxels_16(List_1_t828920838 * value)
	{
		____voxels_16 = value;
		Il2CppCodeGenWriteBarrier(&____voxels_16, value);
	}

	inline static int32_t get_offset_of__instantiatedVoxels_17() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____instantiatedVoxels_17)); }
	inline List_1_t1125654279 * get__instantiatedVoxels_17() const { return ____instantiatedVoxels_17; }
	inline List_1_t1125654279 ** get_address_of__instantiatedVoxels_17() { return &____instantiatedVoxels_17; }
	inline void set__instantiatedVoxels_17(List_1_t1125654279 * value)
	{
		____instantiatedVoxels_17 = value;
		Il2CppCodeGenWriteBarrier(&____instantiatedVoxels_17, value);
	}

	inline static int32_t get_offset_of__tileScale_18() { return static_cast<int32_t>(offsetof(VoxelTile_t2299867662, ____tileScale_18)); }
	inline float get__tileScale_18() const { return ____tileScale_18; }
	inline float* get_address_of__tileScale_18() { return &____tileScale_18; }
	inline void set__tileScale_18(float value)
	{
		____tileScale_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
