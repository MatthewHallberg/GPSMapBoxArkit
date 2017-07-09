#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.ReflectionAttributeProvider
struct  ReflectionAttributeProvider_t2808901560  : public Il2CppObject
{
public:
	// System.Object Mapbox.Json.Serialization.ReflectionAttributeProvider::_attributeProvider
	Il2CppObject * ____attributeProvider_0;

public:
	inline static int32_t get_offset_of__attributeProvider_0() { return static_cast<int32_t>(offsetof(ReflectionAttributeProvider_t2808901560, ____attributeProvider_0)); }
	inline Il2CppObject * get__attributeProvider_0() const { return ____attributeProvider_0; }
	inline Il2CppObject ** get_address_of__attributeProvider_0() { return &____attributeProvider_0; }
	inline void set__attributeProvider_0(Il2CppObject * value)
	{
		____attributeProvider_0 = value;
		Il2CppCodeGenWriteBarrier(&____attributeProvider_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
