#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XNode2707504214.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocumentType
struct  XDocumentType_t738990919  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XDocumentType::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XDocumentType::pubid
	String_t* ___pubid_9;
	// System.String System.Xml.Linq.XDocumentType::sysid
	String_t* ___sysid_10;
	// System.String System.Xml.Linq.XDocumentType::intSubset
	String_t* ___intSubset_11;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}

	inline static int32_t get_offset_of_pubid_9() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___pubid_9)); }
	inline String_t* get_pubid_9() const { return ___pubid_9; }
	inline String_t** get_address_of_pubid_9() { return &___pubid_9; }
	inline void set_pubid_9(String_t* value)
	{
		___pubid_9 = value;
		Il2CppCodeGenWriteBarrier(&___pubid_9, value);
	}

	inline static int32_t get_offset_of_sysid_10() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___sysid_10)); }
	inline String_t* get_sysid_10() const { return ___sysid_10; }
	inline String_t** get_address_of_sysid_10() { return &___sysid_10; }
	inline void set_sysid_10(String_t* value)
	{
		___sysid_10 = value;
		Il2CppCodeGenWriteBarrier(&___sysid_10, value);
	}

	inline static int32_t get_offset_of_intSubset_11() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___intSubset_11)); }
	inline String_t* get_intSubset_11() const { return ___intSubset_11; }
	inline String_t** get_address_of_intSubset_11() { return &___intSubset_11; }
	inline void set_intSubset_11(String_t* value)
	{
		___intSubset_11 = value;
		Il2CppCodeGenWriteBarrier(&___intSubset_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
