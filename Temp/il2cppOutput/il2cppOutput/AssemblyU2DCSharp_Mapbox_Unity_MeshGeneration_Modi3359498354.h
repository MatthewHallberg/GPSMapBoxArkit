#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi1486536946.h"

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier
struct  TextureModifier_t3359498354  : public GameObjectModifier_t1486536946
{
public:
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier::_textureTop
	bool ____textureTop_3;
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier::_useSatelliteTexture
	bool ____useSatelliteTexture_4;
	// UnityEngine.Material[] Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier::_topMaterials
	MaterialU5BU5D_t3123989686* ____topMaterials_5;
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier::_textureSides
	bool ____textureSides_6;
	// UnityEngine.Material[] Mapbox.Unity.MeshGeneration.Modifiers.TextureModifier::_sideMaterials
	MaterialU5BU5D_t3123989686* ____sideMaterials_7;

public:
	inline static int32_t get_offset_of__textureTop_3() { return static_cast<int32_t>(offsetof(TextureModifier_t3359498354, ____textureTop_3)); }
	inline bool get__textureTop_3() const { return ____textureTop_3; }
	inline bool* get_address_of__textureTop_3() { return &____textureTop_3; }
	inline void set__textureTop_3(bool value)
	{
		____textureTop_3 = value;
	}

	inline static int32_t get_offset_of__useSatelliteTexture_4() { return static_cast<int32_t>(offsetof(TextureModifier_t3359498354, ____useSatelliteTexture_4)); }
	inline bool get__useSatelliteTexture_4() const { return ____useSatelliteTexture_4; }
	inline bool* get_address_of__useSatelliteTexture_4() { return &____useSatelliteTexture_4; }
	inline void set__useSatelliteTexture_4(bool value)
	{
		____useSatelliteTexture_4 = value;
	}

	inline static int32_t get_offset_of__topMaterials_5() { return static_cast<int32_t>(offsetof(TextureModifier_t3359498354, ____topMaterials_5)); }
	inline MaterialU5BU5D_t3123989686* get__topMaterials_5() const { return ____topMaterials_5; }
	inline MaterialU5BU5D_t3123989686** get_address_of__topMaterials_5() { return &____topMaterials_5; }
	inline void set__topMaterials_5(MaterialU5BU5D_t3123989686* value)
	{
		____topMaterials_5 = value;
		Il2CppCodeGenWriteBarrier(&____topMaterials_5, value);
	}

	inline static int32_t get_offset_of__textureSides_6() { return static_cast<int32_t>(offsetof(TextureModifier_t3359498354, ____textureSides_6)); }
	inline bool get__textureSides_6() const { return ____textureSides_6; }
	inline bool* get_address_of__textureSides_6() { return &____textureSides_6; }
	inline void set__textureSides_6(bool value)
	{
		____textureSides_6 = value;
	}

	inline static int32_t get_offset_of__sideMaterials_7() { return static_cast<int32_t>(offsetof(TextureModifier_t3359498354, ____sideMaterials_7)); }
	inline MaterialU5BU5D_t3123989686* get__sideMaterials_7() const { return ____sideMaterials_7; }
	inline MaterialU5BU5D_t3123989686** get_address_of__sideMaterials_7() { return &____sideMaterials_7; }
	inline void set__sideMaterials_7(MaterialU5BU5D_t3123989686* value)
	{
		____sideMaterials_7 = value;
		Il2CppCodeGenWriteBarrier(&____sideMaterials_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
