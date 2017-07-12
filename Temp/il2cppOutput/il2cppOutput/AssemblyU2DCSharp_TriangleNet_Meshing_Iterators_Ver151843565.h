#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera3373658090.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;
// TriangleNet.Meshing.Iterators.VertexCirculator
struct VertexCirculator_t835702156;
// TriangleNet.Geometry.ITriangle
struct ITriangle_t3231659155;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1
struct  U3CEnumerateTrianglesU3Ec__Iterator1_t151843565  : public Il2CppObject
{
public:
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::vertex
	Vertex_t3430001018 * ___vertex_0;
	// System.Collections.Generic.List`1/Enumerator<TriangleNet.Topology.Otri> TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::$locvar0
	Enumerator_t3373658090  ___U24locvar0_1;
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::<item>__1
	Otri_t174839988  ___U3CitemU3E__1_2;
	// TriangleNet.Meshing.Iterators.VertexCirculator TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::$this
	VertexCirculator_t835702156 * ___U24this_3;
	// TriangleNet.Geometry.ITriangle TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::$disposing
	bool ___U24disposing_5;
	// System.Int32 TriangleNet.Meshing.Iterators.VertexCirculator/<EnumerateTriangles>c__Iterator1::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_vertex_0() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___vertex_0)); }
	inline Vertex_t3430001018 * get_vertex_0() const { return ___vertex_0; }
	inline Vertex_t3430001018 ** get_address_of_vertex_0() { return &___vertex_0; }
	inline void set_vertex_0(Vertex_t3430001018 * value)
	{
		___vertex_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertex_0, value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U24locvar0_1)); }
	inline Enumerator_t3373658090  get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline Enumerator_t3373658090 * get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(Enumerator_t3373658090  value)
	{
		___U24locvar0_1 = value;
	}

	inline static int32_t get_offset_of_U3CitemU3E__1_2() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U3CitemU3E__1_2)); }
	inline Otri_t174839988  get_U3CitemU3E__1_2() const { return ___U3CitemU3E__1_2; }
	inline Otri_t174839988 * get_address_of_U3CitemU3E__1_2() { return &___U3CitemU3E__1_2; }
	inline void set_U3CitemU3E__1_2(Otri_t174839988  value)
	{
		___U3CitemU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U24this_3)); }
	inline VertexCirculator_t835702156 * get_U24this_3() const { return ___U24this_3; }
	inline VertexCirculator_t835702156 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(VertexCirculator_t835702156 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CEnumerateTrianglesU3Ec__Iterator1_t151843565, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
