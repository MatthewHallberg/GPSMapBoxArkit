#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mapbox_Json_Mapbox_Json_JsonPosition1387622607.h"
#include "Mapbox_Json_Mapbox_Json_JsonWriter_State4284373814.h"
#include "Mapbox_Json_Mapbox_Json_Formatting4143407349.h"
#include "Mapbox_Json_Mapbox_Json_DateFormatHandling548644746.h"
#include "Mapbox_Json_Mapbox_Json_DateTimeZoneHandling2205596626.h"
#include "Mapbox_Json_Mapbox_Json_StringEscapeHandling1031871489.h"
#include "Mapbox_Json_Mapbox_Json_FloatFormatHandling2707966394.h"

// Mapbox.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t872682146;
// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition>
struct List_1_t756743739;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonWriter
struct  JsonWriter_t1886137423  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition> Mapbox.Json.JsonWriter::_stack
	List_1_t756743739 * ____stack_2;
	// Mapbox.Json.JsonPosition Mapbox.Json.JsonWriter::_currentPosition
	JsonPosition_t1387622607  ____currentPosition_3;
	// Mapbox.Json.JsonWriter/State Mapbox.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Mapbox.Json.Formatting Mapbox.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Mapbox.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Mapbox.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Mapbox.Json.DateFormatHandling Mapbox.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Mapbox.Json.DateTimeZoneHandling Mapbox.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Mapbox.Json.StringEscapeHandling Mapbox.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Mapbox.Json.FloatFormatHandling Mapbox.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Mapbox.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Mapbox.Json.JsonWriter::_culture
	CultureInfo_t3500843524 * ____culture_13;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____stack_2)); }
	inline List_1_t756743739 * get__stack_2() const { return ____stack_2; }
	inline List_1_t756743739 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t756743739 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier(&____stack_2, value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____currentPosition_3)); }
	inline JsonPosition_t1387622607  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t1387622607 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t1387622607  value)
	{
		____currentPosition_3 = value;
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ___U3CAutoCompleteOnCloseU3Ek__BackingField_7)); }
	inline bool get_U3CAutoCompleteOnCloseU3Ek__BackingField_7() const { return ___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return &___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline void set_U3CAutoCompleteOnCloseU3Ek__BackingField_7(bool value)
	{
		___U3CAutoCompleteOnCloseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____dateFormatHandling_8)); }
	inline int32_t get__dateFormatHandling_8() const { return ____dateFormatHandling_8; }
	inline int32_t* get_address_of__dateFormatHandling_8() { return &____dateFormatHandling_8; }
	inline void set__dateFormatHandling_8(int32_t value)
	{
		____dateFormatHandling_8 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____dateTimeZoneHandling_9)); }
	inline int32_t get__dateTimeZoneHandling_9() const { return ____dateTimeZoneHandling_9; }
	inline int32_t* get_address_of__dateTimeZoneHandling_9() { return &____dateTimeZoneHandling_9; }
	inline void set__dateTimeZoneHandling_9(int32_t value)
	{
		____dateTimeZoneHandling_9 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____stringEscapeHandling_10)); }
	inline int32_t get__stringEscapeHandling_10() const { return ____stringEscapeHandling_10; }
	inline int32_t* get_address_of__stringEscapeHandling_10() { return &____stringEscapeHandling_10; }
	inline void set__stringEscapeHandling_10(int32_t value)
	{
		____stringEscapeHandling_10 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_11() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____floatFormatHandling_11)); }
	inline int32_t get__floatFormatHandling_11() const { return ____floatFormatHandling_11; }
	inline int32_t* get_address_of__floatFormatHandling_11() { return &____floatFormatHandling_11; }
	inline void set__floatFormatHandling_11(int32_t value)
	{
		____floatFormatHandling_11 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_12() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____dateFormatString_12)); }
	inline String_t* get__dateFormatString_12() const { return ____dateFormatString_12; }
	inline String_t** get_address_of__dateFormatString_12() { return &____dateFormatString_12; }
	inline void set__dateFormatString_12(String_t* value)
	{
		____dateFormatString_12 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_12, value);
	}

	inline static int32_t get_offset_of__culture_13() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423, ____culture_13)); }
	inline CultureInfo_t3500843524 * get__culture_13() const { return ____culture_13; }
	inline CultureInfo_t3500843524 ** get_address_of__culture_13() { return &____culture_13; }
	inline void set__culture_13(CultureInfo_t3500843524 * value)
	{
		____culture_13 = value;
		Il2CppCodeGenWriteBarrier(&____culture_13, value);
	}
};

struct JsonWriter_t1886137423_StaticFields
{
public:
	// Mapbox.Json.JsonWriter/State[][] Mapbox.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_t872682146* ___StateArray_0;
	// Mapbox.Json.JsonWriter/State[][] Mapbox.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_t872682146* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_t872682146* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_t872682146** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_t872682146* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___StateArray_0, value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1886137423_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_t872682146* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_t872682146** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_t872682146* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier(&___StateArrayTempate_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
