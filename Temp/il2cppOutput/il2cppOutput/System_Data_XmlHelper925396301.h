#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XmlHelper
struct  XmlHelper_t925396301  : public Il2CppObject
{
public:

public:
};

struct XmlHelper_t925396301_StaticFields
{
public:
	// System.Collections.Hashtable XmlHelper::localSchemaNameCache
	Hashtable_t909839986 * ___localSchemaNameCache_0;
	// System.Collections.Hashtable XmlHelper::localXmlNameCache
	Hashtable_t909839986 * ___localXmlNameCache_1;

public:
	inline static int32_t get_offset_of_localSchemaNameCache_0() { return static_cast<int32_t>(offsetof(XmlHelper_t925396301_StaticFields, ___localSchemaNameCache_0)); }
	inline Hashtable_t909839986 * get_localSchemaNameCache_0() const { return ___localSchemaNameCache_0; }
	inline Hashtable_t909839986 ** get_address_of_localSchemaNameCache_0() { return &___localSchemaNameCache_0; }
	inline void set_localSchemaNameCache_0(Hashtable_t909839986 * value)
	{
		___localSchemaNameCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___localSchemaNameCache_0, value);
	}

	inline static int32_t get_offset_of_localXmlNameCache_1() { return static_cast<int32_t>(offsetof(XmlHelper_t925396301_StaticFields, ___localXmlNameCache_1)); }
	inline Hashtable_t909839986 * get_localXmlNameCache_1() const { return ___localXmlNameCache_1; }
	inline Hashtable_t909839986 ** get_address_of_localXmlNameCache_1() { return &___localXmlNameCache_1; }
	inline void set_localXmlNameCache_1(Hashtable_t909839986 * value)
	{
		___localXmlNameCache_1 = value;
		Il2CppCodeGenWriteBarrier(&___localXmlNameCache_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
