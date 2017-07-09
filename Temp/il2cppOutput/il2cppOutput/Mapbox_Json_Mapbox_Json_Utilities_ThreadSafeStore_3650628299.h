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
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct Dictionary_2_t2860469691;
// System.Func`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct Func_2_t3404464449;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.ThreadSafeStore`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct  ThreadSafeStore_2_t3650628299  : public Il2CppObject
{
public:
	// System.Object Mapbox.Json.Utilities.ThreadSafeStore`2::_lock
	Il2CppObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Mapbox.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t2860469691 * ____store_1;
	// System.Func`2<TKey,TValue> Mapbox.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_t3404464449 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3650628299, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3650628299, ____store_1)); }
	inline Dictionary_2_t2860469691 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t2860469691 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t2860469691 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier(&____store_1, value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3650628299, ____creator_2)); }
	inline Func_2_t3404464449 * get__creator_2() const { return ____creator_2; }
	inline Func_2_t3404464449 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_t3404464449 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier(&____creator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
