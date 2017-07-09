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
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlEntity
struct  XmlEntity_t4027255380  : public XmlNode_t616554813
{
public:
	// System.String System.Xml.XmlEntity::name
	String_t* ___name_6;
	// System.String System.Xml.XmlEntity::NDATA
	String_t* ___NDATA_7;
	// System.String System.Xml.XmlEntity::publicId
	String_t* ___publicId_8;
	// System.String System.Xml.XmlEntity::systemId
	String_t* ___systemId_9;
	// System.String System.Xml.XmlEntity::baseUri
	String_t* ___baseUri_10;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntity::lastLinkedChild
	XmlLinkedNode_t1287616130 * ___lastLinkedChild_11;
	// System.Boolean System.Xml.XmlEntity::contentAlreadySet
	bool ___contentAlreadySet_12;

public:
	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_NDATA_7() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___NDATA_7)); }
	inline String_t* get_NDATA_7() const { return ___NDATA_7; }
	inline String_t** get_address_of_NDATA_7() { return &___NDATA_7; }
	inline void set_NDATA_7(String_t* value)
	{
		___NDATA_7 = value;
		Il2CppCodeGenWriteBarrier(&___NDATA_7, value);
	}

	inline static int32_t get_offset_of_publicId_8() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___publicId_8)); }
	inline String_t* get_publicId_8() const { return ___publicId_8; }
	inline String_t** get_address_of_publicId_8() { return &___publicId_8; }
	inline void set_publicId_8(String_t* value)
	{
		___publicId_8 = value;
		Il2CppCodeGenWriteBarrier(&___publicId_8, value);
	}

	inline static int32_t get_offset_of_systemId_9() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___systemId_9)); }
	inline String_t* get_systemId_9() const { return ___systemId_9; }
	inline String_t** get_address_of_systemId_9() { return &___systemId_9; }
	inline void set_systemId_9(String_t* value)
	{
		___systemId_9 = value;
		Il2CppCodeGenWriteBarrier(&___systemId_9, value);
	}

	inline static int32_t get_offset_of_baseUri_10() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___baseUri_10)); }
	inline String_t* get_baseUri_10() const { return ___baseUri_10; }
	inline String_t** get_address_of_baseUri_10() { return &___baseUri_10; }
	inline void set_baseUri_10(String_t* value)
	{
		___baseUri_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseUri_10, value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_11() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___lastLinkedChild_11)); }
	inline XmlLinkedNode_t1287616130 * get_lastLinkedChild_11() const { return ___lastLinkedChild_11; }
	inline XmlLinkedNode_t1287616130 ** get_address_of_lastLinkedChild_11() { return &___lastLinkedChild_11; }
	inline void set_lastLinkedChild_11(XmlLinkedNode_t1287616130 * value)
	{
		___lastLinkedChild_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_11, value);
	}

	inline static int32_t get_offset_of_contentAlreadySet_12() { return static_cast<int32_t>(offsetof(XmlEntity_t4027255380, ___contentAlreadySet_12)); }
	inline bool get_contentAlreadySet_12() const { return ___contentAlreadySet_12; }
	inline bool* get_address_of_contentAlreadySet_12() { return &___contentAlreadySet_12; }
	inline void set_contentAlreadySet_12(bool value)
	{
		___contentAlreadySet_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
