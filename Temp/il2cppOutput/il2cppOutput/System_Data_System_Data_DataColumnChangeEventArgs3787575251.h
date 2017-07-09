#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t3787575251  : public EventArgs_t3289624707
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t2152532948 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t321465356 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	Il2CppObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3787575251, ____column_1)); }
	inline DataColumn_t2152532948 * get__column_1() const { return ____column_1; }
	inline DataColumn_t2152532948 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t2152532948 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier(&____column_1, value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3787575251, ____row_2)); }
	inline DataRow_t321465356 * get__row_2() const { return ____row_2; }
	inline DataRow_t321465356 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t321465356 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier(&____row_2, value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3787575251, ____proposedValue_3)); }
	inline Il2CppObject * get__proposedValue_3() const { return ____proposedValue_3; }
	inline Il2CppObject ** get_address_of__proposedValue_3() { return &____proposedValue_3; }
	inline void set__proposedValue_3(Il2CppObject * value)
	{
		____proposedValue_3 = value;
		Il2CppCodeGenWriteBarrier(&____proposedValue_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
