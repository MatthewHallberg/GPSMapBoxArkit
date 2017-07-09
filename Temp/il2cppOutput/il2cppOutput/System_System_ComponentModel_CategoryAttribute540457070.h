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
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t540457070;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t540457070  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier(&___category_0, value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t540457070_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t540457070 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	Il2CppObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___def_2)); }
	inline CategoryAttribute_t540457070 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t540457070 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t540457070 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier(&___def_2, value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___lockobj_3)); }
	inline Il2CppObject * get_lockobj_3() const { return ___lockobj_3; }
	inline Il2CppObject ** get_address_of_lockobj_3() { return &___lockobj_3; }
	inline void set_lockobj_3(Il2CppObject * value)
	{
		___lockobj_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
