#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_GenerateMethodsType120596799.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbSourceMethodInfo
struct  DbSourceMethodInfo_t4064904528  : public Il2CppObject
{
public:
	// System.Data.GenerateMethodsType System.Data.DbSourceMethodInfo::MethodType
	int32_t ___MethodType_0;
	// System.String System.Data.DbSourceMethodInfo::Name
	String_t* ___Name_1;
	// System.String System.Data.DbSourceMethodInfo::Modifier
	String_t* ___Modifier_2;
	// System.String System.Data.DbSourceMethodInfo::QueryType
	String_t* ___QueryType_3;
	// System.String System.Data.DbSourceMethodInfo::ScalarCallRetval
	String_t* ___ScalarCallRetval_4;

public:
	inline static int32_t get_offset_of_MethodType_0() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t4064904528, ___MethodType_0)); }
	inline int32_t get_MethodType_0() const { return ___MethodType_0; }
	inline int32_t* get_address_of_MethodType_0() { return &___MethodType_0; }
	inline void set_MethodType_0(int32_t value)
	{
		___MethodType_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t4064904528, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Modifier_2() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t4064904528, ___Modifier_2)); }
	inline String_t* get_Modifier_2() const { return ___Modifier_2; }
	inline String_t** get_address_of_Modifier_2() { return &___Modifier_2; }
	inline void set_Modifier_2(String_t* value)
	{
		___Modifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___Modifier_2, value);
	}

	inline static int32_t get_offset_of_QueryType_3() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t4064904528, ___QueryType_3)); }
	inline String_t* get_QueryType_3() const { return ___QueryType_3; }
	inline String_t** get_address_of_QueryType_3() { return &___QueryType_3; }
	inline void set_QueryType_3(String_t* value)
	{
		___QueryType_3 = value;
		Il2CppCodeGenWriteBarrier(&___QueryType_3, value);
	}

	inline static int32_t get_offset_of_ScalarCallRetval_4() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t4064904528, ___ScalarCallRetval_4)); }
	inline String_t* get_ScalarCallRetval_4() const { return ___ScalarCallRetval_4; }
	inline String_t** get_address_of_ScalarCallRetval_4() { return &___ScalarCallRetval_4; }
	inline void set_ScalarCallRetval_4(String_t* value)
	{
		___ScalarCallRetval_4 = value;
		Il2CppCodeGenWriteBarrier(&___ScalarCallRetval_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
