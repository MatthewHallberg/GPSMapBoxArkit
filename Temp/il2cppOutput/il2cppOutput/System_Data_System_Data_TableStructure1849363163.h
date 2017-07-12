#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Data.DataTable
struct DataTable_t3267612424;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.DataColumn
struct DataColumn_t2152532948;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableStructure
struct  TableStructure_t1849363163  : public Il2CppObject
{
public:
	// System.Data.DataTable System.Data.TableStructure::Table
	DataTable_t3267612424 * ___Table_0;
	// System.Collections.Hashtable System.Data.TableStructure::OrdinalColumns
	Hashtable_t909839986 * ___OrdinalColumns_1;
	// System.Collections.ArrayList System.Data.TableStructure::NonOrdinalColumns
	ArrayList_t4252133567 * ___NonOrdinalColumns_2;
	// System.Data.DataColumn System.Data.TableStructure::PrimaryKey
	DataColumn_t2152532948 * ___PrimaryKey_3;

public:
	inline static int32_t get_offset_of_Table_0() { return static_cast<int32_t>(offsetof(TableStructure_t1849363163, ___Table_0)); }
	inline DataTable_t3267612424 * get_Table_0() const { return ___Table_0; }
	inline DataTable_t3267612424 ** get_address_of_Table_0() { return &___Table_0; }
	inline void set_Table_0(DataTable_t3267612424 * value)
	{
		___Table_0 = value;
		Il2CppCodeGenWriteBarrier(&___Table_0, value);
	}

	inline static int32_t get_offset_of_OrdinalColumns_1() { return static_cast<int32_t>(offsetof(TableStructure_t1849363163, ___OrdinalColumns_1)); }
	inline Hashtable_t909839986 * get_OrdinalColumns_1() const { return ___OrdinalColumns_1; }
	inline Hashtable_t909839986 ** get_address_of_OrdinalColumns_1() { return &___OrdinalColumns_1; }
	inline void set_OrdinalColumns_1(Hashtable_t909839986 * value)
	{
		___OrdinalColumns_1 = value;
		Il2CppCodeGenWriteBarrier(&___OrdinalColumns_1, value);
	}

	inline static int32_t get_offset_of_NonOrdinalColumns_2() { return static_cast<int32_t>(offsetof(TableStructure_t1849363163, ___NonOrdinalColumns_2)); }
	inline ArrayList_t4252133567 * get_NonOrdinalColumns_2() const { return ___NonOrdinalColumns_2; }
	inline ArrayList_t4252133567 ** get_address_of_NonOrdinalColumns_2() { return &___NonOrdinalColumns_2; }
	inline void set_NonOrdinalColumns_2(ArrayList_t4252133567 * value)
	{
		___NonOrdinalColumns_2 = value;
		Il2CppCodeGenWriteBarrier(&___NonOrdinalColumns_2, value);
	}

	inline static int32_t get_offset_of_PrimaryKey_3() { return static_cast<int32_t>(offsetof(TableStructure_t1849363163, ___PrimaryKey_3)); }
	inline DataColumn_t2152532948 * get_PrimaryKey_3() const { return ___PrimaryKey_3; }
	inline DataColumn_t2152532948 ** get_address_of_PrimaryKey_3() { return &___PrimaryKey_3; }
	inline void set_PrimaryKey_3(DataColumn_t2152532948 * value)
	{
		___PrimaryKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___PrimaryKey_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
