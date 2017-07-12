#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.Vertex>
struct ObjectPool_1_t426828871;
// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.HalfEdge>
struct ObjectPool_1_t1981369973;
// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.Face>
struct ObjectPool_1_t923819842;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Smoothing.VoronoiFactory
struct  VoronoiFactory_t3850675726  : public Il2CppObject
{
public:
	// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.Vertex> TriangleNet.Smoothing.VoronoiFactory::vertices
	ObjectPool_1_t426828871 * ___vertices_0;
	// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.HalfEdge> TriangleNet.Smoothing.VoronoiFactory::edges
	ObjectPool_1_t1981369973 * ___edges_1;
	// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.Face> TriangleNet.Smoothing.VoronoiFactory::faces
	ObjectPool_1_t923819842 * ___faces_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(VoronoiFactory_t3850675726, ___vertices_0)); }
	inline ObjectPool_1_t426828871 * get_vertices_0() const { return ___vertices_0; }
	inline ObjectPool_1_t426828871 ** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ObjectPool_1_t426828871 * value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_edges_1() { return static_cast<int32_t>(offsetof(VoronoiFactory_t3850675726, ___edges_1)); }
	inline ObjectPool_1_t1981369973 * get_edges_1() const { return ___edges_1; }
	inline ObjectPool_1_t1981369973 ** get_address_of_edges_1() { return &___edges_1; }
	inline void set_edges_1(ObjectPool_1_t1981369973 * value)
	{
		___edges_1 = value;
		Il2CppCodeGenWriteBarrier(&___edges_1, value);
	}

	inline static int32_t get_offset_of_faces_2() { return static_cast<int32_t>(offsetof(VoronoiFactory_t3850675726, ___faces_2)); }
	inline ObjectPool_1_t923819842 * get_faces_2() const { return ___faces_2; }
	inline ObjectPool_1_t923819842 ** get_address_of_faces_2() { return &___faces_2; }
	inline void set_faces_2(ObjectPool_1_t923819842 * value)
	{
		___faces_2 = value;
		Il2CppCodeGenWriteBarrier(&___faces_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
