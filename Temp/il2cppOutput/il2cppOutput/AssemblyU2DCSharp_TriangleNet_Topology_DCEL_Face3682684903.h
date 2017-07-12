#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.DCEL.Face
struct Face_t3682684903;
// TriangleNet.Geometry.Point
struct Point_t124225758;
// TriangleNet.Topology.DCEL.HalfEdge
struct HalfEdge_t445267738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.DCEL.Face
struct  Face_t3682684903  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Topology.DCEL.Face::id
	int32_t ___id_1;
	// System.Int32 TriangleNet.Topology.DCEL.Face::mark
	int32_t ___mark_2;
	// TriangleNet.Geometry.Point TriangleNet.Topology.DCEL.Face::generator
	Point_t124225758 * ___generator_3;
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.Face::edge
	HalfEdge_t445267738 * ___edge_4;
	// System.Boolean TriangleNet.Topology.DCEL.Face::bounded
	bool ___bounded_5;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(Face_t3682684903, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_mark_2() { return static_cast<int32_t>(offsetof(Face_t3682684903, ___mark_2)); }
	inline int32_t get_mark_2() const { return ___mark_2; }
	inline int32_t* get_address_of_mark_2() { return &___mark_2; }
	inline void set_mark_2(int32_t value)
	{
		___mark_2 = value;
	}

	inline static int32_t get_offset_of_generator_3() { return static_cast<int32_t>(offsetof(Face_t3682684903, ___generator_3)); }
	inline Point_t124225758 * get_generator_3() const { return ___generator_3; }
	inline Point_t124225758 ** get_address_of_generator_3() { return &___generator_3; }
	inline void set_generator_3(Point_t124225758 * value)
	{
		___generator_3 = value;
		Il2CppCodeGenWriteBarrier(&___generator_3, value);
	}

	inline static int32_t get_offset_of_edge_4() { return static_cast<int32_t>(offsetof(Face_t3682684903, ___edge_4)); }
	inline HalfEdge_t445267738 * get_edge_4() const { return ___edge_4; }
	inline HalfEdge_t445267738 ** get_address_of_edge_4() { return &___edge_4; }
	inline void set_edge_4(HalfEdge_t445267738 * value)
	{
		___edge_4 = value;
		Il2CppCodeGenWriteBarrier(&___edge_4, value);
	}

	inline static int32_t get_offset_of_bounded_5() { return static_cast<int32_t>(offsetof(Face_t3682684903, ___bounded_5)); }
	inline bool get_bounded_5() const { return ___bounded_5; }
	inline bool* get_address_of_bounded_5() { return &___bounded_5; }
	inline void set_bounded_5(bool value)
	{
		___bounded_5 = value;
	}
};

struct Face_t3682684903_StaticFields
{
public:
	// TriangleNet.Topology.DCEL.Face TriangleNet.Topology.DCEL.Face::Empty
	Face_t3682684903 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Face_t3682684903_StaticFields, ___Empty_0)); }
	inline Face_t3682684903 * get_Empty_0() const { return ___Empty_0; }
	inline Face_t3682684903 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Face_t3682684903 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
