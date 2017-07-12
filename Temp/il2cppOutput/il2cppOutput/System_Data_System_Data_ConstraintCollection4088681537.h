#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_InternalDataCollectionBase623571698.h"

// System.Data.DataTable
struct DataTable_t3267612424;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t4088681537  : public InternalDataCollectionBase_t623571698
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t3267612424 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t790626706 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t4088681537, ___table_2)); }
	inline DataTable_t3267612424 * get_table_2() const { return ___table_2; }
	inline DataTable_t3267612424 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t3267612424 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier(&___table_2, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t4088681537, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
