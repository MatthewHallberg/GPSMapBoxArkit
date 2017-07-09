#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact1211905786.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact2853166747.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.Collections.Generic.Dictionary`2<Mapbox.Map.CanonicalTileId,UnityEngine.Mesh>
struct Dictionary_2_t3158716781;
// Mapbox.Unity.MeshGeneration.Data.MeshData
struct MeshData_t1635666189;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.TerrainFactory
struct  TerrainFactory_t340073915  : public AbstractTileFactory_t1211905786
{
public:
	// UnityEngine.Material Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_baseMaterial
	Material_t193706927 * ____baseMaterial_7;
	// Mapbox.Unity.MeshGeneration.Factories.MapIdType Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_mapIdType
	int32_t ____mapIdType_8;
	// System.String Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_customMapId
	String_t* ____customMapId_9;
	// System.String Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_mapId
	String_t* ____mapId_10;
	// System.Single Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_heightModifier
	float ____heightModifier_11;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_sampleCount
	int32_t ____sampleCount_12;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_addCollider
	bool ____addCollider_13;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_addToLayer
	bool ____addToLayer_14;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_layerId
	int32_t ____layerId_15;
	// UnityEngine.Mesh Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_stitchTarget
	Mesh_t1356156583 * ____stitchTarget_16;
	// System.Collections.Generic.Dictionary`2<Mapbox.Map.CanonicalTileId,UnityEngine.Mesh> Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_meshData
	Dictionary_2_t3158716781 * ____meshData_17;
	// Mapbox.Unity.MeshGeneration.Data.MeshData Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_currentTileMeshData
	MeshData_t1635666189 * ____currentTileMeshData_18;
	// Mapbox.Unity.MeshGeneration.Data.MeshData Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_stitchTargetMeshData
	MeshData_t1635666189 * ____stitchTargetMeshData_19;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_newVertexList
	List_1_t1612828712 * ____newVertexList_20;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_newNormalList
	List_1_t1612828712 * ____newNormalList_21;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_newUvList
	List_1_t1612828711 * ____newUvList_22;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_newTriangleList
	List_1_t1440998580 * ____newTriangleList_23;
	// UnityEngine.Vector3 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_newDir
	Vector3_t2243707580  ____newDir_24;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_vertA
	int32_t ____vertA_25;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_vertB
	int32_t ____vertB_26;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.TerrainFactory::_vertC
	int32_t ____vertC_27;

public:
	inline static int32_t get_offset_of__baseMaterial_7() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____baseMaterial_7)); }
	inline Material_t193706927 * get__baseMaterial_7() const { return ____baseMaterial_7; }
	inline Material_t193706927 ** get_address_of__baseMaterial_7() { return &____baseMaterial_7; }
	inline void set__baseMaterial_7(Material_t193706927 * value)
	{
		____baseMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&____baseMaterial_7, value);
	}

	inline static int32_t get_offset_of__mapIdType_8() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____mapIdType_8)); }
	inline int32_t get__mapIdType_8() const { return ____mapIdType_8; }
	inline int32_t* get_address_of__mapIdType_8() { return &____mapIdType_8; }
	inline void set__mapIdType_8(int32_t value)
	{
		____mapIdType_8 = value;
	}

	inline static int32_t get_offset_of__customMapId_9() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____customMapId_9)); }
	inline String_t* get__customMapId_9() const { return ____customMapId_9; }
	inline String_t** get_address_of__customMapId_9() { return &____customMapId_9; }
	inline void set__customMapId_9(String_t* value)
	{
		____customMapId_9 = value;
		Il2CppCodeGenWriteBarrier(&____customMapId_9, value);
	}

	inline static int32_t get_offset_of__mapId_10() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____mapId_10)); }
	inline String_t* get__mapId_10() const { return ____mapId_10; }
	inline String_t** get_address_of__mapId_10() { return &____mapId_10; }
	inline void set__mapId_10(String_t* value)
	{
		____mapId_10 = value;
		Il2CppCodeGenWriteBarrier(&____mapId_10, value);
	}

	inline static int32_t get_offset_of__heightModifier_11() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____heightModifier_11)); }
	inline float get__heightModifier_11() const { return ____heightModifier_11; }
	inline float* get_address_of__heightModifier_11() { return &____heightModifier_11; }
	inline void set__heightModifier_11(float value)
	{
		____heightModifier_11 = value;
	}

	inline static int32_t get_offset_of__sampleCount_12() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____sampleCount_12)); }
	inline int32_t get__sampleCount_12() const { return ____sampleCount_12; }
	inline int32_t* get_address_of__sampleCount_12() { return &____sampleCount_12; }
	inline void set__sampleCount_12(int32_t value)
	{
		____sampleCount_12 = value;
	}

	inline static int32_t get_offset_of__addCollider_13() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____addCollider_13)); }
	inline bool get__addCollider_13() const { return ____addCollider_13; }
	inline bool* get_address_of__addCollider_13() { return &____addCollider_13; }
	inline void set__addCollider_13(bool value)
	{
		____addCollider_13 = value;
	}

	inline static int32_t get_offset_of__addToLayer_14() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____addToLayer_14)); }
	inline bool get__addToLayer_14() const { return ____addToLayer_14; }
	inline bool* get_address_of__addToLayer_14() { return &____addToLayer_14; }
	inline void set__addToLayer_14(bool value)
	{
		____addToLayer_14 = value;
	}

	inline static int32_t get_offset_of__layerId_15() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____layerId_15)); }
	inline int32_t get__layerId_15() const { return ____layerId_15; }
	inline int32_t* get_address_of__layerId_15() { return &____layerId_15; }
	inline void set__layerId_15(int32_t value)
	{
		____layerId_15 = value;
	}

	inline static int32_t get_offset_of__stitchTarget_16() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____stitchTarget_16)); }
	inline Mesh_t1356156583 * get__stitchTarget_16() const { return ____stitchTarget_16; }
	inline Mesh_t1356156583 ** get_address_of__stitchTarget_16() { return &____stitchTarget_16; }
	inline void set__stitchTarget_16(Mesh_t1356156583 * value)
	{
		____stitchTarget_16 = value;
		Il2CppCodeGenWriteBarrier(&____stitchTarget_16, value);
	}

	inline static int32_t get_offset_of__meshData_17() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____meshData_17)); }
	inline Dictionary_2_t3158716781 * get__meshData_17() const { return ____meshData_17; }
	inline Dictionary_2_t3158716781 ** get_address_of__meshData_17() { return &____meshData_17; }
	inline void set__meshData_17(Dictionary_2_t3158716781 * value)
	{
		____meshData_17 = value;
		Il2CppCodeGenWriteBarrier(&____meshData_17, value);
	}

	inline static int32_t get_offset_of__currentTileMeshData_18() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____currentTileMeshData_18)); }
	inline MeshData_t1635666189 * get__currentTileMeshData_18() const { return ____currentTileMeshData_18; }
	inline MeshData_t1635666189 ** get_address_of__currentTileMeshData_18() { return &____currentTileMeshData_18; }
	inline void set__currentTileMeshData_18(MeshData_t1635666189 * value)
	{
		____currentTileMeshData_18 = value;
		Il2CppCodeGenWriteBarrier(&____currentTileMeshData_18, value);
	}

	inline static int32_t get_offset_of__stitchTargetMeshData_19() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____stitchTargetMeshData_19)); }
	inline MeshData_t1635666189 * get__stitchTargetMeshData_19() const { return ____stitchTargetMeshData_19; }
	inline MeshData_t1635666189 ** get_address_of__stitchTargetMeshData_19() { return &____stitchTargetMeshData_19; }
	inline void set__stitchTargetMeshData_19(MeshData_t1635666189 * value)
	{
		____stitchTargetMeshData_19 = value;
		Il2CppCodeGenWriteBarrier(&____stitchTargetMeshData_19, value);
	}

	inline static int32_t get_offset_of__newVertexList_20() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____newVertexList_20)); }
	inline List_1_t1612828712 * get__newVertexList_20() const { return ____newVertexList_20; }
	inline List_1_t1612828712 ** get_address_of__newVertexList_20() { return &____newVertexList_20; }
	inline void set__newVertexList_20(List_1_t1612828712 * value)
	{
		____newVertexList_20 = value;
		Il2CppCodeGenWriteBarrier(&____newVertexList_20, value);
	}

	inline static int32_t get_offset_of__newNormalList_21() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____newNormalList_21)); }
	inline List_1_t1612828712 * get__newNormalList_21() const { return ____newNormalList_21; }
	inline List_1_t1612828712 ** get_address_of__newNormalList_21() { return &____newNormalList_21; }
	inline void set__newNormalList_21(List_1_t1612828712 * value)
	{
		____newNormalList_21 = value;
		Il2CppCodeGenWriteBarrier(&____newNormalList_21, value);
	}

	inline static int32_t get_offset_of__newUvList_22() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____newUvList_22)); }
	inline List_1_t1612828711 * get__newUvList_22() const { return ____newUvList_22; }
	inline List_1_t1612828711 ** get_address_of__newUvList_22() { return &____newUvList_22; }
	inline void set__newUvList_22(List_1_t1612828711 * value)
	{
		____newUvList_22 = value;
		Il2CppCodeGenWriteBarrier(&____newUvList_22, value);
	}

	inline static int32_t get_offset_of__newTriangleList_23() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____newTriangleList_23)); }
	inline List_1_t1440998580 * get__newTriangleList_23() const { return ____newTriangleList_23; }
	inline List_1_t1440998580 ** get_address_of__newTriangleList_23() { return &____newTriangleList_23; }
	inline void set__newTriangleList_23(List_1_t1440998580 * value)
	{
		____newTriangleList_23 = value;
		Il2CppCodeGenWriteBarrier(&____newTriangleList_23, value);
	}

	inline static int32_t get_offset_of__newDir_24() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____newDir_24)); }
	inline Vector3_t2243707580  get__newDir_24() const { return ____newDir_24; }
	inline Vector3_t2243707580 * get_address_of__newDir_24() { return &____newDir_24; }
	inline void set__newDir_24(Vector3_t2243707580  value)
	{
		____newDir_24 = value;
	}

	inline static int32_t get_offset_of__vertA_25() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____vertA_25)); }
	inline int32_t get__vertA_25() const { return ____vertA_25; }
	inline int32_t* get_address_of__vertA_25() { return &____vertA_25; }
	inline void set__vertA_25(int32_t value)
	{
		____vertA_25 = value;
	}

	inline static int32_t get_offset_of__vertB_26() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____vertB_26)); }
	inline int32_t get__vertB_26() const { return ____vertB_26; }
	inline int32_t* get_address_of__vertB_26() { return &____vertB_26; }
	inline void set__vertB_26(int32_t value)
	{
		____vertB_26 = value;
	}

	inline static int32_t get_offset_of__vertC_27() { return static_cast<int32_t>(offsetof(TerrainFactory_t340073915, ____vertC_27)); }
	inline int32_t get__vertC_27() const { return ____vertC_27; }
	inline int32_t* get_address_of__vertC_27() { return &____vertC_27; }
	inline void set__vertC_27(int32_t value)
	{
		____vertC_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
