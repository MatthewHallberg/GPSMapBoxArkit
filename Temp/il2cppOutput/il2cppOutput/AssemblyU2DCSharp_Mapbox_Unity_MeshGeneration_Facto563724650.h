#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact1211905786.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Mesh
struct Mesh_t1356156583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory
struct  FlatTerrainFactory_t563724650  : public AbstractTileFactory_t1211905786
{
public:
	// UnityEngine.Material Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory::_baseMaterial
	Material_t193706927 * ____baseMaterial_7;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory::_addCollider
	bool ____addCollider_8;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory::_addToLayer
	bool ____addToLayer_9;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory::_layerId
	int32_t ____layerId_10;
	// UnityEngine.Mesh Mapbox.Unity.MeshGeneration.Factories.FlatTerrainFactory::_cachedQuad
	Mesh_t1356156583 * ____cachedQuad_11;

public:
	inline static int32_t get_offset_of__baseMaterial_7() { return static_cast<int32_t>(offsetof(FlatTerrainFactory_t563724650, ____baseMaterial_7)); }
	inline Material_t193706927 * get__baseMaterial_7() const { return ____baseMaterial_7; }
	inline Material_t193706927 ** get_address_of__baseMaterial_7() { return &____baseMaterial_7; }
	inline void set__baseMaterial_7(Material_t193706927 * value)
	{
		____baseMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&____baseMaterial_7, value);
	}

	inline static int32_t get_offset_of__addCollider_8() { return static_cast<int32_t>(offsetof(FlatTerrainFactory_t563724650, ____addCollider_8)); }
	inline bool get__addCollider_8() const { return ____addCollider_8; }
	inline bool* get_address_of__addCollider_8() { return &____addCollider_8; }
	inline void set__addCollider_8(bool value)
	{
		____addCollider_8 = value;
	}

	inline static int32_t get_offset_of__addToLayer_9() { return static_cast<int32_t>(offsetof(FlatTerrainFactory_t563724650, ____addToLayer_9)); }
	inline bool get__addToLayer_9() const { return ____addToLayer_9; }
	inline bool* get_address_of__addToLayer_9() { return &____addToLayer_9; }
	inline void set__addToLayer_9(bool value)
	{
		____addToLayer_9 = value;
	}

	inline static int32_t get_offset_of__layerId_10() { return static_cast<int32_t>(offsetof(FlatTerrainFactory_t563724650, ____layerId_10)); }
	inline int32_t get__layerId_10() const { return ____layerId_10; }
	inline int32_t* get_address_of__layerId_10() { return &____layerId_10; }
	inline void set__layerId_10(int32_t value)
	{
		____layerId_10 = value;
	}

	inline static int32_t get_offset_of__cachedQuad_11() { return static_cast<int32_t>(offsetof(FlatTerrainFactory_t563724650, ____cachedQuad_11)); }
	inline Mesh_t1356156583 * get__cachedQuad_11() const { return ____cachedQuad_11; }
	inline Mesh_t1356156583 ** get_address_of__cachedQuad_11() { return &____cachedQuad_11; }
	inline void set__cachedQuad_11(Mesh_t1356156583 * value)
	{
		____cachedQuad_11 = value;
		Il2CppCodeGenWriteBarrier(&____cachedQuad_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
