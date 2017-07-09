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
// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.DiskCache/CacheItem>
struct Dictionary_2_t4272026383;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.DiskCache/CacheItem>,System.Int64>
struct Func_2_t18695709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.DiskCache
struct  DiskCache_t1154126551  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.Platform.Cache.DiskCache::_maxCacheSize
	int32_t ____maxCacheSize_0;
	// System.Object Mapbox.Platform.Cache.DiskCache::_lock
	Il2CppObject * ____lock_1;
	// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.DiskCache/CacheItem> Mapbox.Platform.Cache.DiskCache::_cachedResponses
	Dictionary_2_t4272026383 * ____cachedResponses_2;

public:
	inline static int32_t get_offset_of__maxCacheSize_0() { return static_cast<int32_t>(offsetof(DiskCache_t1154126551, ____maxCacheSize_0)); }
	inline int32_t get__maxCacheSize_0() const { return ____maxCacheSize_0; }
	inline int32_t* get_address_of__maxCacheSize_0() { return &____maxCacheSize_0; }
	inline void set__maxCacheSize_0(int32_t value)
	{
		____maxCacheSize_0 = value;
	}

	inline static int32_t get_offset_of__lock_1() { return static_cast<int32_t>(offsetof(DiskCache_t1154126551, ____lock_1)); }
	inline Il2CppObject * get__lock_1() const { return ____lock_1; }
	inline Il2CppObject ** get_address_of__lock_1() { return &____lock_1; }
	inline void set__lock_1(Il2CppObject * value)
	{
		____lock_1 = value;
		Il2CppCodeGenWriteBarrier(&____lock_1, value);
	}

	inline static int32_t get_offset_of__cachedResponses_2() { return static_cast<int32_t>(offsetof(DiskCache_t1154126551, ____cachedResponses_2)); }
	inline Dictionary_2_t4272026383 * get__cachedResponses_2() const { return ____cachedResponses_2; }
	inline Dictionary_2_t4272026383 ** get_address_of__cachedResponses_2() { return &____cachedResponses_2; }
	inline void set__cachedResponses_2(Dictionary_2_t4272026383 * value)
	{
		____cachedResponses_2 = value;
		Il2CppCodeGenWriteBarrier(&____cachedResponses_2, value);
	}
};

struct DiskCache_t1154126551_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.DiskCache/CacheItem>,System.Int64> Mapbox.Platform.Cache.DiskCache::<>f__am$cache0
	Func_2_t18695709 * ___U3CU3Ef__amU24cache0_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.DiskCache/CacheItem>,System.Int64> Mapbox.Platform.Cache.DiskCache::<>f__am$cache1
	Func_2_t18695709 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(DiskCache_t1154126551_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t18695709 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t18695709 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t18695709 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(DiskCache_t1154126551_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline Func_2_t18695709 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline Func_2_t18695709 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(Func_2_t18695709 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
