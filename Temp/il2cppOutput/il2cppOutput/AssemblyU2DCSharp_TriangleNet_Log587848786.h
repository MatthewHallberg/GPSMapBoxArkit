#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_Logging_LogLevel842636714.h"

// System.Collections.Generic.List`1<TriangleNet.Logging.LogItem>
struct List_1_t1337637597;
// TriangleNet.Log
struct Log_t587848786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Log
struct  Log_t587848786  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Logging.LogItem> TriangleNet.Log::log
	List_1_t1337637597 * ___log_1;
	// TriangleNet.Logging.LogLevel TriangleNet.Log::level
	int32_t ___level_2;

public:
	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(Log_t587848786, ___log_1)); }
	inline List_1_t1337637597 * get_log_1() const { return ___log_1; }
	inline List_1_t1337637597 ** get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(List_1_t1337637597 * value)
	{
		___log_1 = value;
		Il2CppCodeGenWriteBarrier(&___log_1, value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(Log_t587848786, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}
};

struct Log_t587848786_StaticFields
{
public:
	// System.Boolean TriangleNet.Log::<Verbose>k__BackingField
	bool ___U3CVerboseU3Ek__BackingField_0;
	// TriangleNet.Log TriangleNet.Log::instance
	Log_t587848786 * ___instance_3;

public:
	inline static int32_t get_offset_of_U3CVerboseU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Log_t587848786_StaticFields, ___U3CVerboseU3Ek__BackingField_0)); }
	inline bool get_U3CVerboseU3Ek__BackingField_0() const { return ___U3CVerboseU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVerboseU3Ek__BackingField_0() { return &___U3CVerboseU3Ek__BackingField_0; }
	inline void set_U3CVerboseU3Ek__BackingField_0(bool value)
	{
		___U3CVerboseU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Log_t587848786_StaticFields, ___instance_3)); }
	inline Log_t587848786 * get_instance_3() const { return ___instance_3; }
	inline Log_t587848786 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Log_t587848786 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
