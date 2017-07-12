#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TriangleNet.Topology.Triangle
struct Triangle_t3965613618;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.Otri
struct  Otri_t174839988 
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Topology.Otri::tri
	Triangle_t3965613618 * ___tri_0;
	// System.Int32 TriangleNet.Topology.Otri::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_tri_0() { return static_cast<int32_t>(offsetof(Otri_t174839988, ___tri_0)); }
	inline Triangle_t3965613618 * get_tri_0() const { return ___tri_0; }
	inline Triangle_t3965613618 ** get_address_of_tri_0() { return &___tri_0; }
	inline void set_tri_0(Triangle_t3965613618 * value)
	{
		___tri_0 = value;
		Il2CppCodeGenWriteBarrier(&___tri_0, value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Otri_t174839988, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

struct Otri_t174839988_StaticFields
{
public:
	// System.Int32[] TriangleNet.Topology.Otri::plus1Mod3
	Int32U5BU5D_t3030399641* ___plus1Mod3_2;
	// System.Int32[] TriangleNet.Topology.Otri::minus1Mod3
	Int32U5BU5D_t3030399641* ___minus1Mod3_3;

public:
	inline static int32_t get_offset_of_plus1Mod3_2() { return static_cast<int32_t>(offsetof(Otri_t174839988_StaticFields, ___plus1Mod3_2)); }
	inline Int32U5BU5D_t3030399641* get_plus1Mod3_2() const { return ___plus1Mod3_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_plus1Mod3_2() { return &___plus1Mod3_2; }
	inline void set_plus1Mod3_2(Int32U5BU5D_t3030399641* value)
	{
		___plus1Mod3_2 = value;
		Il2CppCodeGenWriteBarrier(&___plus1Mod3_2, value);
	}

	inline static int32_t get_offset_of_minus1Mod3_3() { return static_cast<int32_t>(offsetof(Otri_t174839988_StaticFields, ___minus1Mod3_3)); }
	inline Int32U5BU5D_t3030399641* get_minus1Mod3_3() const { return ___minus1Mod3_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_minus1Mod3_3() { return &___minus1Mod3_3; }
	inline void set_minus1Mod3_3(Int32U5BU5D_t3030399641* value)
	{
		___minus1Mod3_3 = value;
		Il2CppCodeGenWriteBarrier(&___minus1Mod3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TriangleNet.Topology.Otri
struct Otri_t174839988_marshaled_pinvoke
{
	Triangle_t3965613618 * ___tri_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Otri
struct Otri_t174839988_marshaled_com
{
	Triangle_t3965613618 * ___tri_0;
	int32_t ___orient_1;
};
