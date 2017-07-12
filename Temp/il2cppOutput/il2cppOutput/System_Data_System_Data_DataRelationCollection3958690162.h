#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_InternalDataCollectionBase623571698.h"

// System.Data.DataRelation
struct DataRelation_t790111712;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t3958690162  : public InternalDataCollectionBase_t623571698
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t790111712 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t790626706 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3958690162, ___inTransition_2)); }
	inline DataRelation_t790111712 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t790111712 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t790111712 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier(&___inTransition_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3958690162, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3958690162, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
