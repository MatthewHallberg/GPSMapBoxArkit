#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Meshing.Iterators.EdgeIterator
struct EdgeIterator_t1318476235;
// TriangleNet.Mesh
struct Mesh_t1414352559;
// TriangleNet.Geometry.Edge
struct Edge_t805845059;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Mesh/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t1210610214  : public Il2CppObject
{
public:
	// TriangleNet.Meshing.Iterators.EdgeIterator TriangleNet.Mesh/<>c__Iterator0::<e>__0
	EdgeIterator_t1318476235 * ___U3CeU3E__0_0;
	// TriangleNet.Mesh TriangleNet.Mesh/<>c__Iterator0::$this
	Mesh_t1414352559 * ___U24this_1;
	// TriangleNet.Geometry.Edge TriangleNet.Mesh/<>c__Iterator0::$current
	Edge_t805845059 * ___U24current_2;
	// System.Boolean TriangleNet.Mesh/<>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 TriangleNet.Mesh/<>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1210610214, ___U3CeU3E__0_0)); }
	inline EdgeIterator_t1318476235 * get_U3CeU3E__0_0() const { return ___U3CeU3E__0_0; }
	inline EdgeIterator_t1318476235 ** get_address_of_U3CeU3E__0_0() { return &___U3CeU3E__0_0; }
	inline void set_U3CeU3E__0_0(EdgeIterator_t1318476235 * value)
	{
		___U3CeU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1210610214, ___U24this_1)); }
	inline Mesh_t1414352559 * get_U24this_1() const { return ___U24this_1; }
	inline Mesh_t1414352559 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Mesh_t1414352559 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1210610214, ___U24current_2)); }
	inline Edge_t805845059 * get_U24current_2() const { return ___U24current_2; }
	inline Edge_t805845059 ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Edge_t805845059 * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1210610214, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1210610214, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
