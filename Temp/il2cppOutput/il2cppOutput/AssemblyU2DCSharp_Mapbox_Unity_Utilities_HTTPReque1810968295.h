#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t358943961;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.HTTPRequest
struct  HTTPRequest_t1810968295  : public Il2CppObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Mapbox.Unity.Utilities.HTTPRequest::_request
	UnityWebRequest_t254341728 * ____request_0;
	// System.Int32 Mapbox.Unity.Utilities.HTTPRequest::_timeout
	int32_t ____timeout_1;
	// System.Action`1<Mapbox.Platform.Response> Mapbox.Unity.Utilities.HTTPRequest::_callback
	Action_1_t358943961 * ____callback_2;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest::_wasCancelled
	bool ____wasCancelled_3;
	// System.Boolean Mapbox.Unity.Utilities.HTTPRequest::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__request_0() { return static_cast<int32_t>(offsetof(HTTPRequest_t1810968295, ____request_0)); }
	inline UnityWebRequest_t254341728 * get__request_0() const { return ____request_0; }
	inline UnityWebRequest_t254341728 ** get_address_of__request_0() { return &____request_0; }
	inline void set__request_0(UnityWebRequest_t254341728 * value)
	{
		____request_0 = value;
		Il2CppCodeGenWriteBarrier(&____request_0, value);
	}

	inline static int32_t get_offset_of__timeout_1() { return static_cast<int32_t>(offsetof(HTTPRequest_t1810968295, ____timeout_1)); }
	inline int32_t get__timeout_1() const { return ____timeout_1; }
	inline int32_t* get_address_of__timeout_1() { return &____timeout_1; }
	inline void set__timeout_1(int32_t value)
	{
		____timeout_1 = value;
	}

	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(HTTPRequest_t1810968295, ____callback_2)); }
	inline Action_1_t358943961 * get__callback_2() const { return ____callback_2; }
	inline Action_1_t358943961 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(Action_1_t358943961 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier(&____callback_2, value);
	}

	inline static int32_t get_offset_of__wasCancelled_3() { return static_cast<int32_t>(offsetof(HTTPRequest_t1810968295, ____wasCancelled_3)); }
	inline bool get__wasCancelled_3() const { return ____wasCancelled_3; }
	inline bool* get_address_of__wasCancelled_3() { return &____wasCancelled_3; }
	inline void set__wasCancelled_3(bool value)
	{
		____wasCancelled_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HTTPRequest_t1810968295, ___U3CIsCompletedU3Ek__BackingField_4)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_4() const { return ___U3CIsCompletedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_4() { return &___U3CIsCompletedU3Ek__BackingField_4; }
	inline void set_U3CIsCompletedU3Ek__BackingField_4(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
