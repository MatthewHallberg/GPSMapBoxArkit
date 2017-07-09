#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Tokenizer
struct  Tokenizer_t3681895715  : public Il2CppObject
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Tokenizer::input
	CharU5BU5D_t1328083999* ___input_2;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::pos
	int32_t ___pos_3;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::tok
	int32_t ___tok_4;
	// System.Object Mono.Data.SqlExpressions.Tokenizer::val
	Il2CppObject * ___val_5;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715, ___input_2)); }
	inline CharU5BU5D_t1328083999* get_input_2() const { return ___input_2; }
	inline CharU5BU5D_t1328083999** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(CharU5BU5D_t1328083999* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_tok_4() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715, ___tok_4)); }
	inline int32_t get_tok_4() const { return ___tok_4; }
	inline int32_t* get_address_of_tok_4() { return &___tok_4; }
	inline void set_tok_4(int32_t value)
	{
		___tok_4 = value;
	}

	inline static int32_t get_offset_of_val_5() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715, ___val_5)); }
	inline Il2CppObject * get_val_5() const { return ___val_5; }
	inline Il2CppObject ** get_address_of_val_5() { return &___val_5; }
	inline void set_val_5(Il2CppObject * value)
	{
		___val_5 = value;
		Il2CppCodeGenWriteBarrier(&___val_5, value);
	}
};

struct Tokenizer_t3681895715_StaticFields
{
public:
	// System.Collections.IDictionary Mono.Data.SqlExpressions.Tokenizer::tokenMap
	Il2CppObject * ___tokenMap_0;
	// System.Object[] Mono.Data.SqlExpressions.Tokenizer::tokens
	ObjectU5BU5D_t3614634134* ___tokens_1;

public:
	inline static int32_t get_offset_of_tokenMap_0() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715_StaticFields, ___tokenMap_0)); }
	inline Il2CppObject * get_tokenMap_0() const { return ___tokenMap_0; }
	inline Il2CppObject ** get_address_of_tokenMap_0() { return &___tokenMap_0; }
	inline void set_tokenMap_0(Il2CppObject * value)
	{
		___tokenMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___tokenMap_0, value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(Tokenizer_t3681895715_StaticFields, ___tokens_1)); }
	inline ObjectU5BU5D_t3614634134* get_tokens_1() const { return ___tokens_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(ObjectU5BU5D_t3614634134* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier(&___tokens_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
