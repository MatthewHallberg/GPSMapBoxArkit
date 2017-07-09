#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_Mono_Data_SqlExpressions_StringFunctio1721758303.h"

// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.SubstringFunction
struct  SubstringFunction_t927862047  : public StringFunction_t1721758303
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::start
	Il2CppObject * ___start_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::len
	Il2CppObject * ___len_2;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(SubstringFunction_t927862047, ___start_1)); }
	inline Il2CppObject * get_start_1() const { return ___start_1; }
	inline Il2CppObject ** get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(Il2CppObject * value)
	{
		___start_1 = value;
		Il2CppCodeGenWriteBarrier(&___start_1, value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(SubstringFunction_t927862047, ___len_2)); }
	inline Il2CppObject * get_len_2() const { return ___len_2; }
	inline Il2CppObject ** get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(Il2CppObject * value)
	{
		___len_2 = value;
		Il2CppCodeGenWriteBarrier(&___len_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
