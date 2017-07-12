#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Tools.AdjacencyMatrix
struct AdjacencyMatrix_t4162004925;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.CuthillMcKee
struct  CuthillMcKee_t1912214488  : public Il2CppObject
{
public:
	// TriangleNet.Tools.AdjacencyMatrix TriangleNet.Tools.CuthillMcKee::matrix
	AdjacencyMatrix_t4162004925 * ___matrix_0;

public:
	inline static int32_t get_offset_of_matrix_0() { return static_cast<int32_t>(offsetof(CuthillMcKee_t1912214488, ___matrix_0)); }
	inline AdjacencyMatrix_t4162004925 * get_matrix_0() const { return ___matrix_0; }
	inline AdjacencyMatrix_t4162004925 ** get_address_of_matrix_0() { return &___matrix_0; }
	inline void set_matrix_0(AdjacencyMatrix_t4162004925 * value)
	{
		___matrix_0 = value;
		Il2CppCodeGenWriteBarrier(&___matrix_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
