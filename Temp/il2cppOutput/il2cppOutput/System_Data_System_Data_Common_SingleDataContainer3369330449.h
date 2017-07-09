#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SingleDataContainer
struct  SingleDataContainer_t3369330449  : public DataContainer_t2398158623
{
public:
	// System.Single[] System.Data.Common.SingleDataContainer::_values
	SingleU5BU5D_t577127397* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SingleDataContainer_t3369330449, ____values_3)); }
	inline SingleU5BU5D_t577127397* get__values_3() const { return ____values_3; }
	inline SingleU5BU5D_t577127397** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SingleU5BU5D_t577127397* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
