#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.Triangle
struct Triangle_t3965613618;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Iterators.RegionIterator/<Process>c__AnonStorey0
struct  U3CProcessU3Ec__AnonStorey0_t271259108  : public Il2CppObject
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.Iterators.RegionIterator/<Process>c__AnonStorey0::triangle
	Triangle_t3965613618 * ___triangle_0;

public:
	inline static int32_t get_offset_of_triangle_0() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__AnonStorey0_t271259108, ___triangle_0)); }
	inline Triangle_t3965613618 * get_triangle_0() const { return ___triangle_0; }
	inline Triangle_t3965613618 ** get_address_of_triangle_0() { return &___triangle_0; }
	inline void set_triangle_0(Triangle_t3965613618 * value)
	{
		___triangle_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangle_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
