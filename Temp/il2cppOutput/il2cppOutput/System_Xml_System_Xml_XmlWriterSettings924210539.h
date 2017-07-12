#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_ConformanceLevel3761201363.h"
#include "System_Xml_System_Xml_NewLineHandling1737195169.h"
#include "System_Xml_System_Xml_XmlOutputMethod2267235953.h"
#include "System_Xml_System_Xml_NamespaceHandling1452270444.h"

// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t924210539  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t663144255 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::<NamespaceHandling>k__BackingField
	int32_t ___U3CNamespaceHandlingU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___encoding_3)); }
	inline Encoding_t663144255 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t663144255 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t663144255 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_3, value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier(&___indentChars_5, value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier(&___newLineChars_6, value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}

	inline static int32_t get_offset_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___U3CNamespaceHandlingU3Ek__BackingField_11)); }
	inline int32_t get_U3CNamespaceHandlingU3Ek__BackingField_11() const { return ___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return &___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline void set_U3CNamespaceHandlingU3Ek__BackingField_11(int32_t value)
	{
		___U3CNamespaceHandlingU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
