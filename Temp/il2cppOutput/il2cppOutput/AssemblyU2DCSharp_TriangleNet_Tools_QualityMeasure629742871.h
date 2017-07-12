#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Tools.QualityMeasure/AreaMeasure
struct AreaMeasure_t2609477317;
// TriangleNet.Tools.QualityMeasure/AlphaMeasure
struct AlphaMeasure_t42523064;
// TriangleNet.Tools.QualityMeasure/Q_Measure
struct Q_Measure_t3930961000;
// TriangleNet.Mesh
struct Mesh_t1414352559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.QualityMeasure
struct  QualityMeasure_t629742871  : public Il2CppObject
{
public:
	// TriangleNet.Tools.QualityMeasure/AreaMeasure TriangleNet.Tools.QualityMeasure::areaMeasure
	AreaMeasure_t2609477317 * ___areaMeasure_0;
	// TriangleNet.Tools.QualityMeasure/AlphaMeasure TriangleNet.Tools.QualityMeasure::alphaMeasure
	AlphaMeasure_t42523064 * ___alphaMeasure_1;
	// TriangleNet.Tools.QualityMeasure/Q_Measure TriangleNet.Tools.QualityMeasure::qMeasure
	Q_Measure_t3930961000 * ___qMeasure_2;
	// TriangleNet.Mesh TriangleNet.Tools.QualityMeasure::mesh
	Mesh_t1414352559 * ___mesh_3;

public:
	inline static int32_t get_offset_of_areaMeasure_0() { return static_cast<int32_t>(offsetof(QualityMeasure_t629742871, ___areaMeasure_0)); }
	inline AreaMeasure_t2609477317 * get_areaMeasure_0() const { return ___areaMeasure_0; }
	inline AreaMeasure_t2609477317 ** get_address_of_areaMeasure_0() { return &___areaMeasure_0; }
	inline void set_areaMeasure_0(AreaMeasure_t2609477317 * value)
	{
		___areaMeasure_0 = value;
		Il2CppCodeGenWriteBarrier(&___areaMeasure_0, value);
	}

	inline static int32_t get_offset_of_alphaMeasure_1() { return static_cast<int32_t>(offsetof(QualityMeasure_t629742871, ___alphaMeasure_1)); }
	inline AlphaMeasure_t42523064 * get_alphaMeasure_1() const { return ___alphaMeasure_1; }
	inline AlphaMeasure_t42523064 ** get_address_of_alphaMeasure_1() { return &___alphaMeasure_1; }
	inline void set_alphaMeasure_1(AlphaMeasure_t42523064 * value)
	{
		___alphaMeasure_1 = value;
		Il2CppCodeGenWriteBarrier(&___alphaMeasure_1, value);
	}

	inline static int32_t get_offset_of_qMeasure_2() { return static_cast<int32_t>(offsetof(QualityMeasure_t629742871, ___qMeasure_2)); }
	inline Q_Measure_t3930961000 * get_qMeasure_2() const { return ___qMeasure_2; }
	inline Q_Measure_t3930961000 ** get_address_of_qMeasure_2() { return &___qMeasure_2; }
	inline void set_qMeasure_2(Q_Measure_t3930961000 * value)
	{
		___qMeasure_2 = value;
		Il2CppCodeGenWriteBarrier(&___qMeasure_2, value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(QualityMeasure_t629742871, ___mesh_3)); }
	inline Mesh_t1414352559 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1414352559 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1414352559 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
