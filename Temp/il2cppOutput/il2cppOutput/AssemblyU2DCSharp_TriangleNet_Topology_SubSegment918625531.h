#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t4046435698;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_t2879336287;
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_t2032945661;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.SubSegment
struct  SubSegment_t918625531  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Topology.SubSegment::hash
	int32_t ___hash_0;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.SubSegment::subsegs
	OsubU5BU5D_t4046435698* ___subsegs_1;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.SubSegment::vertices
	VertexU5BU5D_t2879336287* ___vertices_2;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.SubSegment::triangles
	OtriU5BU5D_t2032945661* ___triangles_3;
	// System.Int32 TriangleNet.Topology.SubSegment::boundary
	int32_t ___boundary_4;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(SubSegment_t918625531, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_subsegs_1() { return static_cast<int32_t>(offsetof(SubSegment_t918625531, ___subsegs_1)); }
	inline OsubU5BU5D_t4046435698* get_subsegs_1() const { return ___subsegs_1; }
	inline OsubU5BU5D_t4046435698** get_address_of_subsegs_1() { return &___subsegs_1; }
	inline void set_subsegs_1(OsubU5BU5D_t4046435698* value)
	{
		___subsegs_1 = value;
		Il2CppCodeGenWriteBarrier(&___subsegs_1, value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(SubSegment_t918625531, ___vertices_2)); }
	inline VertexU5BU5D_t2879336287* get_vertices_2() const { return ___vertices_2; }
	inline VertexU5BU5D_t2879336287** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(VertexU5BU5D_t2879336287* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_2, value);
	}

	inline static int32_t get_offset_of_triangles_3() { return static_cast<int32_t>(offsetof(SubSegment_t918625531, ___triangles_3)); }
	inline OtriU5BU5D_t2032945661* get_triangles_3() const { return ___triangles_3; }
	inline OtriU5BU5D_t2032945661** get_address_of_triangles_3() { return &___triangles_3; }
	inline void set_triangles_3(OtriU5BU5D_t2032945661* value)
	{
		___triangles_3 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_3, value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(SubSegment_t918625531, ___boundary_4)); }
	inline int32_t get_boundary_4() const { return ___boundary_4; }
	inline int32_t* get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(int32_t value)
	{
		___boundary_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
