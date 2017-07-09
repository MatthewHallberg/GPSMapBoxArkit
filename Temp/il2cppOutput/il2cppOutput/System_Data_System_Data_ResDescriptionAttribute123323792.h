#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_DescriptionAttribute3207779672.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ResDescriptionAttribute
struct  ResDescriptionAttribute_t123323792  : public DescriptionAttribute_t3207779672
{
public:
	// System.String System.Data.ResDescriptionAttribute::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(ResDescriptionAttribute_t123323792, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
