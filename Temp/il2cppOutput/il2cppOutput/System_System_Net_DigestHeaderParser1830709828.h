#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestHeaderParser
struct  DigestHeaderParser_t1830709828  : public Il2CppObject
{
public:
	// System.String System.Net.DigestHeaderParser::header
	String_t* ___header_0;
	// System.Int32 System.Net.DigestHeaderParser::length
	int32_t ___length_1;
	// System.Int32 System.Net.DigestHeaderParser::pos
	int32_t ___pos_2;
	// System.String[] System.Net.DigestHeaderParser::values
	StringU5BU5D_t1642385972* ___values_4;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t1830709828, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier(&___header_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t1830709828, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t1830709828, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_values_4() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t1830709828, ___values_4)); }
	inline StringU5BU5D_t1642385972* get_values_4() const { return ___values_4; }
	inline StringU5BU5D_t1642385972** get_address_of_values_4() { return &___values_4; }
	inline void set_values_4(StringU5BU5D_t1642385972* value)
	{
		___values_4 = value;
		Il2CppCodeGenWriteBarrier(&___values_4, value);
	}
};

struct DigestHeaderParser_t1830709828_StaticFields
{
public:
	// System.String[] System.Net.DigestHeaderParser::keywords
	StringU5BU5D_t1642385972* ___keywords_3;

public:
	inline static int32_t get_offset_of_keywords_3() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t1830709828_StaticFields, ___keywords_3)); }
	inline StringU5BU5D_t1642385972* get_keywords_3() const { return ___keywords_3; }
	inline StringU5BU5D_t1642385972** get_address_of_keywords_3() { return &___keywords_3; }
	inline void set_keywords_3(StringU5BU5D_t1642385972* value)
	{
		___keywords_3 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
