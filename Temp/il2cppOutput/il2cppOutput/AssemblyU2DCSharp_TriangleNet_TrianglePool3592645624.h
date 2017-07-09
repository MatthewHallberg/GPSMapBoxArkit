#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t454219838;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_t758374476;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.TrianglePool
struct  TrianglePool_t3592645624  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.TrianglePool::size
	int32_t ___size_1;
	// System.Int32 TriangleNet.TrianglePool::count
	int32_t ___count_2;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool::pool
	TriangleU5BU5DU5BU5D_t454219838* ___pool_3;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::stack
	Stack_1_t758374476 * ___stack_4;

public:
	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TrianglePool_t3592645624, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(TrianglePool_t3592645624, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_pool_3() { return static_cast<int32_t>(offsetof(TrianglePool_t3592645624, ___pool_3)); }
	inline TriangleU5BU5DU5BU5D_t454219838* get_pool_3() const { return ___pool_3; }
	inline TriangleU5BU5DU5BU5D_t454219838** get_address_of_pool_3() { return &___pool_3; }
	inline void set_pool_3(TriangleU5BU5DU5BU5D_t454219838* value)
	{
		___pool_3 = value;
		Il2CppCodeGenWriteBarrier(&___pool_3, value);
	}

	inline static int32_t get_offset_of_stack_4() { return static_cast<int32_t>(offsetof(TrianglePool_t3592645624, ___stack_4)); }
	inline Stack_1_t758374476 * get_stack_4() const { return ___stack_4; }
	inline Stack_1_t758374476 ** get_address_of_stack_4() { return &___stack_4; }
	inline void set_stack_4(Stack_1_t758374476 * value)
	{
		___stack_4 = value;
		Il2CppCodeGenWriteBarrier(&___stack_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
