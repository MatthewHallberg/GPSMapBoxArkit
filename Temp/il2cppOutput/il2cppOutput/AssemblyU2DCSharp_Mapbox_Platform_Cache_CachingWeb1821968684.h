#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Mapbox.Platform.Cache.ICache>
struct List_1_t1086120715;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.CachingWebFileSource
struct  CachingWebFileSource_t1821968684  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Mapbox.Platform.Cache.ICache> Mapbox.Platform.Cache.CachingWebFileSource::_caches
	List_1_t1086120715 * ____caches_0;
	// System.String Mapbox.Platform.Cache.CachingWebFileSource::_accessToken
	String_t* ____accessToken_1;

public:
	inline static int32_t get_offset_of__caches_0() { return static_cast<int32_t>(offsetof(CachingWebFileSource_t1821968684, ____caches_0)); }
	inline List_1_t1086120715 * get__caches_0() const { return ____caches_0; }
	inline List_1_t1086120715 ** get_address_of__caches_0() { return &____caches_0; }
	inline void set__caches_0(List_1_t1086120715 * value)
	{
		____caches_0 = value;
		Il2CppCodeGenWriteBarrier(&____caches_0, value);
	}

	inline static int32_t get_offset_of__accessToken_1() { return static_cast<int32_t>(offsetof(CachingWebFileSource_t1821968684, ____accessToken_1)); }
	inline String_t* get__accessToken_1() const { return ____accessToken_1; }
	inline String_t** get_address_of__accessToken_1() { return &____accessToken_1; }
	inline void set__accessToken_1(String_t* value)
	{
		____accessToken_1 = value;
		Il2CppCodeGenWriteBarrier(&____accessToken_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
