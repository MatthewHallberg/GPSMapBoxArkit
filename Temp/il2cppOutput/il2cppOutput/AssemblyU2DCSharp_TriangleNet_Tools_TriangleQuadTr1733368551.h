#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// TriangleNet.Geometry.Rectangle
struct Rectangle_t3983541573;
// TriangleNet.Geometry.Point
struct Point_t124225758;
// TriangleNet.Tools.TriangleQuadTree
struct TriangleQuadTree_t2624374923;
// TriangleNet.Tools.TriangleQuadTree/QuadNode[]
struct QuadNodeU5BU5D_t1056846238;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.TriangleQuadTree/QuadNode
struct  QuadNode_t1733368551  : public Il2CppObject
{
public:
	// TriangleNet.Geometry.Rectangle TriangleNet.Tools.TriangleQuadTree/QuadNode::bounds
	Rectangle_t3983541573 * ___bounds_6;
	// TriangleNet.Geometry.Point TriangleNet.Tools.TriangleQuadTree/QuadNode::pivot
	Point_t124225758 * ___pivot_7;
	// TriangleNet.Tools.TriangleQuadTree TriangleNet.Tools.TriangleQuadTree/QuadNode::tree
	TriangleQuadTree_t2624374923 * ___tree_8;
	// TriangleNet.Tools.TriangleQuadTree/QuadNode[] TriangleNet.Tools.TriangleQuadTree/QuadNode::regions
	QuadNodeU5BU5D_t1056846238* ___regions_9;
	// System.Collections.Generic.List`1<System.Int32> TriangleNet.Tools.TriangleQuadTree/QuadNode::triangles
	List_1_t1440998580 * ___triangles_10;
	// System.Byte TriangleNet.Tools.TriangleQuadTree/QuadNode::bitRegions
	uint8_t ___bitRegions_11;

public:
	inline static int32_t get_offset_of_bounds_6() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___bounds_6)); }
	inline Rectangle_t3983541573 * get_bounds_6() const { return ___bounds_6; }
	inline Rectangle_t3983541573 ** get_address_of_bounds_6() { return &___bounds_6; }
	inline void set_bounds_6(Rectangle_t3983541573 * value)
	{
		___bounds_6 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_6, value);
	}

	inline static int32_t get_offset_of_pivot_7() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___pivot_7)); }
	inline Point_t124225758 * get_pivot_7() const { return ___pivot_7; }
	inline Point_t124225758 ** get_address_of_pivot_7() { return &___pivot_7; }
	inline void set_pivot_7(Point_t124225758 * value)
	{
		___pivot_7 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_7, value);
	}

	inline static int32_t get_offset_of_tree_8() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___tree_8)); }
	inline TriangleQuadTree_t2624374923 * get_tree_8() const { return ___tree_8; }
	inline TriangleQuadTree_t2624374923 ** get_address_of_tree_8() { return &___tree_8; }
	inline void set_tree_8(TriangleQuadTree_t2624374923 * value)
	{
		___tree_8 = value;
		Il2CppCodeGenWriteBarrier(&___tree_8, value);
	}

	inline static int32_t get_offset_of_regions_9() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___regions_9)); }
	inline QuadNodeU5BU5D_t1056846238* get_regions_9() const { return ___regions_9; }
	inline QuadNodeU5BU5D_t1056846238** get_address_of_regions_9() { return &___regions_9; }
	inline void set_regions_9(QuadNodeU5BU5D_t1056846238* value)
	{
		___regions_9 = value;
		Il2CppCodeGenWriteBarrier(&___regions_9, value);
	}

	inline static int32_t get_offset_of_triangles_10() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___triangles_10)); }
	inline List_1_t1440998580 * get_triangles_10() const { return ___triangles_10; }
	inline List_1_t1440998580 ** get_address_of_triangles_10() { return &___triangles_10; }
	inline void set_triangles_10(List_1_t1440998580 * value)
	{
		___triangles_10 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_10, value);
	}

	inline static int32_t get_offset_of_bitRegions_11() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551, ___bitRegions_11)); }
	inline uint8_t get_bitRegions_11() const { return ___bitRegions_11; }
	inline uint8_t* get_address_of_bitRegions_11() { return &___bitRegions_11; }
	inline void set_bitRegions_11(uint8_t value)
	{
		___bitRegions_11 = value;
	}
};

struct QuadNode_t1733368551_StaticFields
{
public:
	// System.Byte[] TriangleNet.Tools.TriangleQuadTree/QuadNode::BITVECTOR
	ByteU5BU5D_t3397334013* ___BITVECTOR_5;

public:
	inline static int32_t get_offset_of_BITVECTOR_5() { return static_cast<int32_t>(offsetof(QuadNode_t1733368551_StaticFields, ___BITVECTOR_5)); }
	inline ByteU5BU5D_t3397334013* get_BITVECTOR_5() const { return ___BITVECTOR_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_BITVECTOR_5() { return &___BITVECTOR_5; }
	inline void set_BITVECTOR_5(ByteU5BU5D_t3397334013* value)
	{
		___BITVECTOR_5 = value;
		Il2CppCodeGenWriteBarrier(&___BITVECTOR_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
