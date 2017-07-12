#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_Mono_Data_SqlExpressions_UnaryExpressi2769986971.h"

// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IifFunction
struct  IifFunction_t224081018  : public UnaryExpression_t2769986971
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::trueExpr
	Il2CppObject * ___trueExpr_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::falseExpr
	Il2CppObject * ___falseExpr_2;

public:
	inline static int32_t get_offset_of_trueExpr_1() { return static_cast<int32_t>(offsetof(IifFunction_t224081018, ___trueExpr_1)); }
	inline Il2CppObject * get_trueExpr_1() const { return ___trueExpr_1; }
	inline Il2CppObject ** get_address_of_trueExpr_1() { return &___trueExpr_1; }
	inline void set_trueExpr_1(Il2CppObject * value)
	{
		___trueExpr_1 = value;
		Il2CppCodeGenWriteBarrier(&___trueExpr_1, value);
	}

	inline static int32_t get_offset_of_falseExpr_2() { return static_cast<int32_t>(offsetof(IifFunction_t224081018, ___falseExpr_2)); }
	inline Il2CppObject * get_falseExpr_2() const { return ___falseExpr_2; }
	inline Il2CppObject ** get_address_of_falseExpr_2() { return &___falseExpr_2; }
	inline void set_falseExpr_2(Il2CppObject * value)
	{
		___falseExpr_2 = value;
		Il2CppCodeGenWriteBarrier(&___falseExpr_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
