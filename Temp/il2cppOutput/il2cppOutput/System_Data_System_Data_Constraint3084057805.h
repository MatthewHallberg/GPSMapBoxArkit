#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1298116880;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Data.Common.Index
struct Index_t1936973642;
// System.Data.ConstraintCollection
struct ConstraintCollection_t4088681537;
// System.Data.DataSet
struct DataSet_t3097402844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t3084057805  : public Il2CppObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t1298116880 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t2281048903 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t1936973642 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t4088681537 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t3097402844 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ___events_1)); }
	inline EventHandlerList_t1298116880 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t1298116880 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t1298116880 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier(&___events_1, value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier(&____constraintName_2, value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ____properties_3)); }
	inline PropertyCollection_t2281048903 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t2281048903 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t2281048903 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier(&____properties_3, value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ____index_4)); }
	inline Index_t1936973642 * get__index_4() const { return ____index_4; }
	inline Index_t1936973642 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t1936973642 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier(&____index_4, value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ____constraintCollection_5)); }
	inline ConstraintCollection_t4088681537 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t4088681537 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t4088681537 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier(&____constraintCollection_5, value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ___dataSet_6)); }
	inline DataSet_t3097402844 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t3097402844 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t3097402844 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_6, value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t3084057805, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t3084057805_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	Il2CppObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t3084057805_StaticFields, ___beforeConstraintNameChange_0)); }
	inline Il2CppObject * get_beforeConstraintNameChange_0() const { return ___beforeConstraintNameChange_0; }
	inline Il2CppObject ** get_address_of_beforeConstraintNameChange_0() { return &___beforeConstraintNameChange_0; }
	inline void set_beforeConstraintNameChange_0(Il2CppObject * value)
	{
		___beforeConstraintNameChange_0 = value;
		Il2CppCodeGenWriteBarrier(&___beforeConstraintNameChange_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
