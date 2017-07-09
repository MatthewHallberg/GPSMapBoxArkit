#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]>
struct Dictionary_2_t1017145979;
// System.Func`2<System.UInt32,System.Int32>
struct Func_2_t2947651712;
// System.Func`3<System.Int32,System.Int32,System.Boolean>
struct Func_3_t1664847002;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.VectorTileReader
struct  VectorTileReader_t3775647326  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Byte[]> Mapbox.VectorTile.VectorTileReader::_Layers
	Dictionary_2_t1017145979 * ____Layers_0;
	// System.Boolean Mapbox.VectorTile.VectorTileReader::_Validate
	bool ____Validate_1;

public:
	inline static int32_t get_offset_of__Layers_0() { return static_cast<int32_t>(offsetof(VectorTileReader_t3775647326, ____Layers_0)); }
	inline Dictionary_2_t1017145979 * get__Layers_0() const { return ____Layers_0; }
	inline Dictionary_2_t1017145979 ** get_address_of__Layers_0() { return &____Layers_0; }
	inline void set__Layers_0(Dictionary_2_t1017145979 * value)
	{
		____Layers_0 = value;
		Il2CppCodeGenWriteBarrier(&____Layers_0, value);
	}

	inline static int32_t get_offset_of__Validate_1() { return static_cast<int32_t>(offsetof(VectorTileReader_t3775647326, ____Validate_1)); }
	inline bool get__Validate_1() const { return ____Validate_1; }
	inline bool* get_address_of__Validate_1() { return &____Validate_1; }
	inline void set__Validate_1(bool value)
	{
		____Validate_1 = value;
	}
};

struct VectorTileReader_t3775647326_StaticFields
{
public:
	// System.Func`2<System.UInt32,System.Int32> Mapbox.VectorTile.VectorTileReader::<>f__am$cache0
	Func_2_t2947651712 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`3<System.Int32,System.Int32,System.Boolean> Mapbox.VectorTile.VectorTileReader::<>f__am$cache1
	Func_3_t1664847002 * ___U3CU3Ef__amU24cache1_3;
	// System.Func`3<System.Int32,System.Int32,System.Boolean> Mapbox.VectorTile.VectorTileReader::<>f__am$cache2
	Func_3_t1664847002 * ___U3CU3Ef__amU24cache2_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(VectorTileReader_t3775647326_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t2947651712 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t2947651712 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t2947651712 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(VectorTileReader_t3775647326_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Func_3_t1664847002 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Func_3_t1664847002 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Func_3_t1664847002 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_4() { return static_cast<int32_t>(offsetof(VectorTileReader_t3775647326_StaticFields, ___U3CU3Ef__amU24cache2_4)); }
	inline Func_3_t1664847002 * get_U3CU3Ef__amU24cache2_4() const { return ___U3CU3Ef__amU24cache2_4; }
	inline Func_3_t1664847002 ** get_address_of_U3CU3Ef__amU24cache2_4() { return &___U3CU3Ef__amU24cache2_4; }
	inline void set_U3CU3Ef__amU24cache2_4(Func_3_t1664847002 * value)
	{
		___U3CU3Ef__amU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
