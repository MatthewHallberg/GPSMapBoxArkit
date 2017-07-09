#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_MarshalByValueCompone3997823175.h"
#include "System_Data_System_Data_SerializationFormat2880076079.h"

// System.String
struct String_t;
// System.Data.DataTableCollection
struct DataTableCollection_t787171642;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t2137065232;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t790137133;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t3097402844  : public MarshalByValueComponent_t3997823175
{
public:
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_3;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_4;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_5;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_6;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_7;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t787171642 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t3958690162 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t2281048903 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t3500843524 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t2137065232 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_13;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_14;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t790137133 * ___MergeFailed_15;

public:
	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetName_3, value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier(&____namespace_4, value);
	}

	inline static int32_t get_offset_of_prefix_5() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___prefix_5)); }
	inline String_t* get_prefix_5() const { return ___prefix_5; }
	inline String_t** get_address_of_prefix_5() { return &___prefix_5; }
	inline void set_prefix_5(String_t* value)
	{
		___prefix_5 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_5, value);
	}

	inline static int32_t get_offset_of_caseSensitive_6() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___caseSensitive_6)); }
	inline bool get_caseSensitive_6() const { return ___caseSensitive_6; }
	inline bool* get_address_of_caseSensitive_6() { return &___caseSensitive_6; }
	inline void set_caseSensitive_6(bool value)
	{
		___caseSensitive_6 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_7() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___enforceConstraints_7)); }
	inline bool get_enforceConstraints_7() const { return ___enforceConstraints_7; }
	inline bool* get_address_of_enforceConstraints_7() { return &___enforceConstraints_7; }
	inline void set_enforceConstraints_7(bool value)
	{
		___enforceConstraints_7 = value;
	}

	inline static int32_t get_offset_of_tableCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___tableCollection_8)); }
	inline DataTableCollection_t787171642 * get_tableCollection_8() const { return ___tableCollection_8; }
	inline DataTableCollection_t787171642 ** get_address_of_tableCollection_8() { return &___tableCollection_8; }
	inline void set_tableCollection_8(DataTableCollection_t787171642 * value)
	{
		___tableCollection_8 = value;
		Il2CppCodeGenWriteBarrier(&___tableCollection_8, value);
	}

	inline static int32_t get_offset_of_relationCollection_9() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___relationCollection_9)); }
	inline DataRelationCollection_t3958690162 * get_relationCollection_9() const { return ___relationCollection_9; }
	inline DataRelationCollection_t3958690162 ** get_address_of_relationCollection_9() { return &___relationCollection_9; }
	inline void set_relationCollection_9(DataRelationCollection_t3958690162 * value)
	{
		___relationCollection_9 = value;
		Il2CppCodeGenWriteBarrier(&___relationCollection_9, value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___properties_10)); }
	inline PropertyCollection_t2281048903 * get_properties_10() const { return ___properties_10; }
	inline PropertyCollection_t2281048903 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(PropertyCollection_t2281048903 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier(&___properties_10, value);
	}

	inline static int32_t get_offset_of_locale_11() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___locale_11)); }
	inline CultureInfo_t3500843524 * get_locale_11() const { return ___locale_11; }
	inline CultureInfo_t3500843524 ** get_address_of_locale_11() { return &___locale_11; }
	inline void set_locale_11(CultureInfo_t3500843524 * value)
	{
		___locale_11 = value;
		Il2CppCodeGenWriteBarrier(&___locale_11, value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_12() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___tableAdapterSchemaInfo_12)); }
	inline TableAdapterSchemaInfo_t2137065232 * get_tableAdapterSchemaInfo_12() const { return ___tableAdapterSchemaInfo_12; }
	inline TableAdapterSchemaInfo_t2137065232 ** get_address_of_tableAdapterSchemaInfo_12() { return &___tableAdapterSchemaInfo_12; }
	inline void set_tableAdapterSchemaInfo_12(TableAdapterSchemaInfo_t2137065232 * value)
	{
		___tableAdapterSchemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&___tableAdapterSchemaInfo_12, value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_13() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___dataSetInitialized_13)); }
	inline bool get_dataSetInitialized_13() const { return ___dataSetInitialized_13; }
	inline bool* get_address_of_dataSetInitialized_13() { return &___dataSetInitialized_13; }
	inline void set_dataSetInitialized_13(bool value)
	{
		___dataSetInitialized_13 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_14() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___remotingFormat_14)); }
	inline int32_t get_remotingFormat_14() const { return ___remotingFormat_14; }
	inline int32_t* get_address_of_remotingFormat_14() { return &___remotingFormat_14; }
	inline void set_remotingFormat_14(int32_t value)
	{
		___remotingFormat_14 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_15() { return static_cast<int32_t>(offsetof(DataSet_t3097402844, ___MergeFailed_15)); }
	inline MergeFailedEventHandler_t790137133 * get_MergeFailed_15() const { return ___MergeFailed_15; }
	inline MergeFailedEventHandler_t790137133 ** get_address_of_MergeFailed_15() { return &___MergeFailed_15; }
	inline void set_MergeFailed_15(MergeFailedEventHandler_t790137133 * value)
	{
		___MergeFailed_15 = value;
		Il2CppCodeGenWriteBarrier(&___MergeFailed_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
