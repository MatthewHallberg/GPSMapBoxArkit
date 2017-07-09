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

// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t1660589460;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t1296561819;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Func`2<System.Exception,System.String>
struct Func_2_t331498127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Response
struct  Response_t557144579  : public Il2CppObject
{
public:
	// Mapbox.Platform.IAsyncRequest Mapbox.Platform.Response::<Request>k__BackingField
	Il2CppObject * ___U3CRequestU3Ek__BackingField_0;
	// System.Boolean Mapbox.Platform.Response::LoadedFromCache
	bool ___LoadedFromCache_1;
	// System.String Mapbox.Platform.Response::RequestUrl
	String_t* ___RequestUrl_2;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::StatusCode
	Nullable_1_t334943763  ___StatusCode_3;
	// System.String Mapbox.Platform.Response::ContentType
	String_t* ___ContentType_4;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::XRateLimitInterval
	Nullable_1_t334943763  ___XRateLimitInterval_5;
	// System.Nullable`1<System.Int64> Mapbox.Platform.Response::XRateLimitLimit
	Nullable_1_t3467111648  ___XRateLimitLimit_6;
	// System.Nullable`1<System.DateTime> Mapbox.Platform.Response::XRateLimitReset
	Nullable_1_t3251239280  ___XRateLimitReset_7;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Platform.Response::_exceptions
	List_1_t1296561819 * ____exceptions_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Mapbox.Platform.Response::Headers
	Dictionary_2_t3943999495 * ___Headers_9;
	// System.Byte[] Mapbox.Platform.Response::Data
	ByteU5BU5D_t3397334013* ___Data_10;

public:
	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t557144579, ___U3CRequestU3Ek__BackingField_0)); }
	inline Il2CppObject * get_U3CRequestU3Ek__BackingField_0() const { return ___U3CRequestU3Ek__BackingField_0; }
	inline Il2CppObject ** get_address_of_U3CRequestU3Ek__BackingField_0() { return &___U3CRequestU3Ek__BackingField_0; }
	inline void set_U3CRequestU3Ek__BackingField_0(Il2CppObject * value)
	{
		___U3CRequestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRequestU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_LoadedFromCache_1() { return static_cast<int32_t>(offsetof(Response_t557144579, ___LoadedFromCache_1)); }
	inline bool get_LoadedFromCache_1() const { return ___LoadedFromCache_1; }
	inline bool* get_address_of_LoadedFromCache_1() { return &___LoadedFromCache_1; }
	inline void set_LoadedFromCache_1(bool value)
	{
		___LoadedFromCache_1 = value;
	}

	inline static int32_t get_offset_of_RequestUrl_2() { return static_cast<int32_t>(offsetof(Response_t557144579, ___RequestUrl_2)); }
	inline String_t* get_RequestUrl_2() const { return ___RequestUrl_2; }
	inline String_t** get_address_of_RequestUrl_2() { return &___RequestUrl_2; }
	inline void set_RequestUrl_2(String_t* value)
	{
		___RequestUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___RequestUrl_2, value);
	}

	inline static int32_t get_offset_of_StatusCode_3() { return static_cast<int32_t>(offsetof(Response_t557144579, ___StatusCode_3)); }
	inline Nullable_1_t334943763  get_StatusCode_3() const { return ___StatusCode_3; }
	inline Nullable_1_t334943763 * get_address_of_StatusCode_3() { return &___StatusCode_3; }
	inline void set_StatusCode_3(Nullable_1_t334943763  value)
	{
		___StatusCode_3 = value;
	}

	inline static int32_t get_offset_of_ContentType_4() { return static_cast<int32_t>(offsetof(Response_t557144579, ___ContentType_4)); }
	inline String_t* get_ContentType_4() const { return ___ContentType_4; }
	inline String_t** get_address_of_ContentType_4() { return &___ContentType_4; }
	inline void set_ContentType_4(String_t* value)
	{
		___ContentType_4 = value;
		Il2CppCodeGenWriteBarrier(&___ContentType_4, value);
	}

	inline static int32_t get_offset_of_XRateLimitInterval_5() { return static_cast<int32_t>(offsetof(Response_t557144579, ___XRateLimitInterval_5)); }
	inline Nullable_1_t334943763  get_XRateLimitInterval_5() const { return ___XRateLimitInterval_5; }
	inline Nullable_1_t334943763 * get_address_of_XRateLimitInterval_5() { return &___XRateLimitInterval_5; }
	inline void set_XRateLimitInterval_5(Nullable_1_t334943763  value)
	{
		___XRateLimitInterval_5 = value;
	}

	inline static int32_t get_offset_of_XRateLimitLimit_6() { return static_cast<int32_t>(offsetof(Response_t557144579, ___XRateLimitLimit_6)); }
	inline Nullable_1_t3467111648  get_XRateLimitLimit_6() const { return ___XRateLimitLimit_6; }
	inline Nullable_1_t3467111648 * get_address_of_XRateLimitLimit_6() { return &___XRateLimitLimit_6; }
	inline void set_XRateLimitLimit_6(Nullable_1_t3467111648  value)
	{
		___XRateLimitLimit_6 = value;
	}

	inline static int32_t get_offset_of_XRateLimitReset_7() { return static_cast<int32_t>(offsetof(Response_t557144579, ___XRateLimitReset_7)); }
	inline Nullable_1_t3251239280  get_XRateLimitReset_7() const { return ___XRateLimitReset_7; }
	inline Nullable_1_t3251239280 * get_address_of_XRateLimitReset_7() { return &___XRateLimitReset_7; }
	inline void set_XRateLimitReset_7(Nullable_1_t3251239280  value)
	{
		___XRateLimitReset_7 = value;
	}

	inline static int32_t get_offset_of__exceptions_8() { return static_cast<int32_t>(offsetof(Response_t557144579, ____exceptions_8)); }
	inline List_1_t1296561819 * get__exceptions_8() const { return ____exceptions_8; }
	inline List_1_t1296561819 ** get_address_of__exceptions_8() { return &____exceptions_8; }
	inline void set__exceptions_8(List_1_t1296561819 * value)
	{
		____exceptions_8 = value;
		Il2CppCodeGenWriteBarrier(&____exceptions_8, value);
	}

	inline static int32_t get_offset_of_Headers_9() { return static_cast<int32_t>(offsetof(Response_t557144579, ___Headers_9)); }
	inline Dictionary_2_t3943999495 * get_Headers_9() const { return ___Headers_9; }
	inline Dictionary_2_t3943999495 ** get_address_of_Headers_9() { return &___Headers_9; }
	inline void set_Headers_9(Dictionary_2_t3943999495 * value)
	{
		___Headers_9 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_9, value);
	}

	inline static int32_t get_offset_of_Data_10() { return static_cast<int32_t>(offsetof(Response_t557144579, ___Data_10)); }
	inline ByteU5BU5D_t3397334013* get_Data_10() const { return ___Data_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_10() { return &___Data_10; }
	inline void set_Data_10(ByteU5BU5D_t3397334013* value)
	{
		___Data_10 = value;
		Il2CppCodeGenWriteBarrier(&___Data_10, value);
	}
};

struct Response_t557144579_StaticFields
{
public:
	// System.Func`2<System.Exception,System.String> Mapbox.Platform.Response::<>f__am$cache0
	Func_2_t331498127 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Response_t557144579_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t331498127 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t331498127 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t331498127 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
