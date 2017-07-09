#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t40257009;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Grouping`2<System.String,System.Reflection.MemberInfo>
struct  Grouping_2_t3985163293  : public Il2CppObject
{
public:
	// K System.Linq.Grouping`2::key
	String_t* ___key_0;
	// System.Collections.Generic.IEnumerable`1<T> System.Linq.Grouping`2::group
	Il2CppObject* ___group_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Grouping_2_t3985163293, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_group_1() { return static_cast<int32_t>(offsetof(Grouping_2_t3985163293, ___group_1)); }
	inline Il2CppObject* get_group_1() const { return ___group_1; }
	inline Il2CppObject** get_address_of_group_1() { return &___group_1; }
	inline void set_group_1(Il2CppObject* value)
	{
		___group_1 = value;
		Il2CppCodeGenWriteBarrier(&___group_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
