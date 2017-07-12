#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlNode616554813.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNotation
struct  XmlNotation_t206561061  : public XmlNode_t616554813
{
public:
	// System.String System.Xml.XmlNotation::localName
	String_t* ___localName_6;
	// System.String System.Xml.XmlNotation::publicId
	String_t* ___publicId_7;
	// System.String System.Xml.XmlNotation::systemId
	String_t* ___systemId_8;
	// System.String System.Xml.XmlNotation::prefix
	String_t* ___prefix_9;

public:
	inline static int32_t get_offset_of_localName_6() { return static_cast<int32_t>(offsetof(XmlNotation_t206561061, ___localName_6)); }
	inline String_t* get_localName_6() const { return ___localName_6; }
	inline String_t** get_address_of_localName_6() { return &___localName_6; }
	inline void set_localName_6(String_t* value)
	{
		___localName_6 = value;
		Il2CppCodeGenWriteBarrier(&___localName_6, value);
	}

	inline static int32_t get_offset_of_publicId_7() { return static_cast<int32_t>(offsetof(XmlNotation_t206561061, ___publicId_7)); }
	inline String_t* get_publicId_7() const { return ___publicId_7; }
	inline String_t** get_address_of_publicId_7() { return &___publicId_7; }
	inline void set_publicId_7(String_t* value)
	{
		___publicId_7 = value;
		Il2CppCodeGenWriteBarrier(&___publicId_7, value);
	}

	inline static int32_t get_offset_of_systemId_8() { return static_cast<int32_t>(offsetof(XmlNotation_t206561061, ___systemId_8)); }
	inline String_t* get_systemId_8() const { return ___systemId_8; }
	inline String_t** get_address_of_systemId_8() { return &___systemId_8; }
	inline void set_systemId_8(String_t* value)
	{
		___systemId_8 = value;
		Il2CppCodeGenWriteBarrier(&___systemId_8, value);
	}

	inline static int32_t get_offset_of_prefix_9() { return static_cast<int32_t>(offsetof(XmlNotation_t206561061, ___prefix_9)); }
	inline String_t* get_prefix_9() const { return ___prefix_9; }
	inline String_t** get_address_of_prefix_9() { return &___prefix_9; }
	inline void set_prefix_9(String_t* value)
	{
		___prefix_9 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
