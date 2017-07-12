#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"

// System.Collections.Generic.Dictionary`2<Mapbox.Platform.IAsyncRequest,System.Int32>
struct Dictionary_2_t222845231;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.FileSource
struct  FileSource_t1347159135  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<Mapbox.Platform.IAsyncRequest,System.Int32> Mapbox.Platform.FileSource::_requests
	Dictionary_2_t222845231 * ____requests_0;
	// System.String Mapbox.Platform.FileSource::_accessToken
	String_t* ____accessToken_1;
	// System.Object Mapbox.Platform.FileSource::_lock
	Il2CppObject * ____lock_2;
	// System.Nullable`1<System.Int32> Mapbox.Platform.FileSource::XRateLimitInterval
	Nullable_1_t334943763  ___XRateLimitInterval_3;
	// System.Nullable`1<System.Int64> Mapbox.Platform.FileSource::XRateLimitLimit
	Nullable_1_t3467111648  ___XRateLimitLimit_4;
	// System.Nullable`1<System.DateTime> Mapbox.Platform.FileSource::XRateLimitReset
	Nullable_1_t3251239280  ___XRateLimitReset_5;

public:
	inline static int32_t get_offset_of__requests_0() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ____requests_0)); }
	inline Dictionary_2_t222845231 * get__requests_0() const { return ____requests_0; }
	inline Dictionary_2_t222845231 ** get_address_of__requests_0() { return &____requests_0; }
	inline void set__requests_0(Dictionary_2_t222845231 * value)
	{
		____requests_0 = value;
		Il2CppCodeGenWriteBarrier(&____requests_0, value);
	}

	inline static int32_t get_offset_of__accessToken_1() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ____accessToken_1)); }
	inline String_t* get__accessToken_1() const { return ____accessToken_1; }
	inline String_t** get_address_of__accessToken_1() { return &____accessToken_1; }
	inline void set__accessToken_1(String_t* value)
	{
		____accessToken_1 = value;
		Il2CppCodeGenWriteBarrier(&____accessToken_1, value);
	}

	inline static int32_t get_offset_of__lock_2() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ____lock_2)); }
	inline Il2CppObject * get__lock_2() const { return ____lock_2; }
	inline Il2CppObject ** get_address_of__lock_2() { return &____lock_2; }
	inline void set__lock_2(Il2CppObject * value)
	{
		____lock_2 = value;
		Il2CppCodeGenWriteBarrier(&____lock_2, value);
	}

	inline static int32_t get_offset_of_XRateLimitInterval_3() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ___XRateLimitInterval_3)); }
	inline Nullable_1_t334943763  get_XRateLimitInterval_3() const { return ___XRateLimitInterval_3; }
	inline Nullable_1_t334943763 * get_address_of_XRateLimitInterval_3() { return &___XRateLimitInterval_3; }
	inline void set_XRateLimitInterval_3(Nullable_1_t334943763  value)
	{
		___XRateLimitInterval_3 = value;
	}

	inline static int32_t get_offset_of_XRateLimitLimit_4() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ___XRateLimitLimit_4)); }
	inline Nullable_1_t3467111648  get_XRateLimitLimit_4() const { return ___XRateLimitLimit_4; }
	inline Nullable_1_t3467111648 * get_address_of_XRateLimitLimit_4() { return &___XRateLimitLimit_4; }
	inline void set_XRateLimitLimit_4(Nullable_1_t3467111648  value)
	{
		___XRateLimitLimit_4 = value;
	}

	inline static int32_t get_offset_of_XRateLimitReset_5() { return static_cast<int32_t>(offsetof(FileSource_t1347159135, ___XRateLimitReset_5)); }
	inline Nullable_1_t3251239280  get_XRateLimitReset_5() const { return ___XRateLimitReset_5; }
	inline Nullable_1_t3251239280 * get_address_of_XRateLimitReset_5() { return &___XRateLimitReset_5; }
	inline void set_XRateLimitReset_5(Nullable_1_t3251239280  value)
	{
		___XRateLimitReset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
