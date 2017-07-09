#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XObject3550811009.h"

// System.Xml.Linq.XAttribute[]
struct XAttributeU5BU5D_t805402427;
// System.Xml.Linq.XName
struct XName_t785190363;
// System.String
struct String_t;
// System.Xml.Linq.XAttribute
struct XAttribute_t3858477518;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XAttribute
struct  XAttribute_t3858477518  : public XObject_t3550811009
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_t785190363 * ___name_5;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_6;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_t3858477518 * ___next_7;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::previous
	XAttribute_t3858477518 * ___previous_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___name_5)); }
	inline XName_t785190363 * get_name_5() const { return ___name_5; }
	inline XName_t785190363 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t785190363 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier(&___value_6, value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___next_7)); }
	inline XAttribute_t3858477518 * get_next_7() const { return ___next_7; }
	inline XAttribute_t3858477518 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XAttribute_t3858477518 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier(&___next_7, value);
	}

	inline static int32_t get_offset_of_previous_8() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___previous_8)); }
	inline XAttribute_t3858477518 * get_previous_8() const { return ___previous_8; }
	inline XAttribute_t3858477518 ** get_address_of_previous_8() { return &___previous_8; }
	inline void set_previous_8(XAttribute_t3858477518 * value)
	{
		___previous_8 = value;
		Il2CppCodeGenWriteBarrier(&___previous_8, value);
	}
};

struct XAttribute_t3858477518_StaticFields
{
public:
	// System.Xml.Linq.XAttribute[] System.Xml.Linq.XAttribute::empty_array
	XAttributeU5BU5D_t805402427* ___empty_array_4;
	// System.Char[] System.Xml.Linq.XAttribute::escapeChars
	CharU5BU5D_t1328083999* ___escapeChars_9;

public:
	inline static int32_t get_offset_of_empty_array_4() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518_StaticFields, ___empty_array_4)); }
	inline XAttributeU5BU5D_t805402427* get_empty_array_4() const { return ___empty_array_4; }
	inline XAttributeU5BU5D_t805402427** get_address_of_empty_array_4() { return &___empty_array_4; }
	inline void set_empty_array_4(XAttributeU5BU5D_t805402427* value)
	{
		___empty_array_4 = value;
		Il2CppCodeGenWriteBarrier(&___empty_array_4, value);
	}

	inline static int32_t get_offset_of_escapeChars_9() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518_StaticFields, ___escapeChars_9)); }
	inline CharU5BU5D_t1328083999* get_escapeChars_9() const { return ___escapeChars_9; }
	inline CharU5BU5D_t1328083999** get_address_of_escapeChars_9() { return &___escapeChars_9; }
	inline void set_escapeChars_9(CharU5BU5D_t1328083999* value)
	{
		___escapeChars_9 = value;
		Il2CppCodeGenWriteBarrier(&___escapeChars_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
