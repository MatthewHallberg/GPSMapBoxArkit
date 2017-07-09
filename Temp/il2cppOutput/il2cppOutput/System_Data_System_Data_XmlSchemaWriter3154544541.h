#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Data.DataTable[]
struct DataTableU5BU5D_t2488609753;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t241182369;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlSchemaWriter
struct  XmlSchemaWriter_t3154544541  : public Il2CppObject
{
public:
	// System.Xml.XmlWriter System.Data.XmlSchemaWriter::w
	XmlWriter_t1048088568 * ___w_0;
	// System.Data.DataTable[] System.Data.XmlSchemaWriter::tables
	DataTableU5BU5D_t2488609753* ___tables_1;
	// System.Data.DataRelation[] System.Data.XmlSchemaWriter::relations
	DataRelationU5BU5D_t241182369* ___relations_2;
	// System.String System.Data.XmlSchemaWriter::mainDataTable
	String_t* ___mainDataTable_3;
	// System.String System.Data.XmlSchemaWriter::dataSetName
	String_t* ___dataSetName_4;
	// System.String System.Data.XmlSchemaWriter::dataSetNamespace
	String_t* ___dataSetNamespace_5;
	// System.Data.PropertyCollection System.Data.XmlSchemaWriter::dataSetProperties
	PropertyCollection_t2281048903 * ___dataSetProperties_6;
	// System.Globalization.CultureInfo System.Data.XmlSchemaWriter::dataSetLocale
	CultureInfo_t3500843524 * ___dataSetLocale_7;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::globalTypeTables
	ArrayList_t4252133567 * ___globalTypeTables_8;
	// System.Collections.Hashtable System.Data.XmlSchemaWriter::additionalNamespaces
	Hashtable_t909839986 * ___additionalNamespaces_9;
	// System.Collections.ArrayList System.Data.XmlSchemaWriter::annotation
	ArrayList_t4252133567 * ___annotation_10;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___w_0)); }
	inline XmlWriter_t1048088568 * get_w_0() const { return ___w_0; }
	inline XmlWriter_t1048088568 ** get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(XmlWriter_t1048088568 * value)
	{
		___w_0 = value;
		Il2CppCodeGenWriteBarrier(&___w_0, value);
	}

	inline static int32_t get_offset_of_tables_1() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___tables_1)); }
	inline DataTableU5BU5D_t2488609753* get_tables_1() const { return ___tables_1; }
	inline DataTableU5BU5D_t2488609753** get_address_of_tables_1() { return &___tables_1; }
	inline void set_tables_1(DataTableU5BU5D_t2488609753* value)
	{
		___tables_1 = value;
		Il2CppCodeGenWriteBarrier(&___tables_1, value);
	}

	inline static int32_t get_offset_of_relations_2() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___relations_2)); }
	inline DataRelationU5BU5D_t241182369* get_relations_2() const { return ___relations_2; }
	inline DataRelationU5BU5D_t241182369** get_address_of_relations_2() { return &___relations_2; }
	inline void set_relations_2(DataRelationU5BU5D_t241182369* value)
	{
		___relations_2 = value;
		Il2CppCodeGenWriteBarrier(&___relations_2, value);
	}

	inline static int32_t get_offset_of_mainDataTable_3() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___mainDataTable_3)); }
	inline String_t* get_mainDataTable_3() const { return ___mainDataTable_3; }
	inline String_t** get_address_of_mainDataTable_3() { return &___mainDataTable_3; }
	inline void set_mainDataTable_3(String_t* value)
	{
		___mainDataTable_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainDataTable_3, value);
	}

	inline static int32_t get_offset_of_dataSetName_4() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___dataSetName_4)); }
	inline String_t* get_dataSetName_4() const { return ___dataSetName_4; }
	inline String_t** get_address_of_dataSetName_4() { return &___dataSetName_4; }
	inline void set_dataSetName_4(String_t* value)
	{
		___dataSetName_4 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetName_4, value);
	}

	inline static int32_t get_offset_of_dataSetNamespace_5() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___dataSetNamespace_5)); }
	inline String_t* get_dataSetNamespace_5() const { return ___dataSetNamespace_5; }
	inline String_t** get_address_of_dataSetNamespace_5() { return &___dataSetNamespace_5; }
	inline void set_dataSetNamespace_5(String_t* value)
	{
		___dataSetNamespace_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetNamespace_5, value);
	}

	inline static int32_t get_offset_of_dataSetProperties_6() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___dataSetProperties_6)); }
	inline PropertyCollection_t2281048903 * get_dataSetProperties_6() const { return ___dataSetProperties_6; }
	inline PropertyCollection_t2281048903 ** get_address_of_dataSetProperties_6() { return &___dataSetProperties_6; }
	inline void set_dataSetProperties_6(PropertyCollection_t2281048903 * value)
	{
		___dataSetProperties_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetProperties_6, value);
	}

	inline static int32_t get_offset_of_dataSetLocale_7() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___dataSetLocale_7)); }
	inline CultureInfo_t3500843524 * get_dataSetLocale_7() const { return ___dataSetLocale_7; }
	inline CultureInfo_t3500843524 ** get_address_of_dataSetLocale_7() { return &___dataSetLocale_7; }
	inline void set_dataSetLocale_7(CultureInfo_t3500843524 * value)
	{
		___dataSetLocale_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetLocale_7, value);
	}

	inline static int32_t get_offset_of_globalTypeTables_8() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___globalTypeTables_8)); }
	inline ArrayList_t4252133567 * get_globalTypeTables_8() const { return ___globalTypeTables_8; }
	inline ArrayList_t4252133567 ** get_address_of_globalTypeTables_8() { return &___globalTypeTables_8; }
	inline void set_globalTypeTables_8(ArrayList_t4252133567 * value)
	{
		___globalTypeTables_8 = value;
		Il2CppCodeGenWriteBarrier(&___globalTypeTables_8, value);
	}

	inline static int32_t get_offset_of_additionalNamespaces_9() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___additionalNamespaces_9)); }
	inline Hashtable_t909839986 * get_additionalNamespaces_9() const { return ___additionalNamespaces_9; }
	inline Hashtable_t909839986 ** get_address_of_additionalNamespaces_9() { return &___additionalNamespaces_9; }
	inline void set_additionalNamespaces_9(Hashtable_t909839986 * value)
	{
		___additionalNamespaces_9 = value;
		Il2CppCodeGenWriteBarrier(&___additionalNamespaces_9, value);
	}

	inline static int32_t get_offset_of_annotation_10() { return static_cast<int32_t>(offsetof(XmlSchemaWriter_t3154544541, ___annotation_10)); }
	inline ArrayList_t4252133567 * get_annotation_10() const { return ___annotation_10; }
	inline ArrayList_t4252133567 ** get_address_of_annotation_10() { return &___annotation_10; }
	inline void set_annotation_10(ArrayList_t4252133567 * value)
	{
		___annotation_10 = value;
		Il2CppCodeGenWriteBarrier(&___annotation_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
