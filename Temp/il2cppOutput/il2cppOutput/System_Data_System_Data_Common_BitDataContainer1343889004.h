#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Collections.BitArray
struct BitArray_t4180138994;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.BitDataContainer
struct  BitDataContainer_t1343889004  : public DataContainer_t2398158623
{
public:
	// System.Collections.BitArray System.Data.Common.BitDataContainer::_values
	BitArray_t4180138994 * ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(BitDataContainer_t1343889004, ____values_3)); }
	inline BitArray_t4180138994 * get__values_3() const { return ____values_3; }
	inline BitArray_t4180138994 ** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(BitArray_t4180138994 * value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
