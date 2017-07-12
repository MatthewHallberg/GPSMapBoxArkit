#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_t227912335;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0
struct  U3CGeometryAsWgs84U3Ec__AnonStorey0_t1616374963  : public Il2CppObject
{
public:
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::zoom
	uint64_t ___zoom_0;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::tileColumn
	uint64_t ___tileColumn_1;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::tileRow
	uint64_t ___tileRow_2;
	// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::feature
	VectorTileFeature_t227912335 * ___feature_3;

public:
	inline static int32_t get_offset_of_zoom_0() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t1616374963, ___zoom_0)); }
	inline uint64_t get_zoom_0() const { return ___zoom_0; }
	inline uint64_t* get_address_of_zoom_0() { return &___zoom_0; }
	inline void set_zoom_0(uint64_t value)
	{
		___zoom_0 = value;
	}

	inline static int32_t get_offset_of_tileColumn_1() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t1616374963, ___tileColumn_1)); }
	inline uint64_t get_tileColumn_1() const { return ___tileColumn_1; }
	inline uint64_t* get_address_of_tileColumn_1() { return &___tileColumn_1; }
	inline void set_tileColumn_1(uint64_t value)
	{
		___tileColumn_1 = value;
	}

	inline static int32_t get_offset_of_tileRow_2() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t1616374963, ___tileRow_2)); }
	inline uint64_t get_tileRow_2() const { return ___tileRow_2; }
	inline uint64_t* get_address_of_tileRow_2() { return &___tileRow_2; }
	inline void set_tileRow_2(uint64_t value)
	{
		___tileRow_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t1616374963, ___feature_3)); }
	inline VectorTileFeature_t227912335 * get_feature_3() const { return ___feature_3; }
	inline VectorTileFeature_t227912335 ** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(VectorTileFeature_t227912335 * value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier(&___feature_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
