#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XContainer1445911831.h"

// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t845948095;
// System.Xml.Linq.XName
struct XName_t785190363;
// System.Xml.Linq.XAttribute
struct XAttribute_t3858477518;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement
struct  XElement_t553821050  : public XContainer_t1445911831
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t785190363 * ___name_11;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_first
	XAttribute_t3858477518 * ___attr_first_12;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_last
	XAttribute_t3858477518 * ___attr_last_13;
	// System.Boolean System.Xml.Linq.XElement::explicit_is_empty
	bool ___explicit_is_empty_14;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___name_11)); }
	inline XName_t785190363 * get_name_11() const { return ___name_11; }
	inline XName_t785190363 ** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(XName_t785190363 * value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_attr_first_12() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___attr_first_12)); }
	inline XAttribute_t3858477518 * get_attr_first_12() const { return ___attr_first_12; }
	inline XAttribute_t3858477518 ** get_address_of_attr_first_12() { return &___attr_first_12; }
	inline void set_attr_first_12(XAttribute_t3858477518 * value)
	{
		___attr_first_12 = value;
		Il2CppCodeGenWriteBarrier(&___attr_first_12, value);
	}

	inline static int32_t get_offset_of_attr_last_13() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___attr_last_13)); }
	inline XAttribute_t3858477518 * get_attr_last_13() const { return ___attr_last_13; }
	inline XAttribute_t3858477518 ** get_address_of_attr_last_13() { return &___attr_last_13; }
	inline void set_attr_last_13(XAttribute_t3858477518 * value)
	{
		___attr_last_13 = value;
		Il2CppCodeGenWriteBarrier(&___attr_last_13, value);
	}

	inline static int32_t get_offset_of_explicit_is_empty_14() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___explicit_is_empty_14)); }
	inline bool get_explicit_is_empty_14() const { return ___explicit_is_empty_14; }
	inline bool* get_address_of_explicit_is_empty_14() { return &___explicit_is_empty_14; }
	inline void set_explicit_is_empty_14(bool value)
	{
		___explicit_is_empty_14 = value;
	}
};

struct XElement_t553821050_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	Il2CppObject* ___emptySequence_10;

public:
	inline static int32_t get_offset_of_emptySequence_10() { return static_cast<int32_t>(offsetof(XElement_t553821050_StaticFields, ___emptySequence_10)); }
	inline Il2CppObject* get_emptySequence_10() const { return ___emptySequence_10; }
	inline Il2CppObject** get_address_of_emptySequence_10() { return &___emptySequence_10; }
	inline void set_emptySequence_10(Il2CppObject* value)
	{
		___emptySequence_10 = value;
		Il2CppCodeGenWriteBarrier(&___emptySequence_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
