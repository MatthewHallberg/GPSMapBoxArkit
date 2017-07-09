#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.AdjacencyMatrix
struct  AdjacencyMatrix_t4162004925  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Tools.AdjacencyMatrix::nnz
	int32_t ___nnz_0;
	// System.Int32[] TriangleNet.Tools.AdjacencyMatrix::pcol
	Int32U5BU5D_t3030399641* ___pcol_1;
	// System.Int32[] TriangleNet.Tools.AdjacencyMatrix::irow
	Int32U5BU5D_t3030399641* ___irow_2;
	// System.Int32 TriangleNet.Tools.AdjacencyMatrix::N
	int32_t ___N_3;

public:
	inline static int32_t get_offset_of_nnz_0() { return static_cast<int32_t>(offsetof(AdjacencyMatrix_t4162004925, ___nnz_0)); }
	inline int32_t get_nnz_0() const { return ___nnz_0; }
	inline int32_t* get_address_of_nnz_0() { return &___nnz_0; }
	inline void set_nnz_0(int32_t value)
	{
		___nnz_0 = value;
	}

	inline static int32_t get_offset_of_pcol_1() { return static_cast<int32_t>(offsetof(AdjacencyMatrix_t4162004925, ___pcol_1)); }
	inline Int32U5BU5D_t3030399641* get_pcol_1() const { return ___pcol_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_pcol_1() { return &___pcol_1; }
	inline void set_pcol_1(Int32U5BU5D_t3030399641* value)
	{
		___pcol_1 = value;
		Il2CppCodeGenWriteBarrier(&___pcol_1, value);
	}

	inline static int32_t get_offset_of_irow_2() { return static_cast<int32_t>(offsetof(AdjacencyMatrix_t4162004925, ___irow_2)); }
	inline Int32U5BU5D_t3030399641* get_irow_2() const { return ___irow_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_irow_2() { return &___irow_2; }
	inline void set_irow_2(Int32U5BU5D_t3030399641* value)
	{
		___irow_2 = value;
		Il2CppCodeGenWriteBarrier(&___irow_2, value);
	}

	inline static int32_t get_offset_of_N_3() { return static_cast<int32_t>(offsetof(AdjacencyMatrix_t4162004925, ___N_3)); }
	inline int32_t get_N_3() const { return ___N_3; }
	inline int32_t* get_address_of_N_3() { return &___N_3; }
	inline void set_N_3(int32_t value)
	{
		___N_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
