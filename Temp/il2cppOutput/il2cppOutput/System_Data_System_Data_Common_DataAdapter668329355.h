#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_Component2826673791.h"

// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t394073712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t668329355  : public Component_t2826673791
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t394073712 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t668329355, ___tableMappings_4)); }
	inline DataTableMappingCollection_t394073712 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t394073712 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t394073712 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier(&___tableMappings_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
