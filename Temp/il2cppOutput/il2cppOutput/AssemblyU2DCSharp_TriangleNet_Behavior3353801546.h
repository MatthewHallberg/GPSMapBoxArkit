#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean>
struct Func_3_t1245991216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Behavior
struct  Behavior_t3353801546  : public Il2CppObject
{
public:
	// System.Boolean TriangleNet.Behavior::poly
	bool ___poly_0;
	// System.Boolean TriangleNet.Behavior::quality
	bool ___quality_1;
	// System.Boolean TriangleNet.Behavior::varArea
	bool ___varArea_2;
	// System.Boolean TriangleNet.Behavior::convex
	bool ___convex_3;
	// System.Boolean TriangleNet.Behavior::jettison
	bool ___jettison_4;
	// System.Boolean TriangleNet.Behavior::boundaryMarkers
	bool ___boundaryMarkers_5;
	// System.Boolean TriangleNet.Behavior::noHoles
	bool ___noHoles_6;
	// System.Boolean TriangleNet.Behavior::conformDel
	bool ___conformDel_7;
	// System.Func`3<TriangleNet.Geometry.ITriangle,System.Double,System.Boolean> TriangleNet.Behavior::usertest
	Func_3_t1245991216 * ___usertest_8;
	// System.Int32 TriangleNet.Behavior::noBisect
	int32_t ___noBisect_9;
	// System.Double TriangleNet.Behavior::minAngle
	double ___minAngle_10;
	// System.Double TriangleNet.Behavior::maxAngle
	double ___maxAngle_11;
	// System.Double TriangleNet.Behavior::maxArea
	double ___maxArea_12;
	// System.Boolean TriangleNet.Behavior::fixedArea
	bool ___fixedArea_13;
	// System.Boolean TriangleNet.Behavior::useSegments
	bool ___useSegments_14;
	// System.Boolean TriangleNet.Behavior::useRegions
	bool ___useRegions_15;
	// System.Double TriangleNet.Behavior::goodAngle
	double ___goodAngle_16;
	// System.Double TriangleNet.Behavior::maxGoodAngle
	double ___maxGoodAngle_17;
	// System.Double TriangleNet.Behavior::offconstant
	double ___offconstant_18;

public:
	inline static int32_t get_offset_of_poly_0() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___poly_0)); }
	inline bool get_poly_0() const { return ___poly_0; }
	inline bool* get_address_of_poly_0() { return &___poly_0; }
	inline void set_poly_0(bool value)
	{
		___poly_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___quality_1)); }
	inline bool get_quality_1() const { return ___quality_1; }
	inline bool* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(bool value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_varArea_2() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___varArea_2)); }
	inline bool get_varArea_2() const { return ___varArea_2; }
	inline bool* get_address_of_varArea_2() { return &___varArea_2; }
	inline void set_varArea_2(bool value)
	{
		___varArea_2 = value;
	}

	inline static int32_t get_offset_of_convex_3() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___convex_3)); }
	inline bool get_convex_3() const { return ___convex_3; }
	inline bool* get_address_of_convex_3() { return &___convex_3; }
	inline void set_convex_3(bool value)
	{
		___convex_3 = value;
	}

	inline static int32_t get_offset_of_jettison_4() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___jettison_4)); }
	inline bool get_jettison_4() const { return ___jettison_4; }
	inline bool* get_address_of_jettison_4() { return &___jettison_4; }
	inline void set_jettison_4(bool value)
	{
		___jettison_4 = value;
	}

	inline static int32_t get_offset_of_boundaryMarkers_5() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___boundaryMarkers_5)); }
	inline bool get_boundaryMarkers_5() const { return ___boundaryMarkers_5; }
	inline bool* get_address_of_boundaryMarkers_5() { return &___boundaryMarkers_5; }
	inline void set_boundaryMarkers_5(bool value)
	{
		___boundaryMarkers_5 = value;
	}

	inline static int32_t get_offset_of_noHoles_6() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___noHoles_6)); }
	inline bool get_noHoles_6() const { return ___noHoles_6; }
	inline bool* get_address_of_noHoles_6() { return &___noHoles_6; }
	inline void set_noHoles_6(bool value)
	{
		___noHoles_6 = value;
	}

	inline static int32_t get_offset_of_conformDel_7() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___conformDel_7)); }
	inline bool get_conformDel_7() const { return ___conformDel_7; }
	inline bool* get_address_of_conformDel_7() { return &___conformDel_7; }
	inline void set_conformDel_7(bool value)
	{
		___conformDel_7 = value;
	}

	inline static int32_t get_offset_of_usertest_8() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___usertest_8)); }
	inline Func_3_t1245991216 * get_usertest_8() const { return ___usertest_8; }
	inline Func_3_t1245991216 ** get_address_of_usertest_8() { return &___usertest_8; }
	inline void set_usertest_8(Func_3_t1245991216 * value)
	{
		___usertest_8 = value;
		Il2CppCodeGenWriteBarrier(&___usertest_8, value);
	}

	inline static int32_t get_offset_of_noBisect_9() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___noBisect_9)); }
	inline int32_t get_noBisect_9() const { return ___noBisect_9; }
	inline int32_t* get_address_of_noBisect_9() { return &___noBisect_9; }
	inline void set_noBisect_9(int32_t value)
	{
		___noBisect_9 = value;
	}

	inline static int32_t get_offset_of_minAngle_10() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___minAngle_10)); }
	inline double get_minAngle_10() const { return ___minAngle_10; }
	inline double* get_address_of_minAngle_10() { return &___minAngle_10; }
	inline void set_minAngle_10(double value)
	{
		___minAngle_10 = value;
	}

	inline static int32_t get_offset_of_maxAngle_11() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___maxAngle_11)); }
	inline double get_maxAngle_11() const { return ___maxAngle_11; }
	inline double* get_address_of_maxAngle_11() { return &___maxAngle_11; }
	inline void set_maxAngle_11(double value)
	{
		___maxAngle_11 = value;
	}

	inline static int32_t get_offset_of_maxArea_12() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___maxArea_12)); }
	inline double get_maxArea_12() const { return ___maxArea_12; }
	inline double* get_address_of_maxArea_12() { return &___maxArea_12; }
	inline void set_maxArea_12(double value)
	{
		___maxArea_12 = value;
	}

	inline static int32_t get_offset_of_fixedArea_13() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___fixedArea_13)); }
	inline bool get_fixedArea_13() const { return ___fixedArea_13; }
	inline bool* get_address_of_fixedArea_13() { return &___fixedArea_13; }
	inline void set_fixedArea_13(bool value)
	{
		___fixedArea_13 = value;
	}

	inline static int32_t get_offset_of_useSegments_14() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___useSegments_14)); }
	inline bool get_useSegments_14() const { return ___useSegments_14; }
	inline bool* get_address_of_useSegments_14() { return &___useSegments_14; }
	inline void set_useSegments_14(bool value)
	{
		___useSegments_14 = value;
	}

	inline static int32_t get_offset_of_useRegions_15() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___useRegions_15)); }
	inline bool get_useRegions_15() const { return ___useRegions_15; }
	inline bool* get_address_of_useRegions_15() { return &___useRegions_15; }
	inline void set_useRegions_15(bool value)
	{
		___useRegions_15 = value;
	}

	inline static int32_t get_offset_of_goodAngle_16() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___goodAngle_16)); }
	inline double get_goodAngle_16() const { return ___goodAngle_16; }
	inline double* get_address_of_goodAngle_16() { return &___goodAngle_16; }
	inline void set_goodAngle_16(double value)
	{
		___goodAngle_16 = value;
	}

	inline static int32_t get_offset_of_maxGoodAngle_17() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___maxGoodAngle_17)); }
	inline double get_maxGoodAngle_17() const { return ___maxGoodAngle_17; }
	inline double* get_address_of_maxGoodAngle_17() { return &___maxGoodAngle_17; }
	inline void set_maxGoodAngle_17(double value)
	{
		___maxGoodAngle_17 = value;
	}

	inline static int32_t get_offset_of_offconstant_18() { return static_cast<int32_t>(offsetof(Behavior_t3353801546, ___offconstant_18)); }
	inline double get_offconstant_18() const { return ___offconstant_18; }
	inline double* get_address_of_offconstant_18() { return &___offconstant_18; }
	inline void set_offconstant_18(double value)
	{
		___offconstant_18 = value;
	}
};

struct Behavior_t3353801546_StaticFields
{
public:
	// System.Boolean TriangleNet.Behavior::<NoExact>k__BackingField
	bool ___U3CNoExactU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CNoExactU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Behavior_t3353801546_StaticFields, ___U3CNoExactU3Ek__BackingField_19)); }
	inline bool get_U3CNoExactU3Ek__BackingField_19() const { return ___U3CNoExactU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CNoExactU3Ek__BackingField_19() { return &___U3CNoExactU3Ek__BackingField_19; }
	inline void set_U3CNoExactU3Ek__BackingField_19(bool value)
	{
		___U3CNoExactU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
