#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi3094356626.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.HeightModifier
struct  HeightModifier_t2341640154  : public MeshModifier_t3094356626
{
public:
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.HeightModifier::_flatTops
	bool ____flatTops_3;
	// System.Single Mapbox.Unity.MeshGeneration.Modifiers.HeightModifier::_height
	float ____height_4;
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.HeightModifier::_forceHeight
	bool ____forceHeight_5;

public:
	inline static int32_t get_offset_of__flatTops_3() { return static_cast<int32_t>(offsetof(HeightModifier_t2341640154, ____flatTops_3)); }
	inline bool get__flatTops_3() const { return ____flatTops_3; }
	inline bool* get_address_of__flatTops_3() { return &____flatTops_3; }
	inline void set__flatTops_3(bool value)
	{
		____flatTops_3 = value;
	}

	inline static int32_t get_offset_of__height_4() { return static_cast<int32_t>(offsetof(HeightModifier_t2341640154, ____height_4)); }
	inline float get__height_4() const { return ____height_4; }
	inline float* get_address_of__height_4() { return &____height_4; }
	inline void set__height_4(float value)
	{
		____height_4 = value;
	}

	inline static int32_t get_offset_of__forceHeight_5() { return static_cast<int32_t>(offsetof(HeightModifier_t2341640154, ____forceHeight_5)); }
	inline bool get__forceHeight_5() const { return ____forceHeight_5; }
	inline bool* get_address_of__forceHeight_5() { return &____forceHeight_5; }
	inline void set__forceHeight_5(bool value)
	{
		____forceHeight_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
