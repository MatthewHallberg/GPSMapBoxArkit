#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.ComponentModel.ListBindableAttribute
struct ListBindableAttribute_t1092011273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t1092011273  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t1092011273_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t1092011273 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t1092011273 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t1092011273 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t1092011273 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t1092011273 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t1092011273 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t1092011273 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier(&___No_1, value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t1092011273 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t1092011273 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier(&___Yes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
