#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.DCEL.HalfEdge
struct HalfEdge_t445267738;
// TriangleNet.Topology.DCEL.Vertex
struct Vertex_t3185693932;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0
struct  U3CEnumerateEdgesU3Ec__Iterator0_t179549716  : public Il2CppObject
{
public:
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::<edge>__0
	HalfEdge_t445267738 * ___U3CedgeU3E__0_0;
	// System.Int32 TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::<first>__0
	int32_t ___U3CfirstU3E__0_1;
	// TriangleNet.Topology.DCEL.Vertex TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::$this
	Vertex_t3185693932 * ___U24this_2;
	// TriangleNet.Topology.DCEL.HalfEdge TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::$current
	HalfEdge_t445267738 * ___U24current_3;
	// System.Boolean TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 TriangleNet.Topology.DCEL.Vertex/<EnumerateEdges>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CedgeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U3CedgeU3E__0_0)); }
	inline HalfEdge_t445267738 * get_U3CedgeU3E__0_0() const { return ___U3CedgeU3E__0_0; }
	inline HalfEdge_t445267738 ** get_address_of_U3CedgeU3E__0_0() { return &___U3CedgeU3E__0_0; }
	inline void set_U3CedgeU3E__0_0(HalfEdge_t445267738 * value)
	{
		___U3CedgeU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CedgeU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CfirstU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U3CfirstU3E__0_1)); }
	inline int32_t get_U3CfirstU3E__0_1() const { return ___U3CfirstU3E__0_1; }
	inline int32_t* get_address_of_U3CfirstU3E__0_1() { return &___U3CfirstU3E__0_1; }
	inline void set_U3CfirstU3E__0_1(int32_t value)
	{
		___U3CfirstU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U24this_2)); }
	inline Vertex_t3185693932 * get_U24this_2() const { return ___U24this_2; }
	inline Vertex_t3185693932 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Vertex_t3185693932 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U24current_3)); }
	inline HalfEdge_t445267738 * get_U24current_3() const { return ___U24current_3; }
	inline HalfEdge_t445267738 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(HalfEdge_t445267738 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CEnumerateEdgesU3Ec__Iterator0_t179549716, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
