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
// TriangleNet.IPredicates
struct IPredicates_t3101063573;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_t2879336287;
// TriangleNet.Mesh
struct Mesh_t1414352559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.Dwyer
struct  Dwyer_t3557224013  : public Il2CppObject
{
public:
	// System.Random TriangleNet.Meshing.Algorithm.Dwyer::rand
	Random_t1044426839 * ___rand_0;
	// TriangleNet.IPredicates TriangleNet.Meshing.Algorithm.Dwyer::predicates
	Il2CppObject * ___predicates_1;
	// System.Boolean TriangleNet.Meshing.Algorithm.Dwyer::UseDwyer
	bool ___UseDwyer_2;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Meshing.Algorithm.Dwyer::sortarray
	VertexU5BU5D_t2879336287* ___sortarray_3;
	// TriangleNet.Mesh TriangleNet.Meshing.Algorithm.Dwyer::mesh
	Mesh_t1414352559 * ___mesh_4;

public:
	inline static int32_t get_offset_of_rand_0() { return static_cast<int32_t>(offsetof(Dwyer_t3557224013, ___rand_0)); }
	inline Random_t1044426839 * get_rand_0() const { return ___rand_0; }
	inline Random_t1044426839 ** get_address_of_rand_0() { return &___rand_0; }
	inline void set_rand_0(Random_t1044426839 * value)
	{
		___rand_0 = value;
		Il2CppCodeGenWriteBarrier(&___rand_0, value);
	}

	inline static int32_t get_offset_of_predicates_1() { return static_cast<int32_t>(offsetof(Dwyer_t3557224013, ___predicates_1)); }
	inline Il2CppObject * get_predicates_1() const { return ___predicates_1; }
	inline Il2CppObject ** get_address_of_predicates_1() { return &___predicates_1; }
	inline void set_predicates_1(Il2CppObject * value)
	{
		___predicates_1 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_1, value);
	}

	inline static int32_t get_offset_of_UseDwyer_2() { return static_cast<int32_t>(offsetof(Dwyer_t3557224013, ___UseDwyer_2)); }
	inline bool get_UseDwyer_2() const { return ___UseDwyer_2; }
	inline bool* get_address_of_UseDwyer_2() { return &___UseDwyer_2; }
	inline void set_UseDwyer_2(bool value)
	{
		___UseDwyer_2 = value;
	}

	inline static int32_t get_offset_of_sortarray_3() { return static_cast<int32_t>(offsetof(Dwyer_t3557224013, ___sortarray_3)); }
	inline VertexU5BU5D_t2879336287* get_sortarray_3() const { return ___sortarray_3; }
	inline VertexU5BU5D_t2879336287** get_address_of_sortarray_3() { return &___sortarray_3; }
	inline void set_sortarray_3(VertexU5BU5D_t2879336287* value)
	{
		___sortarray_3 = value;
		Il2CppCodeGenWriteBarrier(&___sortarray_3, value);
	}

	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(Dwyer_t3557224013, ___mesh_4)); }
	inline Mesh_t1414352559 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t1414352559 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t1414352559 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
