#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_InternalDataCollectionBase623571698.h"

// System.Data.DataSet
struct DataSet_t3097402844;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t787171642  : public InternalDataCollectionBase_t623571698
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3097402844 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t790626706 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t790626706 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___dataSet_2)); }
	inline DataSet_t3097402844 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3097402844 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3097402844 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_2, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_3, value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanging_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
