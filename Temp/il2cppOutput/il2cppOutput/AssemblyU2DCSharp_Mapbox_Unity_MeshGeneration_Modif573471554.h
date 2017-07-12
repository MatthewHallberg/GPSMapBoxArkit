#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi3094356626.h"

// TriangleNet.Meshing.ConstraintOptions
struct ConstraintOptions_t2163317251;
// TriangleNet.Meshing.QualityOptions
struct QualityOptions_t1393950899;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.PolygonMeshModifier
struct  PolygonMeshModifier_t573471554  : public MeshModifier_t3094356626
{
public:
	// TriangleNet.Meshing.ConstraintOptions Mapbox.Unity.MeshGeneration.Modifiers.PolygonMeshModifier::options
	ConstraintOptions_t2163317251 * ___options_3;
	// TriangleNet.Meshing.QualityOptions Mapbox.Unity.MeshGeneration.Modifiers.PolygonMeshModifier::quality
	QualityOptions_t1393950899 * ___quality_4;

public:
	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(PolygonMeshModifier_t573471554, ___options_3)); }
	inline ConstraintOptions_t2163317251 * get_options_3() const { return ___options_3; }
	inline ConstraintOptions_t2163317251 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(ConstraintOptions_t2163317251 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier(&___options_3, value);
	}

	inline static int32_t get_offset_of_quality_4() { return static_cast<int32_t>(offsetof(PolygonMeshModifier_t573471554, ___quality_4)); }
	inline QualityOptions_t1393950899 * get_quality_4() const { return ___quality_4; }
	inline QualityOptions_t1393950899 ** get_address_of_quality_4() { return &___quality_4; }
	inline void set_quality_4(QualityOptions_t1393950899 * value)
	{
		___quality_4 = value;
		Il2CppCodeGenWriteBarrier(&___quality_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
