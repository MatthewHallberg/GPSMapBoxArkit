#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.Vertex>
struct List_1_t2554815064;
// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.HalfEdge>
struct List_1_t4109356166;
// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.Face>
struct List_1_t3051806035;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.DCEL.DcelMesh
struct  DcelMesh_t3742056343  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.Vertex> TriangleNet.Topology.DCEL.DcelMesh::vertices
	List_1_t2554815064 * ___vertices_0;
	// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.HalfEdge> TriangleNet.Topology.DCEL.DcelMesh::edges
	List_1_t4109356166 * ___edges_1;
	// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.Face> TriangleNet.Topology.DCEL.DcelMesh::faces
	List_1_t3051806035 * ___faces_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(DcelMesh_t3742056343, ___vertices_0)); }
	inline List_1_t2554815064 * get_vertices_0() const { return ___vertices_0; }
	inline List_1_t2554815064 ** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(List_1_t2554815064 * value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_edges_1() { return static_cast<int32_t>(offsetof(DcelMesh_t3742056343, ___edges_1)); }
	inline List_1_t4109356166 * get_edges_1() const { return ___edges_1; }
	inline List_1_t4109356166 ** get_address_of_edges_1() { return &___edges_1; }
	inline void set_edges_1(List_1_t4109356166 * value)
	{
		___edges_1 = value;
		Il2CppCodeGenWriteBarrier(&___edges_1, value);
	}

	inline static int32_t get_offset_of_faces_2() { return static_cast<int32_t>(offsetof(DcelMesh_t3742056343, ___faces_2)); }
	inline List_1_t3051806035 * get_faces_2() const { return ___faces_2; }
	inline List_1_t3051806035 ** get_address_of_faces_2() { return &___faces_2; }
	inline void set_faces_2(List_1_t3051806035 * value)
	{
		___faces_2 = value;
		Il2CppCodeGenWriteBarrier(&___faces_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
