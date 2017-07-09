#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"
#include "System_System_ComponentModel_RefreshProperties2240171922.h"

// System.ComponentModel.RefreshPropertiesAttribute
struct RefreshPropertiesAttribute_t2234294918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t2234294918  : public Attribute_t542643598
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2234294918, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t2234294918_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t2234294918 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t2234294918 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t2234294918 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2234294918_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t2234294918 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t2234294918 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t2234294918 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier(&___All_1, value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2234294918_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t2234294918 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t2234294918 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t2234294918 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier(&___Default_2, value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2234294918_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t2234294918 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t2234294918 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t2234294918 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier(&___Repaint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
