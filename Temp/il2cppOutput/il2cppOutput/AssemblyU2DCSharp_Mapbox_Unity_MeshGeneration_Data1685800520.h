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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct List_1_t981949844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity
struct  VectorFeatureUnity_t1685800520  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.VectorTileFeature Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity::<Data>k__BackingField
	VectorTileFeature_t227912335 * ___U3CDataU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity::<Properties>k__BackingField
	Dictionary_2_t309261261 * ___U3CPropertiesU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector3>> Mapbox.Unity.MeshGeneration.Data.VectorFeatureUnity::Points
	List_1_t981949844 * ___Points_2;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VectorFeatureUnity_t1685800520, ___U3CDataU3Ek__BackingField_0)); }
	inline VectorTileFeature_t227912335 * get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline VectorTileFeature_t227912335 ** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(VectorTileFeature_t227912335 * value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDataU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VectorFeatureUnity_t1685800520, ___U3CPropertiesU3Ek__BackingField_1)); }
	inline Dictionary_2_t309261261 * get_U3CPropertiesU3Ek__BackingField_1() const { return ___U3CPropertiesU3Ek__BackingField_1; }
	inline Dictionary_2_t309261261 ** get_address_of_U3CPropertiesU3Ek__BackingField_1() { return &___U3CPropertiesU3Ek__BackingField_1; }
	inline void set_U3CPropertiesU3Ek__BackingField_1(Dictionary_2_t309261261 * value)
	{
		___U3CPropertiesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertiesU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_Points_2() { return static_cast<int32_t>(offsetof(VectorFeatureUnity_t1685800520, ___Points_2)); }
	inline List_1_t981949844 * get_Points_2() const { return ___Points_2; }
	inline List_1_t981949844 ** get_address_of_Points_2() { return &___Points_2; }
	inline void set_Points_2(List_1_t981949844 * value)
	{
		___Points_2 = value;
		Il2CppCodeGenWriteBarrier(&___Points_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
