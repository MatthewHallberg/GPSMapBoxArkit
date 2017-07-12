#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TriangleNet_Geometry_Point124225758.h"

// TriangleNet.Topology.DCEL.HalfEdge
struct HalfEdge_t445267738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.DCEL.Vertex
struct  Vertex_t3185693932  : public Point_t124225758
{
public:
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.Vertex::leaving
	HalfEdge_t445267738 * ___leaving_4;

public:
	inline static int32_t get_offset_of_leaving_4() { return static_cast<int32_t>(offsetof(Vertex_t3185693932, ___leaving_4)); }
	inline HalfEdge_t445267738 * get_leaving_4() const { return ___leaving_4; }
	inline HalfEdge_t445267738 ** get_address_of_leaving_4() { return &___leaving_4; }
	inline void set_leaving_4(HalfEdge_t445267738 * value)
	{
		___leaving_4 = value;
		Il2CppCodeGenWriteBarrier(&___leaving_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
