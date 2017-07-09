#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_GeomT3587973838.h"

// Mapbox.VectorTile.VectorTileLayer
struct VectorTileLayer_t3116575590;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1518803153;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.VectorTileFeature
struct  VectorTileFeature_t227912335  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::_layer
	VectorTileLayer_t3116575590 * ____layer_0;
	// System.Object Mapbox.VectorTile.VectorTileFeature::_cachedGeometry
	Il2CppObject * ____cachedGeometry_1;
	// System.Nullable`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::_clipBuffer
	Nullable_1_t412748336  ____clipBuffer_2;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_scale
	Nullable_1_t339576247  ____scale_3;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_previousScale
	Nullable_1_t339576247  ____previousScale_4;
	// System.UInt64 Mapbox.VectorTile.VectorTileFeature::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_5;
	// Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::<GeometryType>k__BackingField
	int32_t ___U3CGeometryTypeU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::<GeometryCommands>k__BackingField
	List_1_t1518803153 * ___U3CGeometryCommandsU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::<Tags>k__BackingField
	List_1_t1440998580 * ___U3CTagsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__layer_0() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ____layer_0)); }
	inline VectorTileLayer_t3116575590 * get__layer_0() const { return ____layer_0; }
	inline VectorTileLayer_t3116575590 ** get_address_of__layer_0() { return &____layer_0; }
	inline void set__layer_0(VectorTileLayer_t3116575590 * value)
	{
		____layer_0 = value;
		Il2CppCodeGenWriteBarrier(&____layer_0, value);
	}

	inline static int32_t get_offset_of__cachedGeometry_1() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ____cachedGeometry_1)); }
	inline Il2CppObject * get__cachedGeometry_1() const { return ____cachedGeometry_1; }
	inline Il2CppObject ** get_address_of__cachedGeometry_1() { return &____cachedGeometry_1; }
	inline void set__cachedGeometry_1(Il2CppObject * value)
	{
		____cachedGeometry_1 = value;
		Il2CppCodeGenWriteBarrier(&____cachedGeometry_1, value);
	}

	inline static int32_t get_offset_of__clipBuffer_2() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ____clipBuffer_2)); }
	inline Nullable_1_t412748336  get__clipBuffer_2() const { return ____clipBuffer_2; }
	inline Nullable_1_t412748336 * get_address_of__clipBuffer_2() { return &____clipBuffer_2; }
	inline void set__clipBuffer_2(Nullable_1_t412748336  value)
	{
		____clipBuffer_2 = value;
	}

	inline static int32_t get_offset_of__scale_3() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ____scale_3)); }
	inline Nullable_1_t339576247  get__scale_3() const { return ____scale_3; }
	inline Nullable_1_t339576247 * get_address_of__scale_3() { return &____scale_3; }
	inline void set__scale_3(Nullable_1_t339576247  value)
	{
		____scale_3 = value;
	}

	inline static int32_t get_offset_of__previousScale_4() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ____previousScale_4)); }
	inline Nullable_1_t339576247  get__previousScale_4() const { return ____previousScale_4; }
	inline Nullable_1_t339576247 * get_address_of__previousScale_4() { return &____previousScale_4; }
	inline void set__previousScale_4(Nullable_1_t339576247  value)
	{
		____previousScale_4 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ___U3CIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ___U3CGeometryTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CGeometryTypeU3Ek__BackingField_6() const { return ___U3CGeometryTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CGeometryTypeU3Ek__BackingField_6() { return &___U3CGeometryTypeU3Ek__BackingField_6; }
	inline void set_U3CGeometryTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CGeometryTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryCommandsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ___U3CGeometryCommandsU3Ek__BackingField_7)); }
	inline List_1_t1518803153 * get_U3CGeometryCommandsU3Ek__BackingField_7() const { return ___U3CGeometryCommandsU3Ek__BackingField_7; }
	inline List_1_t1518803153 ** get_address_of_U3CGeometryCommandsU3Ek__BackingField_7() { return &___U3CGeometryCommandsU3Ek__BackingField_7; }
	inline void set_U3CGeometryCommandsU3Ek__BackingField_7(List_1_t1518803153 * value)
	{
		___U3CGeometryCommandsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGeometryCommandsU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CTagsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VectorTileFeature_t227912335, ___U3CTagsU3Ek__BackingField_8)); }
	inline List_1_t1440998580 * get_U3CTagsU3Ek__BackingField_8() const { return ___U3CTagsU3Ek__BackingField_8; }
	inline List_1_t1440998580 ** get_address_of_U3CTagsU3Ek__BackingField_8() { return &___U3CTagsU3Ek__BackingField_8; }
	inline void set_U3CTagsU3Ek__BackingField_8(List_1_t1440998580 * value)
	{
		___U3CTagsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTagsU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
