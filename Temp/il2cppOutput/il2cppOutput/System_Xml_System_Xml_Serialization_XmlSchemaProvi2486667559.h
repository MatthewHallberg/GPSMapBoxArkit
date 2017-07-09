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

// System.Xml.Serialization.XmlSchemaProviderAttribute
struct  XmlSchemaProviderAttribute_t2486667559  : public Attribute_t542643598
{
public:
	// System.String System.Xml.Serialization.XmlSchemaProviderAttribute::_methodName
	String_t* ____methodName_0;
	// System.Boolean System.Xml.Serialization.XmlSchemaProviderAttribute::_isAny
	bool ____isAny_1;

public:
	inline static int32_t get_offset_of__methodName_0() { return static_cast<int32_t>(offsetof(XmlSchemaProviderAttribute_t2486667559, ____methodName_0)); }
	inline String_t* get__methodName_0() const { return ____methodName_0; }
	inline String_t** get_address_of__methodName_0() { return &____methodName_0; }
	inline void set__methodName_0(String_t* value)
	{
		____methodName_0 = value;
		Il2CppCodeGenWriteBarrier(&____methodName_0, value);
	}

	inline static int32_t get_offset_of__isAny_1() { return static_cast<int32_t>(offsetof(XmlSchemaProviderAttribute_t2486667559, ____isAny_1)); }
	inline bool get__isAny_1() const { return ____isAny_1; }
	inline bool* get_address_of__isAny_1() { return &____isAny_1; }
	inline void set__isAny_1(bool value)
	{
		____isAny_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
