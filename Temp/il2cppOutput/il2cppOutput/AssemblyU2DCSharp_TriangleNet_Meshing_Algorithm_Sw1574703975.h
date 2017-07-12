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

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;
// TriangleNet.Meshing.Algorithm.SweepLine/SplayNode
struct SplayNode_t1574703975;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.SweepLine/SplayNode
struct  SplayNode_t1574703975  : public Il2CppObject
{
public:
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Algorithm.SweepLine/SplayNode::keyedge
	Otri_t174839988  ___keyedge_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Algorithm.SweepLine/SplayNode::keydest
	Vertex_t3430001018 * ___keydest_1;
	// TriangleNet.Meshing.Algorithm.SweepLine/SplayNode TriangleNet.Meshing.Algorithm.SweepLine/SplayNode::lchild
	SplayNode_t1574703975 * ___lchild_2;
	// TriangleNet.Meshing.Algorithm.SweepLine/SplayNode TriangleNet.Meshing.Algorithm.SweepLine/SplayNode::rchild
	SplayNode_t1574703975 * ___rchild_3;

public:
	inline static int32_t get_offset_of_keyedge_0() { return static_cast<int32_t>(offsetof(SplayNode_t1574703975, ___keyedge_0)); }
	inline Otri_t174839988  get_keyedge_0() const { return ___keyedge_0; }
	inline Otri_t174839988 * get_address_of_keyedge_0() { return &___keyedge_0; }
	inline void set_keyedge_0(Otri_t174839988  value)
	{
		___keyedge_0 = value;
	}

	inline static int32_t get_offset_of_keydest_1() { return static_cast<int32_t>(offsetof(SplayNode_t1574703975, ___keydest_1)); }
	inline Vertex_t3430001018 * get_keydest_1() const { return ___keydest_1; }
	inline Vertex_t3430001018 ** get_address_of_keydest_1() { return &___keydest_1; }
	inline void set_keydest_1(Vertex_t3430001018 * value)
	{
		___keydest_1 = value;
		Il2CppCodeGenWriteBarrier(&___keydest_1, value);
	}

	inline static int32_t get_offset_of_lchild_2() { return static_cast<int32_t>(offsetof(SplayNode_t1574703975, ___lchild_2)); }
	inline SplayNode_t1574703975 * get_lchild_2() const { return ___lchild_2; }
	inline SplayNode_t1574703975 ** get_address_of_lchild_2() { return &___lchild_2; }
	inline void set_lchild_2(SplayNode_t1574703975 * value)
	{
		___lchild_2 = value;
		Il2CppCodeGenWriteBarrier(&___lchild_2, value);
	}

	inline static int32_t get_offset_of_rchild_3() { return static_cast<int32_t>(offsetof(SplayNode_t1574703975, ___rchild_3)); }
	inline SplayNode_t1574703975 * get_rchild_3() const { return ___rchild_3; }
	inline SplayNode_t1574703975 ** get_address_of_rchild_3() { return &___rchild_3; }
	inline void set_rchild_3(SplayNode_t1574703975 * value)
	{
		___rchild_3 = value;
		Il2CppCodeGenWriteBarrier(&___rchild_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
