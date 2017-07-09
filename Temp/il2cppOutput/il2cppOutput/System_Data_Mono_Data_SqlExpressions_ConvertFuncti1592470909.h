#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_Mono_Data_SqlExpressions_UnaryExpressi2769986971.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConvertFunction
struct  ConvertFunction_t1592470909  : public UnaryExpression_t2769986971
{
public:
	// System.Type Mono.Data.SqlExpressions.ConvertFunction::targetType
	Type_t * ___targetType_1;

public:
	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(ConvertFunction_t1592470909, ___targetType_1)); }
	inline Type_t * get_targetType_1() const { return ___targetType_1; }
	inline Type_t ** get_address_of_targetType_1() { return &___targetType_1; }
	inline void set_targetType_1(Type_t * value)
	{
		___targetType_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
