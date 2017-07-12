#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_SortContext_1_gen3110948926.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Mapbox.Platform.Cache.DiskCache/CacheItem>,System.Int64>
struct Func_2_t3835643891;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t3158508455;
// System.Int64[]
struct Int64U5BU5D_t717125112;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortSequenceContext`2<System.Collections.Generic.KeyValuePair`2<System.Object,Mapbox.Platform.Cache.DiskCache/CacheItem>,System.Int64>
struct  SortSequenceContext_2_t4071434783  : public SortContext_1_t3110948926
{
public:
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2::selector
	Func_2_t3835643891 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2::comparer
	Il2CppObject* ___comparer_3;
	// TKey[] System.Linq.SortSequenceContext`2::keys
	Int64U5BU5D_t717125112* ___keys_4;

public:
	inline static int32_t get_offset_of_selector_2() { return static_cast<int32_t>(offsetof(SortSequenceContext_2_t4071434783, ___selector_2)); }
	inline Func_2_t3835643891 * get_selector_2() const { return ___selector_2; }
	inline Func_2_t3835643891 ** get_address_of_selector_2() { return &___selector_2; }
	inline void set_selector_2(Func_2_t3835643891 * value)
	{
		___selector_2 = value;
		Il2CppCodeGenWriteBarrier(&___selector_2, value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(SortSequenceContext_2_t4071434783, ___comparer_3)); }
	inline Il2CppObject* get_comparer_3() const { return ___comparer_3; }
	inline Il2CppObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(Il2CppObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_3, value);
	}

	inline static int32_t get_offset_of_keys_4() { return static_cast<int32_t>(offsetof(SortSequenceContext_2_t4071434783, ___keys_4)); }
	inline Int64U5BU5D_t717125112* get_keys_4() const { return ___keys_4; }
	inline Int64U5BU5D_t717125112** get_address_of_keys_4() { return &___keys_4; }
	inline void set_keys_4(Int64U5BU5D_t717125112* value)
	{
		___keys_4 = value;
		Il2CppCodeGenWriteBarrier(&___keys_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
