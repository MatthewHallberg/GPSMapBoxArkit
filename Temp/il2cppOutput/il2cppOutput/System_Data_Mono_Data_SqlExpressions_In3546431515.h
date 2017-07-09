#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_Mono_Data_SqlExpressions_UnaryExpressi2769986971.h"

// System.Collections.IList
struct IList_t3321498491;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.In
struct  In_t3546431515  : public UnaryExpression_t2769986971
{
public:
	// System.Collections.IList Mono.Data.SqlExpressions.In::set
	Il2CppObject * ___set_1;

public:
	inline static int32_t get_offset_of_set_1() { return static_cast<int32_t>(offsetof(In_t3546431515, ___set_1)); }
	inline Il2CppObject * get_set_1() const { return ___set_1; }
	inline Il2CppObject ** get_address_of_set_1() { return &___set_1; }
	inline void set_set_1(Il2CppObject * value)
	{
		___set_1 = value;
		Il2CppCodeGenWriteBarrier(&___set_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
