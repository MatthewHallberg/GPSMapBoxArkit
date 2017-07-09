#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Json.Linq.JContainer
struct JContainer_t1655356485;
// Mapbox.Json.Linq.JToken
struct JToken_t221585239;
// System.Object
struct Il2CppObject;
// Mapbox.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t3436358070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JToken
struct  JToken_t221585239  : public Il2CppObject
{
public:
	// Mapbox.Json.Linq.JContainer Mapbox.Json.Linq.JToken::_parent
	JContainer_t1655356485 * ____parent_0;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_previous
	JToken_t221585239 * ____previous_1;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_next
	JToken_t221585239 * ____next_2;
	// System.Object Mapbox.Json.Linq.JToken::_annotations
	Il2CppObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t221585239, ____parent_0)); }
	inline JContainer_t1655356485 * get__parent_0() const { return ____parent_0; }
	inline JContainer_t1655356485 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t1655356485 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t221585239, ____previous_1)); }
	inline JToken_t221585239 * get__previous_1() const { return ____previous_1; }
	inline JToken_t221585239 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t221585239 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier(&____previous_1, value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t221585239, ____next_2)); }
	inline JToken_t221585239 * get__next_2() const { return ____next_2; }
	inline JToken_t221585239 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t221585239 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier(&____next_2, value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_t221585239, ____annotations_3)); }
	inline Il2CppObject * get__annotations_3() const { return ____annotations_3; }
	inline Il2CppObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(Il2CppObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier(&____annotations_3, value);
	}
};

struct JToken_t221585239_StaticFields
{
public:
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t3436358070* ___BooleanTypes_4;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t3436358070* ___NumberTypes_5;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t3436358070* ___StringTypes_6;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t3436358070* ___GuidTypes_7;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t3436358070* ___TimeSpanTypes_8;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t3436358070* ___UriTypes_9;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t3436358070* ___CharTypes_10;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t3436358070* ___DateTimeTypes_11;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t3436358070* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t3436358070* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t3436358070* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___BooleanTypes_4, value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t3436358070* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t3436358070* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier(&___NumberTypes_5, value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t3436358070* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t3436358070* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier(&___StringTypes_6, value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t3436358070* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t3436358070* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier(&___GuidTypes_7, value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t3436358070* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t3436358070* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier(&___TimeSpanTypes_8, value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t3436358070* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t3436358070* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier(&___UriTypes_9, value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t3436358070* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t3436358070* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&___CharTypes_10, value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t3436358070* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t3436358070* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier(&___DateTimeTypes_11, value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_t221585239_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t3436358070* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t3436358070** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t3436358070* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier(&___BytesTypes_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
