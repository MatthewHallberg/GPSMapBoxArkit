#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.DCEL.Vertex
struct Vertex_t3185693932;
// TriangleNet.Topology.DCEL.Face
struct Face_t3682684903;
// TriangleNet.Topology.DCEL.HalfEdge
struct HalfEdge_t445267738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.DCEL.HalfEdge
struct  HalfEdge_t445267738  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Topology.DCEL.HalfEdge::id
	int32_t ___id_0;
	// System.Int32 TriangleNet.Topology.DCEL.HalfEdge::mark
	int32_t ___mark_1;
	// TriangleNet.Topology.DCEL.Vertex TriangleNet.Topology.DCEL.HalfEdge::origin
	Vertex_t3185693932 * ___origin_2;
	// TriangleNet.Topology.DCEL.Face TriangleNet.Topology.DCEL.HalfEdge::face
	Face_t3682684903 * ___face_3;
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.HalfEdge::twin
	HalfEdge_t445267738 * ___twin_4;
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.HalfEdge::next
	HalfEdge_t445267738 * ___next_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_mark_1() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___mark_1)); }
	inline int32_t get_mark_1() const { return ___mark_1; }
	inline int32_t* get_address_of_mark_1() { return &___mark_1; }
	inline void set_mark_1(int32_t value)
	{
		___mark_1 = value;
	}

	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___origin_2)); }
	inline Vertex_t3185693932 * get_origin_2() const { return ___origin_2; }
	inline Vertex_t3185693932 ** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(Vertex_t3185693932 * value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier(&___origin_2, value);
	}

	inline static int32_t get_offset_of_face_3() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___face_3)); }
	inline Face_t3682684903 * get_face_3() const { return ___face_3; }
	inline Face_t3682684903 ** get_address_of_face_3() { return &___face_3; }
	inline void set_face_3(Face_t3682684903 * value)
	{
		___face_3 = value;
		Il2CppCodeGenWriteBarrier(&___face_3, value);
	}

	inline static int32_t get_offset_of_twin_4() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___twin_4)); }
	inline HalfEdge_t445267738 * get_twin_4() const { return ___twin_4; }
	inline HalfEdge_t445267738 ** get_address_of_twin_4() { return &___twin_4; }
	inline void set_twin_4(HalfEdge_t445267738 * value)
	{
		___twin_4 = value;
		Il2CppCodeGenWriteBarrier(&___twin_4, value);
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(HalfEdge_t445267738, ___next_5)); }
	inline HalfEdge_t445267738 * get_next_5() const { return ___next_5; }
	inline HalfEdge_t445267738 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(HalfEdge_t445267738 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier(&___next_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
