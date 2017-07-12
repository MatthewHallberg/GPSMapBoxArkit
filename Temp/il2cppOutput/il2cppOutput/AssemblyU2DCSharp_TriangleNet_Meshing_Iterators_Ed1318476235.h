#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Osub2903723171.h"

// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>
struct IEnumerator_1_t1441137445;
// TriangleNet.Geometry.Edge
struct Edge_t805845059;
// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Iterators.EdgeIterator
struct  EdgeIterator_t1318476235  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.Meshing.Iterators.EdgeIterator::triangles
	Il2CppObject* ___triangles_0;
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Iterators.EdgeIterator::tri
	Otri_t174839988  ___tri_1;
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Iterators.EdgeIterator::neighbor
	Otri_t174839988  ___neighbor_2;
	// TriangleNet.Topology.Osub TriangleNet.Meshing.Iterators.EdgeIterator::sub
	Osub_t2903723171  ___sub_3;
	// TriangleNet.Geometry.Edge TriangleNet.Meshing.Iterators.EdgeIterator::current
	Edge_t805845059 * ___current_4;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Iterators.EdgeIterator::p1
	Vertex_t3430001018 * ___p1_5;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Iterators.EdgeIterator::p2
	Vertex_t3430001018 * ___p2_6;

public:
	inline static int32_t get_offset_of_triangles_0() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___triangles_0)); }
	inline Il2CppObject* get_triangles_0() const { return ___triangles_0; }
	inline Il2CppObject** get_address_of_triangles_0() { return &___triangles_0; }
	inline void set_triangles_0(Il2CppObject* value)
	{
		___triangles_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_0, value);
	}

	inline static int32_t get_offset_of_tri_1() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___tri_1)); }
	inline Otri_t174839988  get_tri_1() const { return ___tri_1; }
	inline Otri_t174839988 * get_address_of_tri_1() { return &___tri_1; }
	inline void set_tri_1(Otri_t174839988  value)
	{
		___tri_1 = value;
	}

	inline static int32_t get_offset_of_neighbor_2() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___neighbor_2)); }
	inline Otri_t174839988  get_neighbor_2() const { return ___neighbor_2; }
	inline Otri_t174839988 * get_address_of_neighbor_2() { return &___neighbor_2; }
	inline void set_neighbor_2(Otri_t174839988  value)
	{
		___neighbor_2 = value;
	}

	inline static int32_t get_offset_of_sub_3() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___sub_3)); }
	inline Osub_t2903723171  get_sub_3() const { return ___sub_3; }
	inline Osub_t2903723171 * get_address_of_sub_3() { return &___sub_3; }
	inline void set_sub_3(Osub_t2903723171  value)
	{
		___sub_3 = value;
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___current_4)); }
	inline Edge_t805845059 * get_current_4() const { return ___current_4; }
	inline Edge_t805845059 ** get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(Edge_t805845059 * value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier(&___current_4, value);
	}

	inline static int32_t get_offset_of_p1_5() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___p1_5)); }
	inline Vertex_t3430001018 * get_p1_5() const { return ___p1_5; }
	inline Vertex_t3430001018 ** get_address_of_p1_5() { return &___p1_5; }
	inline void set_p1_5(Vertex_t3430001018 * value)
	{
		___p1_5 = value;
		Il2CppCodeGenWriteBarrier(&___p1_5, value);
	}

	inline static int32_t get_offset_of_p2_6() { return static_cast<int32_t>(offsetof(EdgeIterator_t1318476235, ___p2_6)); }
	inline Vertex_t3430001018 * get_p2_6() const { return ___p2_6; }
	inline Vertex_t3430001018 ** get_address_of_p2_6() { return &___p2_6; }
	inline void set_p2_6(Vertex_t3430001018 * value)
	{
		___p2_6 = value;
		Il2CppCodeGenWriteBarrier(&___p2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
