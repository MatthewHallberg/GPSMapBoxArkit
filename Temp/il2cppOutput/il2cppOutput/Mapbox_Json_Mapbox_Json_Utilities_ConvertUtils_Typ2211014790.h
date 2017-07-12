#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct  TypeConvertKey_t2211014790 
{
public:
	// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t2211014790, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier(&____initialType_0, value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t2211014790, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier(&____targetType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t2211014790_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t2211014790_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
