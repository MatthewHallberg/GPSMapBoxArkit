#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.UInt64[]
struct UInt64U5BU5D_t1668688775;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt64DataContainer
struct  UInt64DataContainer_t3150804279  : public DataContainer_t2398158623
{
public:
	// System.UInt64[] System.Data.Common.UInt64DataContainer::_values
	UInt64U5BU5D_t1668688775* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt64DataContainer_t3150804279, ____values_3)); }
	inline UInt64U5BU5D_t1668688775* get__values_3() const { return ____values_3; }
	inline UInt64U5BU5D_t1668688775** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt64U5BU5D_t1668688775* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
