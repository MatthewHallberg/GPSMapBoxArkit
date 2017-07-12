#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mapbox_Json_Mapbox_Json_JsonToken2797371331.h"
#include "Mapbox_Json_Mapbox_Json_JsonReader_State1255016670.h"
#include "Mapbox_Json_Mapbox_Json_JsonPosition1387622607.h"
#include "Mapbox_Json_Mapbox_Json_DateTimeZoneHandling2205596626.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "Mapbox_Json_Mapbox_Json_DateParseHandling3082057764.h"
#include "Mapbox_Json_Mapbox_Json_FloatParseHandling1931117724.h"

// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition>
struct List_1_t756743739;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonReader
struct  JsonReader_t705127463  : public Il2CppObject
{
public:
	// Mapbox.Json.JsonToken Mapbox.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Mapbox.Json.JsonReader::_value
	Il2CppObject * ____value_1;
	// System.Char Mapbox.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Mapbox.Json.JsonReader/State Mapbox.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Mapbox.Json.JsonPosition Mapbox.Json.JsonReader::_currentPosition
	JsonPosition_t1387622607  ____currentPosition_4;
	// System.Globalization.CultureInfo Mapbox.Json.JsonReader::_culture
	CultureInfo_t3500843524 * ____culture_5;
	// Mapbox.Json.DateTimeZoneHandling Mapbox.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Mapbox.Json.JsonReader::_maxDepth
	Nullable_1_t334943763  ____maxDepth_7;
	// System.Boolean Mapbox.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Mapbox.Json.DateParseHandling Mapbox.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Mapbox.Json.FloatParseHandling Mapbox.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Mapbox.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition> Mapbox.Json.JsonReader::_stack
	List_1_t756743739 * ____stack_12;
	// System.Boolean Mapbox.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Mapbox.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____value_1)); }
	inline Il2CppObject * get__value_1() const { return ____value_1; }
	inline Il2CppObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Il2CppObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____currentPosition_4)); }
	inline JsonPosition_t1387622607  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t1387622607 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t1387622607  value)
	{
		____currentPosition_4 = value;
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____culture_5)); }
	inline CultureInfo_t3500843524 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t3500843524 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t3500843524 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier(&____culture_5, value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____maxDepth_7)); }
	inline Nullable_1_t334943763  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t334943763 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t334943763  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_11, value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ____stack_12)); }
	inline List_1_t756743739 * get__stack_12() const { return ____stack_12; }
	inline List_1_t756743739 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t756743739 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier(&____stack_12, value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t705127463, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
