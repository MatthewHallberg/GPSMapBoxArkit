#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3605390810;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2224069626;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t243645429;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3496720022;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1212505713;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t228085060;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t1113953282  : public Il2CppObject
{
public:
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t3605390810 * ___factory_0;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t2224069626 * ___elementDecls_1;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t243645429 * ___attListDecls_2;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t3496720022 * ___peDecls_3;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t1212505713 * ___entityDecls_4;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t228085060 * ___notationDecls_5;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t4252133567 * ___validationErrors_6;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t2024571559 * ___resolver_7;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t1345805268 * ___nameTable_8;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t909839986 * ___externalResources_9;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_10;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_11;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_12;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_13;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_14;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_15;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_16;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_17;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_18;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___factory_0)); }
	inline DTDAutomataFactory_t3605390810 * get_factory_0() const { return ___factory_0; }
	inline DTDAutomataFactory_t3605390810 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(DTDAutomataFactory_t3605390810 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier(&___factory_0, value);
	}

	inline static int32_t get_offset_of_elementDecls_1() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___elementDecls_1)); }
	inline DTDElementDeclarationCollection_t2224069626 * get_elementDecls_1() const { return ___elementDecls_1; }
	inline DTDElementDeclarationCollection_t2224069626 ** get_address_of_elementDecls_1() { return &___elementDecls_1; }
	inline void set_elementDecls_1(DTDElementDeclarationCollection_t2224069626 * value)
	{
		___elementDecls_1 = value;
		Il2CppCodeGenWriteBarrier(&___elementDecls_1, value);
	}

	inline static int32_t get_offset_of_attListDecls_2() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___attListDecls_2)); }
	inline DTDAttListDeclarationCollection_t243645429 * get_attListDecls_2() const { return ___attListDecls_2; }
	inline DTDAttListDeclarationCollection_t243645429 ** get_address_of_attListDecls_2() { return &___attListDecls_2; }
	inline void set_attListDecls_2(DTDAttListDeclarationCollection_t243645429 * value)
	{
		___attListDecls_2 = value;
		Il2CppCodeGenWriteBarrier(&___attListDecls_2, value);
	}

	inline static int32_t get_offset_of_peDecls_3() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___peDecls_3)); }
	inline DTDParameterEntityDeclarationCollection_t3496720022 * get_peDecls_3() const { return ___peDecls_3; }
	inline DTDParameterEntityDeclarationCollection_t3496720022 ** get_address_of_peDecls_3() { return &___peDecls_3; }
	inline void set_peDecls_3(DTDParameterEntityDeclarationCollection_t3496720022 * value)
	{
		___peDecls_3 = value;
		Il2CppCodeGenWriteBarrier(&___peDecls_3, value);
	}

	inline static int32_t get_offset_of_entityDecls_4() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___entityDecls_4)); }
	inline DTDEntityDeclarationCollection_t1212505713 * get_entityDecls_4() const { return ___entityDecls_4; }
	inline DTDEntityDeclarationCollection_t1212505713 ** get_address_of_entityDecls_4() { return &___entityDecls_4; }
	inline void set_entityDecls_4(DTDEntityDeclarationCollection_t1212505713 * value)
	{
		___entityDecls_4 = value;
		Il2CppCodeGenWriteBarrier(&___entityDecls_4, value);
	}

	inline static int32_t get_offset_of_notationDecls_5() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___notationDecls_5)); }
	inline DTDNotationDeclarationCollection_t228085060 * get_notationDecls_5() const { return ___notationDecls_5; }
	inline DTDNotationDeclarationCollection_t228085060 ** get_address_of_notationDecls_5() { return &___notationDecls_5; }
	inline void set_notationDecls_5(DTDNotationDeclarationCollection_t228085060 * value)
	{
		___notationDecls_5 = value;
		Il2CppCodeGenWriteBarrier(&___notationDecls_5, value);
	}

	inline static int32_t get_offset_of_validationErrors_6() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___validationErrors_6)); }
	inline ArrayList_t4252133567 * get_validationErrors_6() const { return ___validationErrors_6; }
	inline ArrayList_t4252133567 ** get_address_of_validationErrors_6() { return &___validationErrors_6; }
	inline void set_validationErrors_6(ArrayList_t4252133567 * value)
	{
		___validationErrors_6 = value;
		Il2CppCodeGenWriteBarrier(&___validationErrors_6, value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___resolver_7)); }
	inline XmlResolver_t2024571559 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t2024571559 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t2024571559 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_7, value);
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___nameTable_8)); }
	inline XmlNameTable_t1345805268 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t1345805268 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t1345805268 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_8, value);
	}

	inline static int32_t get_offset_of_externalResources_9() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___externalResources_9)); }
	inline Hashtable_t909839986 * get_externalResources_9() const { return ___externalResources_9; }
	inline Hashtable_t909839986 ** get_address_of_externalResources_9() { return &___externalResources_9; }
	inline void set_externalResources_9(Hashtable_t909839986 * value)
	{
		___externalResources_9 = value;
		Il2CppCodeGenWriteBarrier(&___externalResources_9, value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseURI_10, value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_publicId_12() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___publicId_12)); }
	inline String_t* get_publicId_12() const { return ___publicId_12; }
	inline String_t** get_address_of_publicId_12() { return &___publicId_12; }
	inline void set_publicId_12(String_t* value)
	{
		___publicId_12 = value;
		Il2CppCodeGenWriteBarrier(&___publicId_12, value);
	}

	inline static int32_t get_offset_of_systemId_13() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___systemId_13)); }
	inline String_t* get_systemId_13() const { return ___systemId_13; }
	inline String_t** get_address_of_systemId_13() { return &___systemId_13; }
	inline void set_systemId_13(String_t* value)
	{
		___systemId_13 = value;
		Il2CppCodeGenWriteBarrier(&___systemId_13, value);
	}

	inline static int32_t get_offset_of_intSubset_14() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___intSubset_14)); }
	inline String_t* get_intSubset_14() const { return ___intSubset_14; }
	inline String_t** get_address_of_intSubset_14() { return &___intSubset_14; }
	inline void set_intSubset_14(String_t* value)
	{
		___intSubset_14 = value;
		Il2CppCodeGenWriteBarrier(&___intSubset_14, value);
	}

	inline static int32_t get_offset_of_intSubsetHasPERef_15() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___intSubsetHasPERef_15)); }
	inline bool get_intSubsetHasPERef_15() const { return ___intSubsetHasPERef_15; }
	inline bool* get_address_of_intSubsetHasPERef_15() { return &___intSubsetHasPERef_15; }
	inline void set_intSubsetHasPERef_15(bool value)
	{
		___intSubsetHasPERef_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_lineNumber_17() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___lineNumber_17)); }
	inline int32_t get_lineNumber_17() const { return ___lineNumber_17; }
	inline int32_t* get_address_of_lineNumber_17() { return &___lineNumber_17; }
	inline void set_lineNumber_17(int32_t value)
	{
		___lineNumber_17 = value;
	}

	inline static int32_t get_offset_of_linePosition_18() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1113953282, ___linePosition_18)); }
	inline int32_t get_linePosition_18() const { return ___linePosition_18; }
	inline int32_t* get_address_of_linePosition_18() { return &___linePosition_18; }
	inline void set_linePosition_18(int32_t value)
	{
		___linePosition_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
