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

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataColumnCollection
struct DataColumnCollection_t195763618;
// System.Data.ConstraintCollection
struct ConstraintCollection_t4088681537;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.Data.UniqueConstraint
struct UniqueConstraint_t3624508568;
// System.Data.DataRowCollection
struct DataRowCollection_t111352322;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1684492161;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.Common.RecordCache
struct RecordCache_t828614321;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t3436675734;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t167053918;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t2361045790;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t3267612424  : public MarshalByValueComponent_t3997823175
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t3097402844 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t195763618 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t4088681537 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t2281048903 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t3500843524 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t3958690162 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t3958690162 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t3624508568 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t111352322 * ____rows_16;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	Il2CppObject * ____site_17;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_18;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_19;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_20;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_21;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t1684492161 * ____rowBuilder_22;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t4252133567 * ____indexes_23;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t828614321 * ____recordCache_24;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_25;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_26;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_27;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t3166009492 * ____propertyDescriptorsCache_28;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t1080903261* ____latestPrimaryKeyCols_31;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3318761029* ___empty_rows_32;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_33;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t3436675734 * ___ColumnChanged_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t3436675734 * ___ColumnChanging_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t167053918 * ___RowChanged_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t167053918 * ___RowChanging_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t167053918 * ___RowDeleted_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t167053918 * ___RowDeleting_40;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t2361045790 * ___TableNewRow_41;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___dataSet_3)); }
	inline DataSet_t3097402844 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t3097402844 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t3097402844 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_3, value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____columnCollection_5)); }
	inline DataColumnCollection_t195763618 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t195763618 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t195763618 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier(&____columnCollection_5, value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____constraintCollection_6)); }
	inline ConstraintCollection_t4088681537 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t4088681537 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t4088681537 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier(&____constraintCollection_6, value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier(&____displayExpression_7, value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____extendedProperties_8)); }
	inline PropertyCollection_t2281048903 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t2281048903 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t2281048903 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier(&____extendedProperties_8, value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____locale_9)); }
	inline CultureInfo_t3500843524 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t3500843524 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t3500843524 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier(&____locale_9, value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier(&____nameSpace_11, value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____childRelations_12)); }
	inline DataRelationCollection_t3958690162 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t3958690162 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t3958690162 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier(&____childRelations_12, value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____parentRelations_13)); }
	inline DataRelationCollection_t3958690162 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t3958690162 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t3958690162 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier(&____parentRelations_13, value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_14, value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t3624508568 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t3624508568 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t3624508568 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier(&____primaryKeyConstraint_15, value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____rows_16)); }
	inline DataRowCollection_t111352322 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t111352322 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t111352322 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier(&____rows_16, value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____site_17)); }
	inline Il2CppObject * get__site_17() const { return ____site_17; }
	inline Il2CppObject ** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(Il2CppObject * value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier(&____site_17, value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier(&____tableName_18, value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___enforceConstraints_21)); }
	inline bool get_enforceConstraints_21() const { return ___enforceConstraints_21; }
	inline bool* get_address_of_enforceConstraints_21() { return &___enforceConstraints_21; }
	inline void set_enforceConstraints_21(bool value)
	{
		___enforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_22() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____rowBuilder_22)); }
	inline DataRowBuilder_t1684492161 * get__rowBuilder_22() const { return ____rowBuilder_22; }
	inline DataRowBuilder_t1684492161 ** get_address_of__rowBuilder_22() { return &____rowBuilder_22; }
	inline void set__rowBuilder_22(DataRowBuilder_t1684492161 * value)
	{
		____rowBuilder_22 = value;
		Il2CppCodeGenWriteBarrier(&____rowBuilder_22, value);
	}

	inline static int32_t get_offset_of__indexes_23() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____indexes_23)); }
	inline ArrayList_t4252133567 * get__indexes_23() const { return ____indexes_23; }
	inline ArrayList_t4252133567 ** get_address_of__indexes_23() { return &____indexes_23; }
	inline void set__indexes_23(ArrayList_t4252133567 * value)
	{
		____indexes_23 = value;
		Il2CppCodeGenWriteBarrier(&____indexes_23, value);
	}

	inline static int32_t get_offset_of__recordCache_24() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____recordCache_24)); }
	inline RecordCache_t828614321 * get__recordCache_24() const { return ____recordCache_24; }
	inline RecordCache_t828614321 ** get_address_of__recordCache_24() { return &____recordCache_24; }
	inline void set__recordCache_24(RecordCache_t828614321 * value)
	{
		____recordCache_24 = value;
		Il2CppCodeGenWriteBarrier(&____recordCache_24, value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_25() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____defaultValuesRowIndex_25)); }
	inline int32_t get__defaultValuesRowIndex_25() const { return ____defaultValuesRowIndex_25; }
	inline int32_t* get_address_of__defaultValuesRowIndex_25() { return &____defaultValuesRowIndex_25; }
	inline void set__defaultValuesRowIndex_25(int32_t value)
	{
		____defaultValuesRowIndex_25 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_26() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___fInitInProgress_26)); }
	inline bool get_fInitInProgress_26() const { return ___fInitInProgress_26; }
	inline bool* get_address_of_fInitInProgress_26() { return &___fInitInProgress_26; }
	inline void set_fInitInProgress_26(bool value)
	{
		___fInitInProgress_26 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_27() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____virginCaseSensitive_27)); }
	inline bool get__virginCaseSensitive_27() const { return ____virginCaseSensitive_27; }
	inline bool* get_address_of__virginCaseSensitive_27() { return &____virginCaseSensitive_27; }
	inline void set__virginCaseSensitive_27(bool value)
	{
		____virginCaseSensitive_27 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_28() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____propertyDescriptorsCache_28)); }
	inline PropertyDescriptorCollection_t3166009492 * get__propertyDescriptorsCache_28() const { return ____propertyDescriptorsCache_28; }
	inline PropertyDescriptorCollection_t3166009492 ** get_address_of__propertyDescriptorsCache_28() { return &____propertyDescriptorsCache_28; }
	inline void set__propertyDescriptorsCache_28(PropertyDescriptorCollection_t3166009492 * value)
	{
		____propertyDescriptorsCache_28 = value;
		Il2CppCodeGenWriteBarrier(&____propertyDescriptorsCache_28, value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_31() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ____latestPrimaryKeyCols_31)); }
	inline DataColumnU5BU5D_t1080903261* get__latestPrimaryKeyCols_31() const { return ____latestPrimaryKeyCols_31; }
	inline DataColumnU5BU5D_t1080903261** get_address_of__latestPrimaryKeyCols_31() { return &____latestPrimaryKeyCols_31; }
	inline void set__latestPrimaryKeyCols_31(DataColumnU5BU5D_t1080903261* value)
	{
		____latestPrimaryKeyCols_31 = value;
		Il2CppCodeGenWriteBarrier(&____latestPrimaryKeyCols_31, value);
	}

	inline static int32_t get_offset_of_empty_rows_32() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___empty_rows_32)); }
	inline DataRowU5BU5D_t3318761029* get_empty_rows_32() const { return ___empty_rows_32; }
	inline DataRowU5BU5D_t3318761029** get_address_of_empty_rows_32() { return &___empty_rows_32; }
	inline void set_empty_rows_32(DataRowU5BU5D_t3318761029* value)
	{
		___empty_rows_32 = value;
		Il2CppCodeGenWriteBarrier(&___empty_rows_32, value);
	}

	inline static int32_t get_offset_of_tableInitialized_33() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___tableInitialized_33)); }
	inline bool get_tableInitialized_33() const { return ___tableInitialized_33; }
	inline bool* get_address_of_tableInitialized_33() { return &___tableInitialized_33; }
	inline void set_tableInitialized_33(bool value)
	{
		___tableInitialized_33 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_34() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___remotingFormat_34)); }
	inline int32_t get_remotingFormat_34() const { return ___remotingFormat_34; }
	inline int32_t* get_address_of_remotingFormat_34() { return &___remotingFormat_34; }
	inline void set_remotingFormat_34(int32_t value)
	{
		___remotingFormat_34 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_35() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___ColumnChanged_35)); }
	inline DataColumnChangeEventHandler_t3436675734 * get_ColumnChanged_35() const { return ___ColumnChanged_35; }
	inline DataColumnChangeEventHandler_t3436675734 ** get_address_of_ColumnChanged_35() { return &___ColumnChanged_35; }
	inline void set_ColumnChanged_35(DataColumnChangeEventHandler_t3436675734 * value)
	{
		___ColumnChanged_35 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanged_35, value);
	}

	inline static int32_t get_offset_of_ColumnChanging_36() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___ColumnChanging_36)); }
	inline DataColumnChangeEventHandler_t3436675734 * get_ColumnChanging_36() const { return ___ColumnChanging_36; }
	inline DataColumnChangeEventHandler_t3436675734 ** get_address_of_ColumnChanging_36() { return &___ColumnChanging_36; }
	inline void set_ColumnChanging_36(DataColumnChangeEventHandler_t3436675734 * value)
	{
		___ColumnChanging_36 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanging_36, value);
	}

	inline static int32_t get_offset_of_RowChanged_37() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___RowChanged_37)); }
	inline DataRowChangeEventHandler_t167053918 * get_RowChanged_37() const { return ___RowChanged_37; }
	inline DataRowChangeEventHandler_t167053918 ** get_address_of_RowChanged_37() { return &___RowChanged_37; }
	inline void set_RowChanged_37(DataRowChangeEventHandler_t167053918 * value)
	{
		___RowChanged_37 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanged_37, value);
	}

	inline static int32_t get_offset_of_RowChanging_38() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___RowChanging_38)); }
	inline DataRowChangeEventHandler_t167053918 * get_RowChanging_38() const { return ___RowChanging_38; }
	inline DataRowChangeEventHandler_t167053918 ** get_address_of_RowChanging_38() { return &___RowChanging_38; }
	inline void set_RowChanging_38(DataRowChangeEventHandler_t167053918 * value)
	{
		___RowChanging_38 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanging_38, value);
	}

	inline static int32_t get_offset_of_RowDeleted_39() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___RowDeleted_39)); }
	inline DataRowChangeEventHandler_t167053918 * get_RowDeleted_39() const { return ___RowDeleted_39; }
	inline DataRowChangeEventHandler_t167053918 ** get_address_of_RowDeleted_39() { return &___RowDeleted_39; }
	inline void set_RowDeleted_39(DataRowChangeEventHandler_t167053918 * value)
	{
		___RowDeleted_39 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleted_39, value);
	}

	inline static int32_t get_offset_of_RowDeleting_40() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___RowDeleting_40)); }
	inline DataRowChangeEventHandler_t167053918 * get_RowDeleting_40() const { return ___RowDeleting_40; }
	inline DataRowChangeEventHandler_t167053918 ** get_address_of_RowDeleting_40() { return &___RowDeleting_40; }
	inline void set_RowDeleting_40(DataRowChangeEventHandler_t167053918 * value)
	{
		___RowDeleting_40 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleting_40, value);
	}

	inline static int32_t get_offset_of_TableNewRow_41() { return static_cast<int32_t>(offsetof(DataTable_t3267612424, ___TableNewRow_41)); }
	inline DataTableNewRowEventHandler_t2361045790 * get_TableNewRow_41() const { return ___TableNewRow_41; }
	inline DataTableNewRowEventHandler_t2361045790 ** get_address_of_TableNewRow_41() { return &___TableNewRow_41; }
	inline void set_TableNewRow_41(DataTableNewRowEventHandler_t2361045790 * value)
	{
		___TableNewRow_41 = value;
		Il2CppCodeGenWriteBarrier(&___TableNewRow_41, value);
	}
};

struct DataTable_t3267612424_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t1080903261* ____emptyColumnArray_29;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t1803876613 * ___SortRegex_30;

public:
	inline static int32_t get_offset_of__emptyColumnArray_29() { return static_cast<int32_t>(offsetof(DataTable_t3267612424_StaticFields, ____emptyColumnArray_29)); }
	inline DataColumnU5BU5D_t1080903261* get__emptyColumnArray_29() const { return ____emptyColumnArray_29; }
	inline DataColumnU5BU5D_t1080903261** get_address_of__emptyColumnArray_29() { return &____emptyColumnArray_29; }
	inline void set__emptyColumnArray_29(DataColumnU5BU5D_t1080903261* value)
	{
		____emptyColumnArray_29 = value;
		Il2CppCodeGenWriteBarrier(&____emptyColumnArray_29, value);
	}

	inline static int32_t get_offset_of_SortRegex_30() { return static_cast<int32_t>(offsetof(DataTable_t3267612424_StaticFields, ___SortRegex_30)); }
	inline Regex_t1803876613 * get_SortRegex_30() const { return ___SortRegex_30; }
	inline Regex_t1803876613 ** get_address_of_SortRegex_30() { return &___SortRegex_30; }
	inline void set_SortRegex_30(Regex_t1803876613 * value)
	{
		___SortRegex_30 = value;
		Il2CppCodeGenWriteBarrier(&___SortRegex_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
