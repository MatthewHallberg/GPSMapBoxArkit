#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Tools.TriangleQuadTree/QuadNode
struct QuadNode_t1733368551;
// TriangleNet.Geometry.ITriangle[]
struct ITriangleU5BU5D_t4077191106;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.TriangleQuadTree
struct  TriangleQuadTree_t2624374923  : public Il2CppObject
{
public:
	// TriangleNet.Tools.TriangleQuadTree/QuadNode TriangleNet.Tools.TriangleQuadTree::root
	QuadNode_t1733368551 * ___root_0;
	// TriangleNet.Geometry.ITriangle[] TriangleNet.Tools.TriangleQuadTree::triangles
	ITriangleU5BU5D_t4077191106* ___triangles_1;
	// System.Int32 TriangleNet.Tools.TriangleQuadTree::sizeBound
	int32_t ___sizeBound_2;
	// System.Int32 TriangleNet.Tools.TriangleQuadTree::maxDepth
	int32_t ___maxDepth_3;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(TriangleQuadTree_t2624374923, ___root_0)); }
	inline QuadNode_t1733368551 * get_root_0() const { return ___root_0; }
	inline QuadNode_t1733368551 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(QuadNode_t1733368551 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier(&___root_0, value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(TriangleQuadTree_t2624374923, ___triangles_1)); }
	inline ITriangleU5BU5D_t4077191106* get_triangles_1() const { return ___triangles_1; }
	inline ITriangleU5BU5D_t4077191106** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(ITriangleU5BU5D_t4077191106* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_1, value);
	}

	inline static int32_t get_offset_of_sizeBound_2() { return static_cast<int32_t>(offsetof(TriangleQuadTree_t2624374923, ___sizeBound_2)); }
	inline int32_t get_sizeBound_2() const { return ___sizeBound_2; }
	inline int32_t* get_address_of_sizeBound_2() { return &___sizeBound_2; }
	inline void set_sizeBound_2(int32_t value)
	{
		___sizeBound_2 = value;
	}

	inline static int32_t get_offset_of_maxDepth_3() { return static_cast<int32_t>(offsetof(TriangleQuadTree_t2624374923, ___maxDepth_3)); }
	inline int32_t get_maxDepth_3() const { return ___maxDepth_3; }
	inline int32_t* get_address_of_maxDepth_3() { return &___maxDepth_3; }
	inline void set_maxDepth_3(int32_t value)
	{
		___maxDepth_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
