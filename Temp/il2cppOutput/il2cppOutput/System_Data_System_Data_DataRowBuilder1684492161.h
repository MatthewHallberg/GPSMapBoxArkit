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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t1684492161  : public Il2CppObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t3267612424 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t1684492161, ___table_0)); }
	inline DataTable_t3267612424 * get_table_0() const { return ___table_0; }
	inline DataTable_t3267612424 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t3267612424 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t1684492161, ____rowId_1)); }
	inline int32_t get__rowId_1() const { return ____rowId_1; }
	inline int32_t* get_address_of__rowId_1() { return &____rowId_1; }
	inline void set__rowId_1(int32_t value)
	{
		____rowId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
