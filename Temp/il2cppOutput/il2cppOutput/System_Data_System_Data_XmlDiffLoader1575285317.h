#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDiffLoader
struct  XmlDiffLoader_t1575285317  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDiffLoader::DSet
	DataSet_t3097402844 * ___DSet_0;
	// System.Data.DataTable System.Data.XmlDiffLoader::table
	DataTable_t3267612424 * ___table_1;
	// System.Collections.Hashtable System.Data.XmlDiffLoader::DiffGrRows
	Hashtable_t909839986 * ___DiffGrRows_2;
	// System.Collections.Hashtable System.Data.XmlDiffLoader::ErrorRows
	Hashtable_t909839986 * ___ErrorRows_3;

public:
	inline static int32_t get_offset_of_DSet_0() { return static_cast<int32_t>(offsetof(XmlDiffLoader_t1575285317, ___DSet_0)); }
	inline DataSet_t3097402844 * get_DSet_0() const { return ___DSet_0; }
	inline DataSet_t3097402844 ** get_address_of_DSet_0() { return &___DSet_0; }
	inline void set_DSet_0(DataSet_t3097402844 * value)
	{
		___DSet_0 = value;
		Il2CppCodeGenWriteBarrier(&___DSet_0, value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(XmlDiffLoader_t1575285317, ___table_1)); }
	inline DataTable_t3267612424 * get_table_1() const { return ___table_1; }
	inline DataTable_t3267612424 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(DataTable_t3267612424 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}

	inline static int32_t get_offset_of_DiffGrRows_2() { return static_cast<int32_t>(offsetof(XmlDiffLoader_t1575285317, ___DiffGrRows_2)); }
	inline Hashtable_t909839986 * get_DiffGrRows_2() const { return ___DiffGrRows_2; }
	inline Hashtable_t909839986 ** get_address_of_DiffGrRows_2() { return &___DiffGrRows_2; }
	inline void set_DiffGrRows_2(Hashtable_t909839986 * value)
	{
		___DiffGrRows_2 = value;
		Il2CppCodeGenWriteBarrier(&___DiffGrRows_2, value);
	}

	inline static int32_t get_offset_of_ErrorRows_3() { return static_cast<int32_t>(offsetof(XmlDiffLoader_t1575285317, ___ErrorRows_3)); }
	inline Hashtable_t909839986 * get_ErrorRows_3() const { return ___ErrorRows_3; }
	inline Hashtable_t909839986 ** get_address_of_ErrorRows_3() { return &___ErrorRows_3; }
	inline void set_ErrorRows_3(Hashtable_t909839986 * value)
	{
		___ErrorRows_3 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorRows_3, value);
	}
};

struct XmlDiffLoader_t1575285317_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlDiffLoader::<>f__switch$map8
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map8_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_4() { return static_cast<int32_t>(offsetof(XmlDiffLoader_t1575285317_StaticFields, ___U3CU3Ef__switchU24map8_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map8_4() const { return ___U3CU3Ef__switchU24map8_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map8_4() { return &___U3CU3Ef__switchU24map8_4; }
	inline void set_U3CU3Ef__switchU24map8_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map8_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
