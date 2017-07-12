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
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3093891015;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Authorization
struct  Authorization_t1602399  : public Il2CppObject
{
public:
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.String System.Net.Authorization::connectionGroupId
	String_t* ___connectionGroupId_2;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Il2CppObject * ___module_3;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(Authorization_t1602399, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier(&___token_0, value);
	}

	inline static int32_t get_offset_of_complete_1() { return static_cast<int32_t>(offsetof(Authorization_t1602399, ___complete_1)); }
	inline bool get_complete_1() const { return ___complete_1; }
	inline bool* get_address_of_complete_1() { return &___complete_1; }
	inline void set_complete_1(bool value)
	{
		___complete_1 = value;
	}

	inline static int32_t get_offset_of_connectionGroupId_2() { return static_cast<int32_t>(offsetof(Authorization_t1602399, ___connectionGroupId_2)); }
	inline String_t* get_connectionGroupId_2() const { return ___connectionGroupId_2; }
	inline String_t** get_address_of_connectionGroupId_2() { return &___connectionGroupId_2; }
	inline void set_connectionGroupId_2(String_t* value)
	{
		___connectionGroupId_2 = value;
		Il2CppCodeGenWriteBarrier(&___connectionGroupId_2, value);
	}

	inline static int32_t get_offset_of_module_3() { return static_cast<int32_t>(offsetof(Authorization_t1602399, ___module_3)); }
	inline Il2CppObject * get_module_3() const { return ___module_3; }
	inline Il2CppObject ** get_address_of_module_3() { return &___module_3; }
	inline void set_module_3(Il2CppObject * value)
	{
		___module_3 = value;
		Il2CppCodeGenWriteBarrier(&___module_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
