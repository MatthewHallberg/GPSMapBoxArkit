#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Mono_Xml_DTDNode1758286970.h"

// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAttributeDefinition
struct  DTDAttributeDefinition_t3692870749  : public DTDNode_t1758286970
{
public:
	// System.String Mono.Xml.DTDAttributeDefinition::name
	String_t* ___name_5;
	// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::datatype
	XmlSchemaDatatype_t1195946242 * ___datatype_6;
	// System.String Mono.Xml.DTDAttributeDefinition::unresolvedDefault
	String_t* ___unresolvedDefault_7;
	// System.String Mono.Xml.DTDAttributeDefinition::resolvedDefaultValue
	String_t* ___resolvedDefaultValue_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3692870749, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_datatype_6() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3692870749, ___datatype_6)); }
	inline XmlSchemaDatatype_t1195946242 * get_datatype_6() const { return ___datatype_6; }
	inline XmlSchemaDatatype_t1195946242 ** get_address_of_datatype_6() { return &___datatype_6; }
	inline void set_datatype_6(XmlSchemaDatatype_t1195946242 * value)
	{
		___datatype_6 = value;
		Il2CppCodeGenWriteBarrier(&___datatype_6, value);
	}

	inline static int32_t get_offset_of_unresolvedDefault_7() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3692870749, ___unresolvedDefault_7)); }
	inline String_t* get_unresolvedDefault_7() const { return ___unresolvedDefault_7; }
	inline String_t** get_address_of_unresolvedDefault_7() { return &___unresolvedDefault_7; }
	inline void set_unresolvedDefault_7(String_t* value)
	{
		___unresolvedDefault_7 = value;
		Il2CppCodeGenWriteBarrier(&___unresolvedDefault_7, value);
	}

	inline static int32_t get_offset_of_resolvedDefaultValue_8() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3692870749, ___resolvedDefaultValue_8)); }
	inline String_t* get_resolvedDefaultValue_8() const { return ___resolvedDefaultValue_8; }
	inline String_t** get_address_of_resolvedDefaultValue_8() { return &___resolvedDefaultValue_8; }
	inline void set_resolvedDefaultValue_8(String_t* value)
	{
		___resolvedDefaultValue_8 = value;
		Il2CppCodeGenWriteBarrier(&___resolvedDefaultValue_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
