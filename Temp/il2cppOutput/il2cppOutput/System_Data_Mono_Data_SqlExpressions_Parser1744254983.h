#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Mono.Data.SqlExpressions.yydebug.yyDebug
struct yyDebug_t2304358695;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int16[]
struct Int16U5BU5D_t3104283263;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Parser
struct  Parser_t1744254983  : public Il2CppObject
{
public:
	// System.Boolean Mono.Data.SqlExpressions.Parser::cacheAggregationResults
	bool ___cacheAggregationResults_0;
	// System.Data.DataRow[] Mono.Data.SqlExpressions.Parser::aggregationRows
	DataRowU5BU5D_t3318761029* ___aggregationRows_1;
	// System.IO.TextWriter Mono.Data.SqlExpressions.Parser::ErrorOutput
	TextWriter_t4027217640 * ___ErrorOutput_3;
	// System.Int32 Mono.Data.SqlExpressions.Parser::eof_token
	int32_t ___eof_token_4;
	// Mono.Data.SqlExpressions.yydebug.yyDebug Mono.Data.SqlExpressions.Parser::debug
	Il2CppObject * ___debug_5;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyExpectingState
	int32_t ___yyExpectingState_8;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyMax
	int32_t ___yyMax_9;

public:
	inline static int32_t get_offset_of_cacheAggregationResults_0() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___cacheAggregationResults_0)); }
	inline bool get_cacheAggregationResults_0() const { return ___cacheAggregationResults_0; }
	inline bool* get_address_of_cacheAggregationResults_0() { return &___cacheAggregationResults_0; }
	inline void set_cacheAggregationResults_0(bool value)
	{
		___cacheAggregationResults_0 = value;
	}

	inline static int32_t get_offset_of_aggregationRows_1() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___aggregationRows_1)); }
	inline DataRowU5BU5D_t3318761029* get_aggregationRows_1() const { return ___aggregationRows_1; }
	inline DataRowU5BU5D_t3318761029** get_address_of_aggregationRows_1() { return &___aggregationRows_1; }
	inline void set_aggregationRows_1(DataRowU5BU5D_t3318761029* value)
	{
		___aggregationRows_1 = value;
		Il2CppCodeGenWriteBarrier(&___aggregationRows_1, value);
	}

	inline static int32_t get_offset_of_ErrorOutput_3() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___ErrorOutput_3)); }
	inline TextWriter_t4027217640 * get_ErrorOutput_3() const { return ___ErrorOutput_3; }
	inline TextWriter_t4027217640 ** get_address_of_ErrorOutput_3() { return &___ErrorOutput_3; }
	inline void set_ErrorOutput_3(TextWriter_t4027217640 * value)
	{
		___ErrorOutput_3 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorOutput_3, value);
	}

	inline static int32_t get_offset_of_eof_token_4() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___eof_token_4)); }
	inline int32_t get_eof_token_4() const { return ___eof_token_4; }
	inline int32_t* get_address_of_eof_token_4() { return &___eof_token_4; }
	inline void set_eof_token_4(int32_t value)
	{
		___eof_token_4 = value;
	}

	inline static int32_t get_offset_of_debug_5() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___debug_5)); }
	inline Il2CppObject * get_debug_5() const { return ___debug_5; }
	inline Il2CppObject ** get_address_of_debug_5() { return &___debug_5; }
	inline void set_debug_5(Il2CppObject * value)
	{
		___debug_5 = value;
		Il2CppCodeGenWriteBarrier(&___debug_5, value);
	}

	inline static int32_t get_offset_of_yyExpectingState_8() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___yyExpectingState_8)); }
	inline int32_t get_yyExpectingState_8() const { return ___yyExpectingState_8; }
	inline int32_t* get_address_of_yyExpectingState_8() { return &___yyExpectingState_8; }
	inline void set_yyExpectingState_8(int32_t value)
	{
		___yyExpectingState_8 = value;
	}

	inline static int32_t get_offset_of_yyMax_9() { return static_cast<int32_t>(offsetof(Parser_t1744254983, ___yyMax_9)); }
	inline int32_t get_yyMax_9() const { return ___yyMax_9; }
	inline int32_t* get_address_of_yyMax_9() { return &___yyMax_9; }
	inline void set_yyMax_9(int32_t value)
	{
		___yyMax_9 = value;
	}
};

struct Parser_t1744254983_StaticFields
{
public:
	// System.Int32 Mono.Data.SqlExpressions.Parser::yacc_verbose_flag
	int32_t ___yacc_verbose_flag_2;
	// System.Int32 Mono.Data.SqlExpressions.Parser::yyFinal
	int32_t ___yyFinal_6;
	// System.String[] Mono.Data.SqlExpressions.Parser::yyNames
	StringU5BU5D_t1642385972* ___yyNames_7;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyLhs
	Int16U5BU5D_t3104283263* ___yyLhs_10;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyLen
	Int16U5BU5D_t3104283263* ___yyLen_11;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyDefRed
	Int16U5BU5D_t3104283263* ___yyDefRed_12;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyDgoto
	Int16U5BU5D_t3104283263* ___yyDgoto_13;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yySindex
	Int16U5BU5D_t3104283263* ___yySindex_14;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyRindex
	Int16U5BU5D_t3104283263* ___yyRindex_15;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyGindex
	Int16U5BU5D_t3104283263* ___yyGindex_16;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyTable
	Int16U5BU5D_t3104283263* ___yyTable_17;
	// System.Int16[] Mono.Data.SqlExpressions.Parser::yyCheck
	Int16U5BU5D_t3104283263* ___yyCheck_18;

public:
	inline static int32_t get_offset_of_yacc_verbose_flag_2() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yacc_verbose_flag_2)); }
	inline int32_t get_yacc_verbose_flag_2() const { return ___yacc_verbose_flag_2; }
	inline int32_t* get_address_of_yacc_verbose_flag_2() { return &___yacc_verbose_flag_2; }
	inline void set_yacc_verbose_flag_2(int32_t value)
	{
		___yacc_verbose_flag_2 = value;
	}

	inline static int32_t get_offset_of_yyFinal_6() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyFinal_6)); }
	inline int32_t get_yyFinal_6() const { return ___yyFinal_6; }
	inline int32_t* get_address_of_yyFinal_6() { return &___yyFinal_6; }
	inline void set_yyFinal_6(int32_t value)
	{
		___yyFinal_6 = value;
	}

	inline static int32_t get_offset_of_yyNames_7() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyNames_7)); }
	inline StringU5BU5D_t1642385972* get_yyNames_7() const { return ___yyNames_7; }
	inline StringU5BU5D_t1642385972** get_address_of_yyNames_7() { return &___yyNames_7; }
	inline void set_yyNames_7(StringU5BU5D_t1642385972* value)
	{
		___yyNames_7 = value;
		Il2CppCodeGenWriteBarrier(&___yyNames_7, value);
	}

	inline static int32_t get_offset_of_yyLhs_10() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyLhs_10)); }
	inline Int16U5BU5D_t3104283263* get_yyLhs_10() const { return ___yyLhs_10; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyLhs_10() { return &___yyLhs_10; }
	inline void set_yyLhs_10(Int16U5BU5D_t3104283263* value)
	{
		___yyLhs_10 = value;
		Il2CppCodeGenWriteBarrier(&___yyLhs_10, value);
	}

	inline static int32_t get_offset_of_yyLen_11() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyLen_11)); }
	inline Int16U5BU5D_t3104283263* get_yyLen_11() const { return ___yyLen_11; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyLen_11() { return &___yyLen_11; }
	inline void set_yyLen_11(Int16U5BU5D_t3104283263* value)
	{
		___yyLen_11 = value;
		Il2CppCodeGenWriteBarrier(&___yyLen_11, value);
	}

	inline static int32_t get_offset_of_yyDefRed_12() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyDefRed_12)); }
	inline Int16U5BU5D_t3104283263* get_yyDefRed_12() const { return ___yyDefRed_12; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyDefRed_12() { return &___yyDefRed_12; }
	inline void set_yyDefRed_12(Int16U5BU5D_t3104283263* value)
	{
		___yyDefRed_12 = value;
		Il2CppCodeGenWriteBarrier(&___yyDefRed_12, value);
	}

	inline static int32_t get_offset_of_yyDgoto_13() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyDgoto_13)); }
	inline Int16U5BU5D_t3104283263* get_yyDgoto_13() const { return ___yyDgoto_13; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyDgoto_13() { return &___yyDgoto_13; }
	inline void set_yyDgoto_13(Int16U5BU5D_t3104283263* value)
	{
		___yyDgoto_13 = value;
		Il2CppCodeGenWriteBarrier(&___yyDgoto_13, value);
	}

	inline static int32_t get_offset_of_yySindex_14() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yySindex_14)); }
	inline Int16U5BU5D_t3104283263* get_yySindex_14() const { return ___yySindex_14; }
	inline Int16U5BU5D_t3104283263** get_address_of_yySindex_14() { return &___yySindex_14; }
	inline void set_yySindex_14(Int16U5BU5D_t3104283263* value)
	{
		___yySindex_14 = value;
		Il2CppCodeGenWriteBarrier(&___yySindex_14, value);
	}

	inline static int32_t get_offset_of_yyRindex_15() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyRindex_15)); }
	inline Int16U5BU5D_t3104283263* get_yyRindex_15() const { return ___yyRindex_15; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyRindex_15() { return &___yyRindex_15; }
	inline void set_yyRindex_15(Int16U5BU5D_t3104283263* value)
	{
		___yyRindex_15 = value;
		Il2CppCodeGenWriteBarrier(&___yyRindex_15, value);
	}

	inline static int32_t get_offset_of_yyGindex_16() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyGindex_16)); }
	inline Int16U5BU5D_t3104283263* get_yyGindex_16() const { return ___yyGindex_16; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyGindex_16() { return &___yyGindex_16; }
	inline void set_yyGindex_16(Int16U5BU5D_t3104283263* value)
	{
		___yyGindex_16 = value;
		Il2CppCodeGenWriteBarrier(&___yyGindex_16, value);
	}

	inline static int32_t get_offset_of_yyTable_17() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyTable_17)); }
	inline Int16U5BU5D_t3104283263* get_yyTable_17() const { return ___yyTable_17; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyTable_17() { return &___yyTable_17; }
	inline void set_yyTable_17(Int16U5BU5D_t3104283263* value)
	{
		___yyTable_17 = value;
		Il2CppCodeGenWriteBarrier(&___yyTable_17, value);
	}

	inline static int32_t get_offset_of_yyCheck_18() { return static_cast<int32_t>(offsetof(Parser_t1744254983_StaticFields, ___yyCheck_18)); }
	inline Int16U5BU5D_t3104283263* get_yyCheck_18() const { return ___yyCheck_18; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyCheck_18() { return &___yyCheck_18; }
	inline void set_yyCheck_18(Int16U5BU5D_t3104283263* value)
	{
		___yyCheck_18 = value;
		Il2CppCodeGenWriteBarrier(&___yyCheck_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
