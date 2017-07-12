#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_DateTime693205669.h"
#include "System_Core_System_TimeZoneInfo_TimeType1933403830.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
struct  KeyValuePair_2_t3074420206 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t693205669  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TimeType_t1933403830  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3074420206, ___key_0)); }
	inline DateTime_t693205669  get_key_0() const { return ___key_0; }
	inline DateTime_t693205669 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t693205669  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3074420206, ___value_1)); }
	inline TimeType_t1933403830  get_value_1() const { return ___value_1; }
	inline TimeType_t1933403830 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TimeType_t1933403830  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
