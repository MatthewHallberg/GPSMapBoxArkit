#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_Mono_Data_SqlExpressions_BaseExpressio4067875947.h"

// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryExpression
struct  BinaryExpression_t4018232945  : public BaseExpression_t4067875947
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr1
	Il2CppObject * ___expr1_0;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr2
	Il2CppObject * ___expr2_1;

public:
	inline static int32_t get_offset_of_expr1_0() { return static_cast<int32_t>(offsetof(BinaryExpression_t4018232945, ___expr1_0)); }
	inline Il2CppObject * get_expr1_0() const { return ___expr1_0; }
	inline Il2CppObject ** get_address_of_expr1_0() { return &___expr1_0; }
	inline void set_expr1_0(Il2CppObject * value)
	{
		___expr1_0 = value;
		Il2CppCodeGenWriteBarrier(&___expr1_0, value);
	}

	inline static int32_t get_offset_of_expr2_1() { return static_cast<int32_t>(offsetof(BinaryExpression_t4018232945, ___expr2_1)); }
	inline Il2CppObject * get_expr2_1() const { return ___expr2_1; }
	inline Il2CppObject ** get_address_of_expr2_1() { return &___expr2_1; }
	inline void set_expr2_1(Il2CppObject * value)
	{
		___expr2_1 = value;
		Il2CppCodeGenWriteBarrier(&___expr2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
