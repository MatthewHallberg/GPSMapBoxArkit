#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlLinkedNode1287616130.h"

// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlEntityReference
struct  XmlEntityReference_t3053868353  : public XmlLinkedNode_t1287616130
{
public:
	// System.String System.Xml.XmlEntityReference::entityName
	String_t* ___entityName_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::lastLinkedChild
	XmlLinkedNode_t1287616130 * ___lastLinkedChild_8;

public:
	inline static int32_t get_offset_of_entityName_7() { return static_cast<int32_t>(offsetof(XmlEntityReference_t3053868353, ___entityName_7)); }
	inline String_t* get_entityName_7() const { return ___entityName_7; }
	inline String_t** get_address_of_entityName_7() { return &___entityName_7; }
	inline void set_entityName_7(String_t* value)
	{
		___entityName_7 = value;
		Il2CppCodeGenWriteBarrier(&___entityName_7, value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlEntityReference_t3053868353, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t1287616130 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t1287616130 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t1287616130 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
