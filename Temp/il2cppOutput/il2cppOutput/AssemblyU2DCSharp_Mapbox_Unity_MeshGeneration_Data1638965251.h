#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_RectD1598124772.h"
#include "AssemblyU2DCSharp_Mapbox_Map_CanonicalTileId3196769505.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Enums713153554.h"

// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<Mapbox.Map.Tile>
struct List_1_t1189033738;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.String
struct String_t;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_t1440764633;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct  UnityTile_t1638965251  : public MonoBehaviour_t1158329972
{
public:
	// System.Single[] Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightData
	SingleU5BU5D_t577127397* ____heightData_2;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterData
	Texture2D_t3542995729 * ____rasterData_3;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_relativeScale
	float ____relativeScale_4;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightTexture
	Texture2D_t3542995729 * ____heightTexture_5;
	// System.Collections.Generic.List`1<Mapbox.Map.Tile> Mapbox.Unity.MeshGeneration.Data.UnityTile::_tiles
	List_1_t1189033738 * ____tiles_6;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshRenderer
	MeshRenderer_t1268241104 * ____meshRenderer_7;
	// UnityEngine.MeshFilter Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshFilter
	MeshFilter_t3026937449 * ____meshFilter_8;
	// UnityEngine.Collider Mapbox.Unity.MeshGeneration.Data.UnityTile::_collider
	Collider_t3497673348 * ____collider_9;
	// System.String Mapbox.Unity.MeshGeneration.Data.UnityTile::_vectorData
	String_t* ____vectorData_10;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.UnityTile::_rect
	RectD_t1598124772  ____rect_11;
	// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::_canonicalTileId
	CanonicalTileId_t3196769505  ____canonicalTileId_12;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::<RasterDataState>k__BackingField
	int32_t ___U3CRasterDataStateU3Ek__BackingField_13;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::<HeightDataState>k__BackingField
	int32_t ___U3CHeightDataStateU3Ek__BackingField_14;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::<VectorDataState>k__BackingField
	int32_t ___U3CVectorDataStateU3Ek__BackingField_15;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnHeightDataChanged
	Action_1_t1440764633 * ___OnHeightDataChanged_16;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRasterDataChanged
	Action_1_t1440764633 * ___OnRasterDataChanged_17;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnVectorDataChanged
	Action_1_t1440764633 * ___OnVectorDataChanged_18;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRecycled
	Action_1_t1440764633 * ___OnRecycled_19;

public:
	inline static int32_t get_offset_of__heightData_2() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____heightData_2)); }
	inline SingleU5BU5D_t577127397* get__heightData_2() const { return ____heightData_2; }
	inline SingleU5BU5D_t577127397** get_address_of__heightData_2() { return &____heightData_2; }
	inline void set__heightData_2(SingleU5BU5D_t577127397* value)
	{
		____heightData_2 = value;
		Il2CppCodeGenWriteBarrier(&____heightData_2, value);
	}

	inline static int32_t get_offset_of__rasterData_3() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____rasterData_3)); }
	inline Texture2D_t3542995729 * get__rasterData_3() const { return ____rasterData_3; }
	inline Texture2D_t3542995729 ** get_address_of__rasterData_3() { return &____rasterData_3; }
	inline void set__rasterData_3(Texture2D_t3542995729 * value)
	{
		____rasterData_3 = value;
		Il2CppCodeGenWriteBarrier(&____rasterData_3, value);
	}

	inline static int32_t get_offset_of__relativeScale_4() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____relativeScale_4)); }
	inline float get__relativeScale_4() const { return ____relativeScale_4; }
	inline float* get_address_of__relativeScale_4() { return &____relativeScale_4; }
	inline void set__relativeScale_4(float value)
	{
		____relativeScale_4 = value;
	}

	inline static int32_t get_offset_of__heightTexture_5() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____heightTexture_5)); }
	inline Texture2D_t3542995729 * get__heightTexture_5() const { return ____heightTexture_5; }
	inline Texture2D_t3542995729 ** get_address_of__heightTexture_5() { return &____heightTexture_5; }
	inline void set__heightTexture_5(Texture2D_t3542995729 * value)
	{
		____heightTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&____heightTexture_5, value);
	}

	inline static int32_t get_offset_of__tiles_6() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____tiles_6)); }
	inline List_1_t1189033738 * get__tiles_6() const { return ____tiles_6; }
	inline List_1_t1189033738 ** get_address_of__tiles_6() { return &____tiles_6; }
	inline void set__tiles_6(List_1_t1189033738 * value)
	{
		____tiles_6 = value;
		Il2CppCodeGenWriteBarrier(&____tiles_6, value);
	}

	inline static int32_t get_offset_of__meshRenderer_7() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____meshRenderer_7)); }
	inline MeshRenderer_t1268241104 * get__meshRenderer_7() const { return ____meshRenderer_7; }
	inline MeshRenderer_t1268241104 ** get_address_of__meshRenderer_7() { return &____meshRenderer_7; }
	inline void set__meshRenderer_7(MeshRenderer_t1268241104 * value)
	{
		____meshRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&____meshRenderer_7, value);
	}

	inline static int32_t get_offset_of__meshFilter_8() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____meshFilter_8)); }
	inline MeshFilter_t3026937449 * get__meshFilter_8() const { return ____meshFilter_8; }
	inline MeshFilter_t3026937449 ** get_address_of__meshFilter_8() { return &____meshFilter_8; }
	inline void set__meshFilter_8(MeshFilter_t3026937449 * value)
	{
		____meshFilter_8 = value;
		Il2CppCodeGenWriteBarrier(&____meshFilter_8, value);
	}

	inline static int32_t get_offset_of__collider_9() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____collider_9)); }
	inline Collider_t3497673348 * get__collider_9() const { return ____collider_9; }
	inline Collider_t3497673348 ** get_address_of__collider_9() { return &____collider_9; }
	inline void set__collider_9(Collider_t3497673348 * value)
	{
		____collider_9 = value;
		Il2CppCodeGenWriteBarrier(&____collider_9, value);
	}

	inline static int32_t get_offset_of__vectorData_10() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____vectorData_10)); }
	inline String_t* get__vectorData_10() const { return ____vectorData_10; }
	inline String_t** get_address_of__vectorData_10() { return &____vectorData_10; }
	inline void set__vectorData_10(String_t* value)
	{
		____vectorData_10 = value;
		Il2CppCodeGenWriteBarrier(&____vectorData_10, value);
	}

	inline static int32_t get_offset_of__rect_11() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____rect_11)); }
	inline RectD_t1598124772  get__rect_11() const { return ____rect_11; }
	inline RectD_t1598124772 * get_address_of__rect_11() { return &____rect_11; }
	inline void set__rect_11(RectD_t1598124772  value)
	{
		____rect_11 = value;
	}

	inline static int32_t get_offset_of__canonicalTileId_12() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ____canonicalTileId_12)); }
	inline CanonicalTileId_t3196769505  get__canonicalTileId_12() const { return ____canonicalTileId_12; }
	inline CanonicalTileId_t3196769505 * get_address_of__canonicalTileId_12() { return &____canonicalTileId_12; }
	inline void set__canonicalTileId_12(CanonicalTileId_t3196769505  value)
	{
		____canonicalTileId_12 = value;
	}

	inline static int32_t get_offset_of_U3CRasterDataStateU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___U3CRasterDataStateU3Ek__BackingField_13)); }
	inline int32_t get_U3CRasterDataStateU3Ek__BackingField_13() const { return ___U3CRasterDataStateU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CRasterDataStateU3Ek__BackingField_13() { return &___U3CRasterDataStateU3Ek__BackingField_13; }
	inline void set_U3CRasterDataStateU3Ek__BackingField_13(int32_t value)
	{
		___U3CRasterDataStateU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CHeightDataStateU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___U3CHeightDataStateU3Ek__BackingField_14)); }
	inline int32_t get_U3CHeightDataStateU3Ek__BackingField_14() const { return ___U3CHeightDataStateU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CHeightDataStateU3Ek__BackingField_14() { return &___U3CHeightDataStateU3Ek__BackingField_14; }
	inline void set_U3CHeightDataStateU3Ek__BackingField_14(int32_t value)
	{
		___U3CHeightDataStateU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CVectorDataStateU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___U3CVectorDataStateU3Ek__BackingField_15)); }
	inline int32_t get_U3CVectorDataStateU3Ek__BackingField_15() const { return ___U3CVectorDataStateU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CVectorDataStateU3Ek__BackingField_15() { return &___U3CVectorDataStateU3Ek__BackingField_15; }
	inline void set_U3CVectorDataStateU3Ek__BackingField_15(int32_t value)
	{
		___U3CVectorDataStateU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_OnHeightDataChanged_16() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___OnHeightDataChanged_16)); }
	inline Action_1_t1440764633 * get_OnHeightDataChanged_16() const { return ___OnHeightDataChanged_16; }
	inline Action_1_t1440764633 ** get_address_of_OnHeightDataChanged_16() { return &___OnHeightDataChanged_16; }
	inline void set_OnHeightDataChanged_16(Action_1_t1440764633 * value)
	{
		___OnHeightDataChanged_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeightDataChanged_16, value);
	}

	inline static int32_t get_offset_of_OnRasterDataChanged_17() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___OnRasterDataChanged_17)); }
	inline Action_1_t1440764633 * get_OnRasterDataChanged_17() const { return ___OnRasterDataChanged_17; }
	inline Action_1_t1440764633 ** get_address_of_OnRasterDataChanged_17() { return &___OnRasterDataChanged_17; }
	inline void set_OnRasterDataChanged_17(Action_1_t1440764633 * value)
	{
		___OnRasterDataChanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnRasterDataChanged_17, value);
	}

	inline static int32_t get_offset_of_OnVectorDataChanged_18() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___OnVectorDataChanged_18)); }
	inline Action_1_t1440764633 * get_OnVectorDataChanged_18() const { return ___OnVectorDataChanged_18; }
	inline Action_1_t1440764633 ** get_address_of_OnVectorDataChanged_18() { return &___OnVectorDataChanged_18; }
	inline void set_OnVectorDataChanged_18(Action_1_t1440764633 * value)
	{
		___OnVectorDataChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnVectorDataChanged_18, value);
	}

	inline static int32_t get_offset_of_OnRecycled_19() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251, ___OnRecycled_19)); }
	inline Action_1_t1440764633 * get_OnRecycled_19() const { return ___OnRecycled_19; }
	inline Action_1_t1440764633 ** get_address_of_OnRecycled_19() { return &___OnRecycled_19; }
	inline void set_OnRecycled_19(Action_1_t1440764633 * value)
	{
		___OnRecycled_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecycled_19, value);
	}
};

struct UnityTile_t1638965251_StaticFields
{
public:
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache0
	Action_1_t1440764633 * ___U3CU3Ef__amU24cache0_20;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache1
	Action_1_t1440764633 * ___U3CU3Ef__amU24cache1_21;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache2
	Action_1_t1440764633 * ___U3CU3Ef__amU24cache2_22;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::<>f__am$cache3
	Action_1_t1440764633 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline Action_1_t1440764633 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline Action_1_t1440764633 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(Action_1_t1440764633 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_21() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251_StaticFields, ___U3CU3Ef__amU24cache1_21)); }
	inline Action_1_t1440764633 * get_U3CU3Ef__amU24cache1_21() const { return ___U3CU3Ef__amU24cache1_21; }
	inline Action_1_t1440764633 ** get_address_of_U3CU3Ef__amU24cache1_21() { return &___U3CU3Ef__amU24cache1_21; }
	inline void set_U3CU3Ef__amU24cache1_21(Action_1_t1440764633 * value)
	{
		___U3CU3Ef__amU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline Action_1_t1440764633 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline Action_1_t1440764633 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(Action_1_t1440764633 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(UnityTile_t1638965251_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline Action_1_t1440764633 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline Action_1_t1440764633 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(Action_1_t1440764633 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
