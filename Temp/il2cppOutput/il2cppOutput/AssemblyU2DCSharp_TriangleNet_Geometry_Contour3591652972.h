#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_t2799122150;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Geometry.Contour
struct  Contour_t3591652972  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Geometry.Contour::marker
	int32_t ___marker_0;
	// System.Boolean TriangleNet.Geometry.Contour::convex
	bool ___convex_1;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Contour::<Points>k__BackingField
	List_1_t2799122150 * ___U3CPointsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_marker_0() { return static_cast<int32_t>(offsetof(Contour_t3591652972, ___marker_0)); }
	inline int32_t get_marker_0() const { return ___marker_0; }
	inline int32_t* get_address_of_marker_0() { return &___marker_0; }
	inline void set_marker_0(int32_t value)
	{
		___marker_0 = value;
	}

	inline static int32_t get_offset_of_convex_1() { return static_cast<int32_t>(offsetof(Contour_t3591652972, ___convex_1)); }
	inline bool get_convex_1() const { return ___convex_1; }
	inline bool* get_address_of_convex_1() { return &___convex_1; }
	inline void set_convex_1(bool value)
	{
		___convex_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Contour_t3591652972, ___U3CPointsU3Ek__BackingField_2)); }
	inline List_1_t2799122150 * get_U3CPointsU3Ek__BackingField_2() const { return ___U3CPointsU3Ek__BackingField_2; }
	inline List_1_t2799122150 ** get_address_of_U3CPointsU3Ek__BackingField_2() { return &___U3CPointsU3Ek__BackingField_2; }
	inline void set_U3CPointsU3Ek__BackingField_2(List_1_t2799122150 * value)
	{
		___U3CPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPointsU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
