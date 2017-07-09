#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Constraint3084057805.h"

// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t173811822;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UniqueConstraint
struct  UniqueConstraint_t3624508568  : public Constraint_t3084057805
{
public:
	// System.Boolean System.Data.UniqueConstraint::_isPrimaryKey
	bool ____isPrimaryKey_8;
	// System.Boolean System.Data.UniqueConstraint::_belongsToCollection
	bool ____belongsToCollection_9;
	// System.Data.DataTable System.Data.UniqueConstraint::_dataTable
	DataTable_t3267612424 * ____dataTable_10;
	// System.Data.DataColumn[] System.Data.UniqueConstraint::_dataColumns
	DataColumnU5BU5D_t1080903261* ____dataColumns_11;
	// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::_childConstraint
	ForeignKeyConstraint_t173811822 * ____childConstraint_12;

public:
	inline static int32_t get_offset_of__isPrimaryKey_8() { return static_cast<int32_t>(offsetof(UniqueConstraint_t3624508568, ____isPrimaryKey_8)); }
	inline bool get__isPrimaryKey_8() const { return ____isPrimaryKey_8; }
	inline bool* get_address_of__isPrimaryKey_8() { return &____isPrimaryKey_8; }
	inline void set__isPrimaryKey_8(bool value)
	{
		____isPrimaryKey_8 = value;
	}

	inline static int32_t get_offset_of__belongsToCollection_9() { return static_cast<int32_t>(offsetof(UniqueConstraint_t3624508568, ____belongsToCollection_9)); }
	inline bool get__belongsToCollection_9() const { return ____belongsToCollection_9; }
	inline bool* get_address_of__belongsToCollection_9() { return &____belongsToCollection_9; }
	inline void set__belongsToCollection_9(bool value)
	{
		____belongsToCollection_9 = value;
	}

	inline static int32_t get_offset_of__dataTable_10() { return static_cast<int32_t>(offsetof(UniqueConstraint_t3624508568, ____dataTable_10)); }
	inline DataTable_t3267612424 * get__dataTable_10() const { return ____dataTable_10; }
	inline DataTable_t3267612424 ** get_address_of__dataTable_10() { return &____dataTable_10; }
	inline void set__dataTable_10(DataTable_t3267612424 * value)
	{
		____dataTable_10 = value;
		Il2CppCodeGenWriteBarrier(&____dataTable_10, value);
	}

	inline static int32_t get_offset_of__dataColumns_11() { return static_cast<int32_t>(offsetof(UniqueConstraint_t3624508568, ____dataColumns_11)); }
	inline DataColumnU5BU5D_t1080903261* get__dataColumns_11() const { return ____dataColumns_11; }
	inline DataColumnU5BU5D_t1080903261** get_address_of__dataColumns_11() { return &____dataColumns_11; }
	inline void set__dataColumns_11(DataColumnU5BU5D_t1080903261* value)
	{
		____dataColumns_11 = value;
		Il2CppCodeGenWriteBarrier(&____dataColumns_11, value);
	}

	inline static int32_t get_offset_of__childConstraint_12() { return static_cast<int32_t>(offsetof(UniqueConstraint_t3624508568, ____childConstraint_12)); }
	inline ForeignKeyConstraint_t173811822 * get__childConstraint_12() const { return ____childConstraint_12; }
	inline ForeignKeyConstraint_t173811822 ** get_address_of__childConstraint_12() { return &____childConstraint_12; }
	inline void set__childConstraint_12(ForeignKeyConstraint_t173811822 * value)
	{
		____childConstraint_12 = value;
		Il2CppCodeGenWriteBarrier(&____childConstraint_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
