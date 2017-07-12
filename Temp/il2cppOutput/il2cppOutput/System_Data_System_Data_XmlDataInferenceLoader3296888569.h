#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.TableMappingCollection
struct TableMappingCollection_t837861354;
// System.Data.RelationStructureCollection
struct RelationStructureCollection_t827821361;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataInferenceLoader
struct  XmlDataInferenceLoader_t3296888569  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDataInferenceLoader::dataset
	DataSet_t3097402844 * ___dataset_0;
	// System.Xml.XmlDocument System.Data.XmlDataInferenceLoader::document
	XmlDocument_t3649534162 * ___document_1;
	// System.Data.XmlReadMode System.Data.XmlDataInferenceLoader::mode
	int32_t ___mode_2;
	// System.Collections.ArrayList System.Data.XmlDataInferenceLoader::ignoredNamespaces
	ArrayList_t4252133567 * ___ignoredNamespaces_3;
	// System.Data.TableMappingCollection System.Data.XmlDataInferenceLoader::tables
	TableMappingCollection_t837861354 * ___tables_4;
	// System.Data.RelationStructureCollection System.Data.XmlDataInferenceLoader::relations
	RelationStructureCollection_t827821361 * ___relations_5;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___dataset_0)); }
	inline DataSet_t3097402844 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t3097402844 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t3097402844 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_0, value);
	}

	inline static int32_t get_offset_of_document_1() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___document_1)); }
	inline XmlDocument_t3649534162 * get_document_1() const { return ___document_1; }
	inline XmlDocument_t3649534162 ** get_address_of_document_1() { return &___document_1; }
	inline void set_document_1(XmlDocument_t3649534162 * value)
	{
		___document_1 = value;
		Il2CppCodeGenWriteBarrier(&___document_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_ignoredNamespaces_3() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___ignoredNamespaces_3)); }
	inline ArrayList_t4252133567 * get_ignoredNamespaces_3() const { return ___ignoredNamespaces_3; }
	inline ArrayList_t4252133567 ** get_address_of_ignoredNamespaces_3() { return &___ignoredNamespaces_3; }
	inline void set_ignoredNamespaces_3(ArrayList_t4252133567 * value)
	{
		___ignoredNamespaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___ignoredNamespaces_3, value);
	}

	inline static int32_t get_offset_of_tables_4() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___tables_4)); }
	inline TableMappingCollection_t837861354 * get_tables_4() const { return ___tables_4; }
	inline TableMappingCollection_t837861354 ** get_address_of_tables_4() { return &___tables_4; }
	inline void set_tables_4(TableMappingCollection_t837861354 * value)
	{
		___tables_4 = value;
		Il2CppCodeGenWriteBarrier(&___tables_4, value);
	}

	inline static int32_t get_offset_of_relations_5() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t3296888569, ___relations_5)); }
	inline RelationStructureCollection_t827821361 * get_relations_5() const { return ___relations_5; }
	inline RelationStructureCollection_t827821361 ** get_address_of_relations_5() { return &___relations_5; }
	inline void set_relations_5(RelationStructureCollection_t827821361 * value)
	{
		___relations_5 = value;
		Il2CppCodeGenWriteBarrier(&___relations_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
