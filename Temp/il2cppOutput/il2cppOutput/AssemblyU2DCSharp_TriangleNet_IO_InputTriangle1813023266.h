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

// TriangleNet.IO.InputTriangle
struct  InputTriangle_t1813023266  : public Il2CppObject
{
public:
	// System.Int32[] TriangleNet.IO.InputTriangle::vertices
	Int32U5BU5D_t3030399641* ___vertices_0;
	// System.Int32 TriangleNet.IO.InputTriangle::label
	int32_t ___label_1;
	// System.Double TriangleNet.IO.InputTriangle::area
	double ___area_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(InputTriangle_t1813023266, ___vertices_0)); }
	inline Int32U5BU5D_t3030399641* get_vertices_0() const { return ___vertices_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Int32U5BU5D_t3030399641* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_label_1() { return static_cast<int32_t>(offsetof(InputTriangle_t1813023266, ___label_1)); }
	inline int32_t get_label_1() const { return ___label_1; }
	inline int32_t* get_address_of_label_1() { return &___label_1; }
	inline void set_label_1(int32_t value)
	{
		___label_1 = value;
	}

	inline static int32_t get_offset_of_area_2() { return static_cast<int32_t>(offsetof(InputTriangle_t1813023266, ___area_2)); }
	inline double get_area_2() const { return ___area_2; }
	inline double* get_address_of_area_2() { return &___area_2; }
	inline void set_area_2(double value)
	{
		___area_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
