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

// Mono.Data.SqlExpressions.IsNullFunction
struct  IsNullFunction_t156305379  : public UnaryExpression_t2769986971
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IsNullFunction::defaultExpr
	Il2CppObject * ___defaultExpr_1;

public:
	inline static int32_t get_offset_of_defaultExpr_1() { return static_cast<int32_t>(offsetof(IsNullFunction_t156305379, ___defaultExpr_1)); }
	inline Il2CppObject * get_defaultExpr_1() const { return ___defaultExpr_1; }
	inline Il2CppObject ** get_address_of_defaultExpr_1() { return &___defaultExpr_1; }
	inline void set_defaultExpr_1(Il2CppObject * value)
	{
		___defaultExpr_1 = value;
		Il2CppCodeGenWriteBarrier(&___defaultExpr_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
