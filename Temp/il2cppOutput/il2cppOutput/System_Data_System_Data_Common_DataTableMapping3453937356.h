#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_MarshalByRefObject1285298191.h"

// System.String
struct String_t;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t3025014470;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t3453937356  : public MarshalByRefObject_t1285298191
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t3025014470 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t3453937356, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___sourceTable_1, value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t3453937356, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetTable_2, value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t3453937356, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t3025014470 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t3025014470 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t3025014470 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier(&___columnMappings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
