#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "Mapbox_Json_Mapbox_Json_JsonContainerType176083037.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonPosition
struct  JsonPosition_t1387622607 
{
public:
	// Mapbox.Json.JsonContainerType Mapbox.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Mapbox.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Mapbox.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Mapbox.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t1387622607, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t1387622607, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t1387622607, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyName_3, value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t1387622607, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t1387622607_StaticFields
{
public:
	// System.Char[] Mapbox.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t1328083999* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t1387622607_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t1328083999* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t1328083999** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t1328083999* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier(&___SpecialCharacters_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Json.JsonPosition
struct JsonPosition_t1387622607_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Mapbox.Json.JsonPosition
struct JsonPosition_t1387622607_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
