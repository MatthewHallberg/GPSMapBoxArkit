#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t3839138046 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t3839138046_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t3839138046  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t3839138046  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t3839138046  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t3839138046  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t3839138046  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046_StaticFields, ___False_2)); }
	inline SqlBoolean_t3839138046  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t3839138046 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t3839138046  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046_StaticFields, ___Null_3)); }
	inline SqlBoolean_t3839138046  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t3839138046 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t3839138046  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046_StaticFields, ___One_4)); }
	inline SqlBoolean_t3839138046  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t3839138046 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t3839138046  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046_StaticFields, ___True_5)); }
	inline SqlBoolean_t3839138046  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t3839138046 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t3839138046  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t3839138046_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t3839138046  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t3839138046 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t3839138046  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t3839138046_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t3839138046_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
