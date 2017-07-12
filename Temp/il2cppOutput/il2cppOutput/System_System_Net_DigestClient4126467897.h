#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestClient
struct  DigestClient_t4126467897  : public Il2CppObject
{
public:

public:
};

struct DigestClient_t4126467897_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.DigestClient::cache
	Hashtable_t909839986 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(DigestClient_t4126467897_StaticFields, ___cache_0)); }
	inline Hashtable_t909839986 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t909839986 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t909839986 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier(&___cache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
