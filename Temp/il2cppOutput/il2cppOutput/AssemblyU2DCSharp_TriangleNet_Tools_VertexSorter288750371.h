#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Random
struct Random_t1044426839;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_t2879336287;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.VertexSorter
struct  VertexSorter_t288750371  : public Il2CppObject
{
public:
	// System.Random TriangleNet.Tools.VertexSorter::rand
	Random_t1044426839 * ___rand_1;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Tools.VertexSorter::points
	VertexU5BU5D_t2879336287* ___points_2;

public:
	inline static int32_t get_offset_of_rand_1() { return static_cast<int32_t>(offsetof(VertexSorter_t288750371, ___rand_1)); }
	inline Random_t1044426839 * get_rand_1() const { return ___rand_1; }
	inline Random_t1044426839 ** get_address_of_rand_1() { return &___rand_1; }
	inline void set_rand_1(Random_t1044426839 * value)
	{
		___rand_1 = value;
		Il2CppCodeGenWriteBarrier(&___rand_1, value);
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(VertexSorter_t288750371, ___points_2)); }
	inline VertexU5BU5D_t2879336287* get_points_2() const { return ___points_2; }
	inline VertexU5BU5D_t2879336287** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(VertexU5BU5D_t2879336287* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier(&___points_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
