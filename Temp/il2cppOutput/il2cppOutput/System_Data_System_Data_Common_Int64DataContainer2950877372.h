#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Int64[]
struct Int64U5BU5D_t717125112;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int64DataContainer
struct  Int64DataContainer_t2950877372  : public DataContainer_t2398158623
{
public:
	// System.Int64[] System.Data.Common.Int64DataContainer::_values
	Int64U5BU5D_t717125112* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int64DataContainer_t2950877372, ____values_3)); }
	inline Int64U5BU5D_t717125112* get__values_3() const { return ____values_3; }
	inline Int64U5BU5D_t717125112** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int64U5BU5D_t717125112* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
