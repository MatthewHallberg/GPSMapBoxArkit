#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.MemberInfo
struct MemberInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.ReflectionValueProvider
struct  ReflectionValueProvider_t2795131921  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo Mapbox.Json.Serialization.ReflectionValueProvider::_memberInfo
	MemberInfo_t * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(ReflectionValueProvider_t2795131921, ____memberInfo_0)); }
	inline MemberInfo_t * get__memberInfo_0() const { return ____memberInfo_0; }
	inline MemberInfo_t ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(MemberInfo_t * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____memberInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
