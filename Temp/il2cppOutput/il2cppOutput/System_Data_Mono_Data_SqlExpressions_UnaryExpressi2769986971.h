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

// Mono.Data.SqlExpressions.UnaryExpression
struct  UnaryExpression_t2769986971  : public BaseExpression_t4067875947
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.UnaryExpression::expr
	Il2CppObject * ___expr_0;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t2769986971, ___expr_0)); }
	inline Il2CppObject * get_expr_0() const { return ___expr_0; }
	inline Il2CppObject ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Il2CppObject * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier(&___expr_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
