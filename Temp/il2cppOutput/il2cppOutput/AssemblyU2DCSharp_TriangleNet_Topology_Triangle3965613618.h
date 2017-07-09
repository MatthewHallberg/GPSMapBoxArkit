#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_t2032945661;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_t2879336287;
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t4046435698;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.Triangle
struct  Triangle_t3965613618  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Topology.Triangle::hash
	int32_t ___hash_0;
	// System.Int32 TriangleNet.Topology.Triangle::id
	int32_t ___id_1;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.Triangle::neighbors
	OtriU5BU5D_t2032945661* ___neighbors_2;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.Triangle::vertices
	VertexU5BU5D_t2879336287* ___vertices_3;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.Triangle::subsegs
	OsubU5BU5D_t4046435698* ___subsegs_4;
	// System.Int32 TriangleNet.Topology.Triangle::label
	int32_t ___label_5;
	// System.Double TriangleNet.Topology.Triangle::area
	double ___area_6;
	// System.Boolean TriangleNet.Topology.Triangle::infected
	bool ___infected_7;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_neighbors_2() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___neighbors_2)); }
	inline OtriU5BU5D_t2032945661* get_neighbors_2() const { return ___neighbors_2; }
	inline OtriU5BU5D_t2032945661** get_address_of_neighbors_2() { return &___neighbors_2; }
	inline void set_neighbors_2(OtriU5BU5D_t2032945661* value)
	{
		___neighbors_2 = value;
		Il2CppCodeGenWriteBarrier(&___neighbors_2, value);
	}

	inline static int32_t get_offset_of_vertices_3() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___vertices_3)); }
	inline VertexU5BU5D_t2879336287* get_vertices_3() const { return ___vertices_3; }
	inline VertexU5BU5D_t2879336287** get_address_of_vertices_3() { return &___vertices_3; }
	inline void set_vertices_3(VertexU5BU5D_t2879336287* value)
	{
		___vertices_3 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_3, value);
	}

	inline static int32_t get_offset_of_subsegs_4() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___subsegs_4)); }
	inline OsubU5BU5D_t4046435698* get_subsegs_4() const { return ___subsegs_4; }
	inline OsubU5BU5D_t4046435698** get_address_of_subsegs_4() { return &___subsegs_4; }
	inline void set_subsegs_4(OsubU5BU5D_t4046435698* value)
	{
		___subsegs_4 = value;
		Il2CppCodeGenWriteBarrier(&___subsegs_4, value);
	}

	inline static int32_t get_offset_of_label_5() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___label_5)); }
	inline int32_t get_label_5() const { return ___label_5; }
	inline int32_t* get_address_of_label_5() { return &___label_5; }
	inline void set_label_5(int32_t value)
	{
		___label_5 = value;
	}

	inline static int32_t get_offset_of_area_6() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___area_6)); }
	inline double get_area_6() const { return ___area_6; }
	inline double* get_address_of_area_6() { return &___area_6; }
	inline void set_area_6(double value)
	{
		___area_6 = value;
	}

	inline static int32_t get_offset_of_infected_7() { return static_cast<int32_t>(offsetof(Triangle_t3965613618, ___infected_7)); }
	inline bool get_infected_7() const { return ___infected_7; }
	inline bool* get_address_of_infected_7() { return &___infected_7; }
	inline void set_infected_7(bool value)
	{
		___infected_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
