#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Data.DataRow
struct DataRow_t321465356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableNewRowEventArgs
struct  DataTableNewRowEventArgs_t743281225  : public EventArgs_t3289624707
{
public:
	// System.Data.DataRow System.Data.DataTableNewRowEventArgs::_row
	DataRow_t321465356 * ____row_1;

public:
	inline static int32_t get_offset_of__row_1() { return static_cast<int32_t>(offsetof(DataTableNewRowEventArgs_t743281225, ____row_1)); }
	inline DataRow_t321465356 * get__row_1() const { return ____row_1; }
	inline DataRow_t321465356 ** get_address_of__row_1() { return &____row_1; }
	inline void set__row_1(DataRow_t321465356 * value)
	{
		____row_1 = value;
		Il2CppCodeGenWriteBarrier(&____row_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
