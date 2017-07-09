#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.ComponentModel.MergablePropertyAttribute
struct MergablePropertyAttribute_t1597820506;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1597820506  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1597820506_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1597820506 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1597820506 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1597820506 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1597820506 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1597820506 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1597820506 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1597820506 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier(&___No_2, value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1597820506 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1597820506 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Yes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
