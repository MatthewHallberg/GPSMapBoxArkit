#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.Linq.XNamespace
struct XNamespace_t1613015075;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>
struct Dictionary_2_t3527794337;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>
struct Dictionary_2_t2699969625;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNamespace
struct  XNamespace_t1613015075  : public Il2CppObject
{
public:
	// System.String System.Xml.Linq.XNamespace::uri
	String_t* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName> System.Xml.Linq.XNamespace::table
	Dictionary_2_t2699969625 * ___table_5;

public:
	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075, ___uri_4)); }
	inline String_t* get_uri_4() const { return ___uri_4; }
	inline String_t** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(String_t* value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier(&___uri_4, value);
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075, ___table_5)); }
	inline Dictionary_2_t2699969625 * get_table_5() const { return ___table_5; }
	inline Dictionary_2_t2699969625 ** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Dictionary_2_t2699969625 * value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier(&___table_5, value);
	}
};

struct XNamespace_t1613015075_StaticFields
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::blank
	XNamespace_t1613015075 * ___blank_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xml
	XNamespace_t1613015075 * ___xml_1;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xmlns
	XNamespace_t1613015075 * ___xmlns_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace> System.Xml.Linq.XNamespace::nstable
	Dictionary_2_t3527794337 * ___nstable_3;

public:
	inline static int32_t get_offset_of_blank_0() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___blank_0)); }
	inline XNamespace_t1613015075 * get_blank_0() const { return ___blank_0; }
	inline XNamespace_t1613015075 ** get_address_of_blank_0() { return &___blank_0; }
	inline void set_blank_0(XNamespace_t1613015075 * value)
	{
		___blank_0 = value;
		Il2CppCodeGenWriteBarrier(&___blank_0, value);
	}

	inline static int32_t get_offset_of_xml_1() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___xml_1)); }
	inline XNamespace_t1613015075 * get_xml_1() const { return ___xml_1; }
	inline XNamespace_t1613015075 ** get_address_of_xml_1() { return &___xml_1; }
	inline void set_xml_1(XNamespace_t1613015075 * value)
	{
		___xml_1 = value;
		Il2CppCodeGenWriteBarrier(&___xml_1, value);
	}

	inline static int32_t get_offset_of_xmlns_2() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___xmlns_2)); }
	inline XNamespace_t1613015075 * get_xmlns_2() const { return ___xmlns_2; }
	inline XNamespace_t1613015075 ** get_address_of_xmlns_2() { return &___xmlns_2; }
	inline void set_xmlns_2(XNamespace_t1613015075 * value)
	{
		___xmlns_2 = value;
		Il2CppCodeGenWriteBarrier(&___xmlns_2, value);
	}

	inline static int32_t get_offset_of_nstable_3() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___nstable_3)); }
	inline Dictionary_2_t3527794337 * get_nstable_3() const { return ___nstable_3; }
	inline Dictionary_2_t3527794337 ** get_address_of_nstable_3() { return &___nstable_3; }
	inline void set_nstable_3(Dictionary_2_t3527794337 * value)
	{
		___nstable_3 = value;
		Il2CppCodeGenWriteBarrier(&___nstable_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
