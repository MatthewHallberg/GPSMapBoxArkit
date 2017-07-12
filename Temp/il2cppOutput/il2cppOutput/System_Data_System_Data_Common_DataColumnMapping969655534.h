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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMapping
struct  DataColumnMapping_t969655534  : public MarshalByRefObject_t1285298191
{
public:
	// System.String System.Data.Common.DataColumnMapping::sourceColumn
	String_t* ___sourceColumn_1;
	// System.String System.Data.Common.DataColumnMapping::dataSetColumn
	String_t* ___dataSetColumn_2;

public:
	inline static int32_t get_offset_of_sourceColumn_1() { return static_cast<int32_t>(offsetof(DataColumnMapping_t969655534, ___sourceColumn_1)); }
	inline String_t* get_sourceColumn_1() const { return ___sourceColumn_1; }
	inline String_t** get_address_of_sourceColumn_1() { return &___sourceColumn_1; }
	inline void set_sourceColumn_1(String_t* value)
	{
		___sourceColumn_1 = value;
		Il2CppCodeGenWriteBarrier(&___sourceColumn_1, value);
	}

	inline static int32_t get_offset_of_dataSetColumn_2() { return static_cast<int32_t>(offsetof(DataColumnMapping_t969655534, ___dataSetColumn_2)); }
	inline String_t* get_dataSetColumn_2() const { return ___dataSetColumn_2; }
	inline String_t** get_address_of_dataSetColumn_2() { return &___dataSetColumn_2; }
	inline void set_dataSetColumn_2(String_t* value)
	{
		___dataSetColumn_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetColumn_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
