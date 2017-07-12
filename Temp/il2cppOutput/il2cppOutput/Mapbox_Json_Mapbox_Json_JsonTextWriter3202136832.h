#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonWriter1886137423.h"

// System.IO.TextWriter
struct TextWriter_t4027217640;
// Mapbox.Json.Utilities.Base64Encoder
struct Base64Encoder_t3141584135;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Mapbox.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t3343679346;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonTextWriter
struct  JsonTextWriter_t3202136832  : public JsonWriter_t1886137423
{
public:
	// System.IO.TextWriter Mapbox.Json.JsonTextWriter::_writer
	TextWriter_t4027217640 * ____writer_14;
	// Mapbox.Json.Utilities.Base64Encoder Mapbox.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t3141584135 * ____base64Encoder_15;
	// System.Char Mapbox.Json.JsonTextWriter::_indentChar
	Il2CppChar ____indentChar_16;
	// System.Int32 Mapbox.Json.JsonTextWriter::_indentation
	int32_t ____indentation_17;
	// System.Char Mapbox.Json.JsonTextWriter::_quoteChar
	Il2CppChar ____quoteChar_18;
	// System.Boolean Mapbox.Json.JsonTextWriter::_quoteName
	bool ____quoteName_19;
	// System.Boolean[] Mapbox.Json.JsonTextWriter::_charEscapeFlags
	BooleanU5BU5D_t3568034315* ____charEscapeFlags_20;
	// System.Char[] Mapbox.Json.JsonTextWriter::_writeBuffer
	CharU5BU5D_t1328083999* ____writeBuffer_21;
	// Mapbox.Json.IArrayPool`1<System.Char> Mapbox.Json.JsonTextWriter::_arrayPool
	Il2CppObject* ____arrayPool_22;
	// System.Char[] Mapbox.Json.JsonTextWriter::_indentChars
	CharU5BU5D_t1328083999* ____indentChars_23;

public:
	inline static int32_t get_offset_of__writer_14() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____writer_14)); }
	inline TextWriter_t4027217640 * get__writer_14() const { return ____writer_14; }
	inline TextWriter_t4027217640 ** get_address_of__writer_14() { return &____writer_14; }
	inline void set__writer_14(TextWriter_t4027217640 * value)
	{
		____writer_14 = value;
		Il2CppCodeGenWriteBarrier(&____writer_14, value);
	}

	inline static int32_t get_offset_of__base64Encoder_15() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____base64Encoder_15)); }
	inline Base64Encoder_t3141584135 * get__base64Encoder_15() const { return ____base64Encoder_15; }
	inline Base64Encoder_t3141584135 ** get_address_of__base64Encoder_15() { return &____base64Encoder_15; }
	inline void set__base64Encoder_15(Base64Encoder_t3141584135 * value)
	{
		____base64Encoder_15 = value;
		Il2CppCodeGenWriteBarrier(&____base64Encoder_15, value);
	}

	inline static int32_t get_offset_of__indentChar_16() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____indentChar_16)); }
	inline Il2CppChar get__indentChar_16() const { return ____indentChar_16; }
	inline Il2CppChar* get_address_of__indentChar_16() { return &____indentChar_16; }
	inline void set__indentChar_16(Il2CppChar value)
	{
		____indentChar_16 = value;
	}

	inline static int32_t get_offset_of__indentation_17() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____indentation_17)); }
	inline int32_t get__indentation_17() const { return ____indentation_17; }
	inline int32_t* get_address_of__indentation_17() { return &____indentation_17; }
	inline void set__indentation_17(int32_t value)
	{
		____indentation_17 = value;
	}

	inline static int32_t get_offset_of__quoteChar_18() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____quoteChar_18)); }
	inline Il2CppChar get__quoteChar_18() const { return ____quoteChar_18; }
	inline Il2CppChar* get_address_of__quoteChar_18() { return &____quoteChar_18; }
	inline void set__quoteChar_18(Il2CppChar value)
	{
		____quoteChar_18 = value;
	}

	inline static int32_t get_offset_of__quoteName_19() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____quoteName_19)); }
	inline bool get__quoteName_19() const { return ____quoteName_19; }
	inline bool* get_address_of__quoteName_19() { return &____quoteName_19; }
	inline void set__quoteName_19(bool value)
	{
		____quoteName_19 = value;
	}

	inline static int32_t get_offset_of__charEscapeFlags_20() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____charEscapeFlags_20)); }
	inline BooleanU5BU5D_t3568034315* get__charEscapeFlags_20() const { return ____charEscapeFlags_20; }
	inline BooleanU5BU5D_t3568034315** get_address_of__charEscapeFlags_20() { return &____charEscapeFlags_20; }
	inline void set__charEscapeFlags_20(BooleanU5BU5D_t3568034315* value)
	{
		____charEscapeFlags_20 = value;
		Il2CppCodeGenWriteBarrier(&____charEscapeFlags_20, value);
	}

	inline static int32_t get_offset_of__writeBuffer_21() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____writeBuffer_21)); }
	inline CharU5BU5D_t1328083999* get__writeBuffer_21() const { return ____writeBuffer_21; }
	inline CharU5BU5D_t1328083999** get_address_of__writeBuffer_21() { return &____writeBuffer_21; }
	inline void set__writeBuffer_21(CharU5BU5D_t1328083999* value)
	{
		____writeBuffer_21 = value;
		Il2CppCodeGenWriteBarrier(&____writeBuffer_21, value);
	}

	inline static int32_t get_offset_of__arrayPool_22() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____arrayPool_22)); }
	inline Il2CppObject* get__arrayPool_22() const { return ____arrayPool_22; }
	inline Il2CppObject** get_address_of__arrayPool_22() { return &____arrayPool_22; }
	inline void set__arrayPool_22(Il2CppObject* value)
	{
		____arrayPool_22 = value;
		Il2CppCodeGenWriteBarrier(&____arrayPool_22, value);
	}

	inline static int32_t get_offset_of__indentChars_23() { return static_cast<int32_t>(offsetof(JsonTextWriter_t3202136832, ____indentChars_23)); }
	inline CharU5BU5D_t1328083999* get__indentChars_23() const { return ____indentChars_23; }
	inline CharU5BU5D_t1328083999** get_address_of__indentChars_23() { return &____indentChars_23; }
	inline void set__indentChars_23(CharU5BU5D_t1328083999* value)
	{
		____indentChars_23 = value;
		Il2CppCodeGenWriteBarrier(&____indentChars_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
