#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonConverterAttribute
struct  JsonConverterAttribute_t648319290  : public Attribute_t542643598
{
public:
	// System.Type Mapbox.Json.JsonConverterAttribute::_converterType
	Type_t * ____converterType_0;
	// System.Object[] Mapbox.Json.JsonConverterAttribute::<ConverterParameters>k__BackingField
	ObjectU5BU5D_t3614634134* ___U3CConverterParametersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__converterType_0() { return static_cast<int32_t>(offsetof(JsonConverterAttribute_t648319290, ____converterType_0)); }
	inline Type_t * get__converterType_0() const { return ____converterType_0; }
	inline Type_t ** get_address_of__converterType_0() { return &____converterType_0; }
	inline void set__converterType_0(Type_t * value)
	{
		____converterType_0 = value;
		Il2CppCodeGenWriteBarrier(&____converterType_0, value);
	}

	inline static int32_t get_offset_of_U3CConverterParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonConverterAttribute_t648319290, ___U3CConverterParametersU3Ek__BackingField_1)); }
	inline ObjectU5BU5D_t3614634134* get_U3CConverterParametersU3Ek__BackingField_1() const { return ___U3CConverterParametersU3Ek__BackingField_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_U3CConverterParametersU3Ek__BackingField_1() { return &___U3CConverterParametersU3Ek__BackingField_1; }
	inline void set_U3CConverterParametersU3Ek__BackingField_1(ObjectU5BU5D_t3614634134* value)
	{
		___U3CConverterParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConverterParametersU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
