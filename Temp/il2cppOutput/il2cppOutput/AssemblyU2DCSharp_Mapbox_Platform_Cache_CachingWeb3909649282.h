#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t358943961;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t1821968684;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.CachingWebFileSource/<Request>c__AnonStorey1
struct  U3CRequestU3Ec__AnonStorey1_t3909649282  : public Il2CppObject
{
public:
	// System.Action`1<Mapbox.Platform.Response> Mapbox.Platform.Cache.CachingWebFileSource/<Request>c__AnonStorey1::callback
	Action_1_t358943961 * ___callback_0;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Platform.Cache.CachingWebFileSource/<Request>c__AnonStorey1::$this
	CachingWebFileSource_t1821968684 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CRequestU3Ec__AnonStorey1_t3909649282, ___callback_0)); }
	inline Action_1_t358943961 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t358943961 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t358943961 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRequestU3Ec__AnonStorey1_t3909649282, ___U24this_1)); }
	inline CachingWebFileSource_t1821968684 * get_U24this_1() const { return ___U24this_1; }
	inline CachingWebFileSource_t1821968684 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CachingWebFileSource_t1821968684 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
