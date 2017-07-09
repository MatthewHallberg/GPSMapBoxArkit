#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
struct  SuppressMessageAttribute_t2687610240  : public Attribute_t542643598
{
public:
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::category
	String_t* ___category_0;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::checkId
	String_t* ___checkId_1;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::messageId
	String_t* ___messageId_2;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2687610240, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier(&___category_0, value);
	}

	inline static int32_t get_offset_of_checkId_1() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2687610240, ___checkId_1)); }
	inline String_t* get_checkId_1() const { return ___checkId_1; }
	inline String_t** get_address_of_checkId_1() { return &___checkId_1; }
	inline void set_checkId_1(String_t* value)
	{
		___checkId_1 = value;
		Il2CppCodeGenWriteBarrier(&___checkId_1, value);
	}

	inline static int32_t get_offset_of_messageId_2() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t2687610240, ___messageId_2)); }
	inline String_t* get_messageId_2() const { return ___messageId_2; }
	inline String_t** get_address_of_messageId_2() { return &___messageId_2; }
	inline void set_messageId_2(String_t* value)
	{
		___messageId_2 = value;
		Il2CppCodeGenWriteBarrier(&___messageId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
