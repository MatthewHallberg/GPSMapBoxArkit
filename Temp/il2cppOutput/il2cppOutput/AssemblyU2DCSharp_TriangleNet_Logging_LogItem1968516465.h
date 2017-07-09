#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_TriangleNet_Logging_LogLevel842636714.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Logging.LogItem
struct  LogItem_t1968516465  : public Il2CppObject
{
public:
	// System.DateTime TriangleNet.Logging.LogItem::time
	DateTime_t693205669  ___time_0;
	// TriangleNet.Logging.LogLevel TriangleNet.Logging.LogItem::level
	int32_t ___level_1;
	// System.String TriangleNet.Logging.LogItem::message
	String_t* ___message_2;
	// System.String TriangleNet.Logging.LogItem::info
	String_t* ___info_3;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(LogItem_t1968516465, ___time_0)); }
	inline DateTime_t693205669  get_time_0() const { return ___time_0; }
	inline DateTime_t693205669 * get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(DateTime_t693205669  value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(LogItem_t1968516465, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(LogItem_t1968516465, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}

	inline static int32_t get_offset_of_info_3() { return static_cast<int32_t>(offsetof(LogItem_t1968516465, ___info_3)); }
	inline String_t* get_info_3() const { return ___info_3; }
	inline String_t** get_address_of_info_3() { return &___info_3; }
	inline void set_info_3(String_t* value)
	{
		___info_3 = value;
		Il2CppCodeGenWriteBarrier(&___info_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
