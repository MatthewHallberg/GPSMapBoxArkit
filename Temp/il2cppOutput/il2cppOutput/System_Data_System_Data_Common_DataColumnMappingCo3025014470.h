#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_MarshalByRefObject1285298191.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMappingCollection
struct  DataColumnMappingCollection_t3025014470  : public MarshalByRefObject_t1285298191
{
public:
	// System.Collections.ArrayList System.Data.Common.DataColumnMappingCollection::list
	ArrayList_t4252133567 * ___list_1;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::sourceColumns
	Hashtable_t909839986 * ___sourceColumns_2;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::dataSetColumns
	Hashtable_t909839986 * ___dataSetColumns_3;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t3025014470, ___list_1)); }
	inline ArrayList_t4252133567 * get_list_1() const { return ___list_1; }
	inline ArrayList_t4252133567 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t4252133567 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}

	inline static int32_t get_offset_of_sourceColumns_2() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t3025014470, ___sourceColumns_2)); }
	inline Hashtable_t909839986 * get_sourceColumns_2() const { return ___sourceColumns_2; }
	inline Hashtable_t909839986 ** get_address_of_sourceColumns_2() { return &___sourceColumns_2; }
	inline void set_sourceColumns_2(Hashtable_t909839986 * value)
	{
		___sourceColumns_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceColumns_2, value);
	}

	inline static int32_t get_offset_of_dataSetColumns_3() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t3025014470, ___dataSetColumns_3)); }
	inline Hashtable_t909839986 * get_dataSetColumns_3() const { return ___dataSetColumns_3; }
	inline Hashtable_t909839986 ** get_address_of_dataSetColumns_3() { return &___dataSetColumns_3; }
	inline void set_dataSetColumns_3(Hashtable_t909839986 * value)
	{
		___dataSetColumns_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetColumns_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
