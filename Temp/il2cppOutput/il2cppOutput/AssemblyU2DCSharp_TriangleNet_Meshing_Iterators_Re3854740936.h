#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>
struct List_1_t3334734750;
// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>
struct Func_2_t3780598728;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Iterators.RegionIterator
struct  RegionIterator_t3854740936  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle> TriangleNet.Meshing.Iterators.RegionIterator::region
	List_1_t3334734750 * ___region_0;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(RegionIterator_t3854740936, ___region_0)); }
	inline List_1_t3334734750 * get_region_0() const { return ___region_0; }
	inline List_1_t3334734750 ** get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(List_1_t3334734750 * value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier(&___region_0, value);
	}
};

struct RegionIterator_t3854740936_StaticFields
{
public:
	// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean> TriangleNet.Meshing.Iterators.RegionIterator::<>f__am$cache0
	Func_2_t3780598728 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(RegionIterator_t3854740936_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_2_t3780598728 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_2_t3780598728 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_2_t3780598728 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
