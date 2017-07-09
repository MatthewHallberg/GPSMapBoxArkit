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
// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>
struct Dictionary_2_t969144863;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>,System.Int64>
struct Func_2_t3310448845;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.MemoryCache
struct  MemoryCache_t1161932639  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.Platform.Cache.MemoryCache::_maxCacheSize
	int32_t ____maxCacheSize_0;
	// System.Object Mapbox.Platform.Cache.MemoryCache::_lock
	Il2CppObject * ____lock_1;
	// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem> Mapbox.Platform.Cache.MemoryCache::_cachedResponses
	Dictionary_2_t969144863 * ____cachedResponses_2;

public:
	inline static int32_t get_offset_of__maxCacheSize_0() { return static_cast<int32_t>(offsetof(MemoryCache_t1161932639, ____maxCacheSize_0)); }
	inline int32_t get__maxCacheSize_0() const { return ____maxCacheSize_0; }
	inline int32_t* get_address_of__maxCacheSize_0() { return &____maxCacheSize_0; }
	inline void set__maxCacheSize_0(int32_t value)
	{
		____maxCacheSize_0 = value;
	}

	inline static int32_t get_offset_of__lock_1() { return static_cast<int32_t>(offsetof(MemoryCache_t1161932639, ____lock_1)); }
	inline Il2CppObject * get__lock_1() const { return ____lock_1; }
	inline Il2CppObject ** get_address_of__lock_1() { return &____lock_1; }
	inline void set__lock_1(Il2CppObject * value)
	{
		____lock_1 = value;
		Il2CppCodeGenWriteBarrier(&____lock_1, value);
	}

	inline static int32_t get_offset_of__cachedResponses_2() { return static_cast<int32_t>(offsetof(MemoryCache_t1161932639, ____cachedResponses_2)); }
	inline Dictionary_2_t969144863 * get__cachedResponses_2() const { return ____cachedResponses_2; }
	inline Dictionary_2_t969144863 ** get_address_of__cachedResponses_2() { return &____cachedResponses_2; }
	inline void set__cachedResponses_2(Dictionary_2_t969144863 * value)
	{
		____cachedResponses_2 = value;
		Il2CppCodeGenWriteBarrier(&____cachedResponses_2, value);
	}
};

struct MemoryCache_t1161932639_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>,System.Int64> Mapbox.Platform.Cache.MemoryCache::<>f__am$cache0
	Func_2_t3310448845 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(MemoryCache_t1161932639_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3310448845 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3310448845 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3310448845 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
