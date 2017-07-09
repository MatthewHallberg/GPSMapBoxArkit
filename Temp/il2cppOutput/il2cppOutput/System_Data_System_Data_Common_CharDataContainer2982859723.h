#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t2982859723  : public DataContainer_t2398158623
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t1328083999* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t2982859723, ____values_3)); }
	inline CharU5BU5D_t1328083999* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t1328083999** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t1328083999* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
