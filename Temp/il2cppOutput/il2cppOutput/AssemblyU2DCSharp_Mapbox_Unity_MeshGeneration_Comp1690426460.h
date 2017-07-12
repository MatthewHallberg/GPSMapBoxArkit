#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t1638965251;
// Mapbox.Unity.MeshGeneration.Components.FeatureBehaviour
struct FeatureBehaviour_t2314583589;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Components.TextureSelector
struct  TextureSelector_t1690426460  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Mapbox.Unity.MeshGeneration.Components.TextureSelector::_useSatelliteRoof
	bool ____useSatelliteRoof_2;
	// System.Boolean Mapbox.Unity.MeshGeneration.Components.TextureSelector::_textureTop
	bool ____textureTop_3;
	// System.Boolean Mapbox.Unity.MeshGeneration.Components.TextureSelector::_textureSides
	bool ____textureSides_4;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile Mapbox.Unity.MeshGeneration.Components.TextureSelector::_tile
	UnityTile_t1638965251 * ____tile_5;
	// Mapbox.Unity.MeshGeneration.Components.FeatureBehaviour Mapbox.Unity.MeshGeneration.Components.TextureSelector::_feature
	FeatureBehaviour_t2314583589 * ____feature_6;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Components.TextureSelector::_meshRenderer
	MeshRenderer_t1268241104 * ____meshRenderer_7;
	// UnityEngine.Material[] Mapbox.Unity.MeshGeneration.Components.TextureSelector::_topTextures
	MaterialU5BU5D_t3123989686* ____topTextures_8;
	// UnityEngine.Material[] Mapbox.Unity.MeshGeneration.Components.TextureSelector::_sideTextures
	MaterialU5BU5D_t3123989686* ____sideTextures_9;

public:
	inline static int32_t get_offset_of__useSatelliteRoof_2() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____useSatelliteRoof_2)); }
	inline bool get__useSatelliteRoof_2() const { return ____useSatelliteRoof_2; }
	inline bool* get_address_of__useSatelliteRoof_2() { return &____useSatelliteRoof_2; }
	inline void set__useSatelliteRoof_2(bool value)
	{
		____useSatelliteRoof_2 = value;
	}

	inline static int32_t get_offset_of__textureTop_3() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____textureTop_3)); }
	inline bool get__textureTop_3() const { return ____textureTop_3; }
	inline bool* get_address_of__textureTop_3() { return &____textureTop_3; }
	inline void set__textureTop_3(bool value)
	{
		____textureTop_3 = value;
	}

	inline static int32_t get_offset_of__textureSides_4() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____textureSides_4)); }
	inline bool get__textureSides_4() const { return ____textureSides_4; }
	inline bool* get_address_of__textureSides_4() { return &____textureSides_4; }
	inline void set__textureSides_4(bool value)
	{
		____textureSides_4 = value;
	}

	inline static int32_t get_offset_of__tile_5() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____tile_5)); }
	inline UnityTile_t1638965251 * get__tile_5() const { return ____tile_5; }
	inline UnityTile_t1638965251 ** get_address_of__tile_5() { return &____tile_5; }
	inline void set__tile_5(UnityTile_t1638965251 * value)
	{
		____tile_5 = value;
		Il2CppCodeGenWriteBarrier(&____tile_5, value);
	}

	inline static int32_t get_offset_of__feature_6() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____feature_6)); }
	inline FeatureBehaviour_t2314583589 * get__feature_6() const { return ____feature_6; }
	inline FeatureBehaviour_t2314583589 ** get_address_of__feature_6() { return &____feature_6; }
	inline void set__feature_6(FeatureBehaviour_t2314583589 * value)
	{
		____feature_6 = value;
		Il2CppCodeGenWriteBarrier(&____feature_6, value);
	}

	inline static int32_t get_offset_of__meshRenderer_7() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____meshRenderer_7)); }
	inline MeshRenderer_t1268241104 * get__meshRenderer_7() const { return ____meshRenderer_7; }
	inline MeshRenderer_t1268241104 ** get_address_of__meshRenderer_7() { return &____meshRenderer_7; }
	inline void set__meshRenderer_7(MeshRenderer_t1268241104 * value)
	{
		____meshRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&____meshRenderer_7, value);
	}

	inline static int32_t get_offset_of__topTextures_8() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____topTextures_8)); }
	inline MaterialU5BU5D_t3123989686* get__topTextures_8() const { return ____topTextures_8; }
	inline MaterialU5BU5D_t3123989686** get_address_of__topTextures_8() { return &____topTextures_8; }
	inline void set__topTextures_8(MaterialU5BU5D_t3123989686* value)
	{
		____topTextures_8 = value;
		Il2CppCodeGenWriteBarrier(&____topTextures_8, value);
	}

	inline static int32_t get_offset_of__sideTextures_9() { return static_cast<int32_t>(offsetof(TextureSelector_t1690426460, ____sideTextures_9)); }
	inline MaterialU5BU5D_t3123989686* get__sideTextures_9() const { return ____sideTextures_9; }
	inline MaterialU5BU5D_t3123989686** get_address_of__sideTextures_9() { return &____sideTextures_9; }
	inline void set__sideTextures_9(MaterialU5BU5D_t3123989686* value)
	{
		____sideTextures_9 = value;
		Il2CppCodeGenWriteBarrier(&____sideTextures_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
