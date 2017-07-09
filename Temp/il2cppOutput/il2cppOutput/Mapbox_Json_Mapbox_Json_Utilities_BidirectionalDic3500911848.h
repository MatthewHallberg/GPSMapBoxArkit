#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct  BidirectionalDictionary_2_t3500911848  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<TFirst,TSecond> Mapbox.Json.Utilities.BidirectionalDictionary`2::_firstToSecond
	Il2CppObject* ____firstToSecond_0;
	// System.Collections.Generic.IDictionary`2<TSecond,TFirst> Mapbox.Json.Utilities.BidirectionalDictionary`2::_secondToFirst
	Il2CppObject* ____secondToFirst_1;
	// System.String Mapbox.Json.Utilities.BidirectionalDictionary`2::_duplicateFirstErrorMessage
	String_t* ____duplicateFirstErrorMessage_2;
	// System.String Mapbox.Json.Utilities.BidirectionalDictionary`2::_duplicateSecondErrorMessage
	String_t* ____duplicateSecondErrorMessage_3;

public:
	inline static int32_t get_offset_of__firstToSecond_0() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t3500911848, ____firstToSecond_0)); }
	inline Il2CppObject* get__firstToSecond_0() const { return ____firstToSecond_0; }
	inline Il2CppObject** get_address_of__firstToSecond_0() { return &____firstToSecond_0; }
	inline void set__firstToSecond_0(Il2CppObject* value)
	{
		____firstToSecond_0 = value;
		Il2CppCodeGenWriteBarrier(&____firstToSecond_0, value);
	}

	inline static int32_t get_offset_of__secondToFirst_1() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t3500911848, ____secondToFirst_1)); }
	inline Il2CppObject* get__secondToFirst_1() const { return ____secondToFirst_1; }
	inline Il2CppObject** get_address_of__secondToFirst_1() { return &____secondToFirst_1; }
	inline void set__secondToFirst_1(Il2CppObject* value)
	{
		____secondToFirst_1 = value;
		Il2CppCodeGenWriteBarrier(&____secondToFirst_1, value);
	}

	inline static int32_t get_offset_of__duplicateFirstErrorMessage_2() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t3500911848, ____duplicateFirstErrorMessage_2)); }
	inline String_t* get__duplicateFirstErrorMessage_2() const { return ____duplicateFirstErrorMessage_2; }
	inline String_t** get_address_of__duplicateFirstErrorMessage_2() { return &____duplicateFirstErrorMessage_2; }
	inline void set__duplicateFirstErrorMessage_2(String_t* value)
	{
		____duplicateFirstErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier(&____duplicateFirstErrorMessage_2, value);
	}

	inline static int32_t get_offset_of__duplicateSecondErrorMessage_3() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t3500911848, ____duplicateSecondErrorMessage_3)); }
	inline String_t* get__duplicateSecondErrorMessage_3() const { return ____duplicateSecondErrorMessage_3; }
	inline String_t** get_address_of__duplicateSecondErrorMessage_3() { return &____duplicateSecondErrorMessage_3; }
	inline void set__duplicateSecondErrorMessage_3(String_t* value)
	{
		____duplicateSecondErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier(&____duplicateSecondErrorMessage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
