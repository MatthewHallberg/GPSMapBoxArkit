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
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.TableMapping
struct TableMapping_t1812080488;
// System.Data.TableMappingCollection
struct TableMappingCollection_t837861354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableMapping
struct  TableMapping_t1812080488  : public Il2CppObject
{
public:
	// System.Boolean System.Data.TableMapping::existsInDataSet
	bool ___existsInDataSet_0;
	// System.Data.DataTable System.Data.TableMapping::Table
	DataTable_t3267612424 * ___Table_1;
	// System.Collections.ArrayList System.Data.TableMapping::Elements
	ArrayList_t4252133567 * ___Elements_2;
	// System.Collections.ArrayList System.Data.TableMapping::Attributes
	ArrayList_t4252133567 * ___Attributes_3;
	// System.Data.DataColumn System.Data.TableMapping::SimpleContent
	DataColumn_t2152532948 * ___SimpleContent_4;
	// System.Data.DataColumn System.Data.TableMapping::PrimaryKey
	DataColumn_t2152532948 * ___PrimaryKey_5;
	// System.Data.DataColumn System.Data.TableMapping::ReferenceKey
	DataColumn_t2152532948 * ___ReferenceKey_6;
	// System.Int32 System.Data.TableMapping::lastElementIndex
	int32_t ___lastElementIndex_7;
	// System.Data.TableMapping System.Data.TableMapping::ParentTable
	TableMapping_t1812080488 * ___ParentTable_8;
	// System.Data.TableMappingCollection System.Data.TableMapping::ChildTables
	TableMappingCollection_t837861354 * ___ChildTables_9;

public:
	inline static int32_t get_offset_of_existsInDataSet_0() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___existsInDataSet_0)); }
	inline bool get_existsInDataSet_0() const { return ___existsInDataSet_0; }
	inline bool* get_address_of_existsInDataSet_0() { return &___existsInDataSet_0; }
	inline void set_existsInDataSet_0(bool value)
	{
		___existsInDataSet_0 = value;
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___Table_1)); }
	inline DataTable_t3267612424 * get_Table_1() const { return ___Table_1; }
	inline DataTable_t3267612424 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(DataTable_t3267612424 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier(&___Table_1, value);
	}

	inline static int32_t get_offset_of_Elements_2() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___Elements_2)); }
	inline ArrayList_t4252133567 * get_Elements_2() const { return ___Elements_2; }
	inline ArrayList_t4252133567 ** get_address_of_Elements_2() { return &___Elements_2; }
	inline void set_Elements_2(ArrayList_t4252133567 * value)
	{
		___Elements_2 = value;
		Il2CppCodeGenWriteBarrier(&___Elements_2, value);
	}

	inline static int32_t get_offset_of_Attributes_3() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___Attributes_3)); }
	inline ArrayList_t4252133567 * get_Attributes_3() const { return ___Attributes_3; }
	inline ArrayList_t4252133567 ** get_address_of_Attributes_3() { return &___Attributes_3; }
	inline void set_Attributes_3(ArrayList_t4252133567 * value)
	{
		___Attributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Attributes_3, value);
	}

	inline static int32_t get_offset_of_SimpleContent_4() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___SimpleContent_4)); }
	inline DataColumn_t2152532948 * get_SimpleContent_4() const { return ___SimpleContent_4; }
	inline DataColumn_t2152532948 ** get_address_of_SimpleContent_4() { return &___SimpleContent_4; }
	inline void set_SimpleContent_4(DataColumn_t2152532948 * value)
	{
		___SimpleContent_4 = value;
		Il2CppCodeGenWriteBarrier(&___SimpleContent_4, value);
	}

	inline static int32_t get_offset_of_PrimaryKey_5() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___PrimaryKey_5)); }
	inline DataColumn_t2152532948 * get_PrimaryKey_5() const { return ___PrimaryKey_5; }
	inline DataColumn_t2152532948 ** get_address_of_PrimaryKey_5() { return &___PrimaryKey_5; }
	inline void set_PrimaryKey_5(DataColumn_t2152532948 * value)
	{
		___PrimaryKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___PrimaryKey_5, value);
	}

	inline static int32_t get_offset_of_ReferenceKey_6() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___ReferenceKey_6)); }
	inline DataColumn_t2152532948 * get_ReferenceKey_6() const { return ___ReferenceKey_6; }
	inline DataColumn_t2152532948 ** get_address_of_ReferenceKey_6() { return &___ReferenceKey_6; }
	inline void set_ReferenceKey_6(DataColumn_t2152532948 * value)
	{
		___ReferenceKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___ReferenceKey_6, value);
	}

	inline static int32_t get_offset_of_lastElementIndex_7() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___lastElementIndex_7)); }
	inline int32_t get_lastElementIndex_7() const { return ___lastElementIndex_7; }
	inline int32_t* get_address_of_lastElementIndex_7() { return &___lastElementIndex_7; }
	inline void set_lastElementIndex_7(int32_t value)
	{
		___lastElementIndex_7 = value;
	}

	inline static int32_t get_offset_of_ParentTable_8() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___ParentTable_8)); }
	inline TableMapping_t1812080488 * get_ParentTable_8() const { return ___ParentTable_8; }
	inline TableMapping_t1812080488 ** get_address_of_ParentTable_8() { return &___ParentTable_8; }
	inline void set_ParentTable_8(TableMapping_t1812080488 * value)
	{
		___ParentTable_8 = value;
		Il2CppCodeGenWriteBarrier(&___ParentTable_8, value);
	}

	inline static int32_t get_offset_of_ChildTables_9() { return static_cast<int32_t>(offsetof(TableMapping_t1812080488, ___ChildTables_9)); }
	inline TableMappingCollection_t837861354 * get_ChildTables_9() const { return ___ChildTables_9; }
	inline TableMappingCollection_t837861354 ** get_address_of_ChildTables_9() { return &___ChildTables_9; }
	inline void set_ChildTables_9(TableMappingCollection_t837861354 * value)
	{
		___ChildTables_9 = value;
		Il2CppCodeGenWriteBarrier(&___ChildTables_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
