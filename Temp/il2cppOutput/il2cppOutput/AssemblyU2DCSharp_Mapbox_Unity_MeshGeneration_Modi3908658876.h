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

// Mapbox.Unity.MeshGeneration.Modifiers.LineMeshModifier
struct  LineMeshModifier_t3908658876  : public MeshModifier_t3094356626
{
public:
	// System.Boolean Mapbox.Unity.MeshGeneration.Modifiers.LineMeshModifier::_mergeStartEnd
	bool ____mergeStartEnd_3;
	// System.Single Mapbox.Unity.MeshGeneration.Modifiers.LineMeshModifier::Width
	float ___Width_4;

public:
	inline static int32_t get_offset_of__mergeStartEnd_3() { return static_cast<int32_t>(offsetof(LineMeshModifier_t3908658876, ____mergeStartEnd_3)); }
	inline bool get__mergeStartEnd_3() const { return ____mergeStartEnd_3; }
	inline bool* get_address_of__mergeStartEnd_3() { return &____mergeStartEnd_3; }
	inline void set__mergeStartEnd_3(bool value)
	{
		____mergeStartEnd_3 = value;
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(LineMeshModifier_t3908658876, ___Width_4)); }
	inline float get_Width_4() const { return ___Width_4; }
	inline float* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(float value)
	{
		___Width_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
