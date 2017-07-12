#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState3530111136.h"
#include "System_Xml_System_Xml_NewLineHandling1737195169.h"
#include "System_Xml_System_Xml_WriteState1534871862.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_NamespaceHandling1452270444.h"

// System.Text.Encoding
struct Encoding_t663144255;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t2015100792;
// System.Collections.Stack
struct Stack_t1043988394;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2527250655  : public XmlWriter_t1048088568
{
public:
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t3255436806 * ___base_stream_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t4027217640 * ___source_5;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t4027217640 * ___writer_6;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t4139609088 * ___preserver_7;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_8;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_9;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_10;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_11;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_12;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_13;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_14;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_15;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_16;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_17;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_18;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_19;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t486731501 * ___nsmanager_20;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_21;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t2015100792* ___elements_22;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t1043988394 * ___new_local_namespaces_23;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t4252133567 * ___explicit_nsdecls_24;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_25;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_26;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_27;
	// System.Char System.Xml.XmlTextWriter::indent_char
	Il2CppChar ___indent_char_28;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_29;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_30;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_31;
	// System.Char System.Xml.XmlTextWriter::quote_char
	Il2CppChar ___quote_char_32;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_33;

public:
	inline static int32_t get_offset_of_base_stream_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___base_stream_4)); }
	inline Stream_t3255436806 * get_base_stream_4() const { return ___base_stream_4; }
	inline Stream_t3255436806 ** get_address_of_base_stream_4() { return &___base_stream_4; }
	inline void set_base_stream_4(Stream_t3255436806 * value)
	{
		___base_stream_4 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_4, value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___source_5)); }
	inline TextWriter_t4027217640 * get_source_5() const { return ___source_5; }
	inline TextWriter_t4027217640 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(TextWriter_t4027217640 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier(&___source_5, value);
	}

	inline static int32_t get_offset_of_writer_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___writer_6)); }
	inline TextWriter_t4027217640 * get_writer_6() const { return ___writer_6; }
	inline TextWriter_t4027217640 ** get_address_of_writer_6() { return &___writer_6; }
	inline void set_writer_6(TextWriter_t4027217640 * value)
	{
		___writer_6 = value;
		Il2CppCodeGenWriteBarrier(&___writer_6, value);
	}

	inline static int32_t get_offset_of_preserver_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___preserver_7)); }
	inline StringWriter_t4139609088 * get_preserver_7() const { return ___preserver_7; }
	inline StringWriter_t4139609088 ** get_address_of_preserver_7() { return &___preserver_7; }
	inline void set_preserver_7(StringWriter_t4139609088 * value)
	{
		___preserver_7 = value;
		Il2CppCodeGenWriteBarrier(&___preserver_7, value);
	}

	inline static int32_t get_offset_of_preserved_name_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___preserved_name_8)); }
	inline String_t* get_preserved_name_8() const { return ___preserved_name_8; }
	inline String_t** get_address_of_preserved_name_8() { return &___preserved_name_8; }
	inline void set_preserved_name_8(String_t* value)
	{
		___preserved_name_8 = value;
		Il2CppCodeGenWriteBarrier(&___preserved_name_8, value);
	}

	inline static int32_t get_offset_of_is_preserved_xmlns_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___is_preserved_xmlns_9)); }
	inline bool get_is_preserved_xmlns_9() const { return ___is_preserved_xmlns_9; }
	inline bool* get_address_of_is_preserved_xmlns_9() { return &___is_preserved_xmlns_9; }
	inline void set_is_preserved_xmlns_9(bool value)
	{
		___is_preserved_xmlns_9 = value;
	}

	inline static int32_t get_offset_of_allow_doc_fragment_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___allow_doc_fragment_10)); }
	inline bool get_allow_doc_fragment_10() const { return ___allow_doc_fragment_10; }
	inline bool* get_address_of_allow_doc_fragment_10() { return &___allow_doc_fragment_10; }
	inline void set_allow_doc_fragment_10(bool value)
	{
		___allow_doc_fragment_10 = value;
	}

	inline static int32_t get_offset_of_close_output_stream_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___close_output_stream_11)); }
	inline bool get_close_output_stream_11() const { return ___close_output_stream_11; }
	inline bool* get_address_of_close_output_stream_11() { return &___close_output_stream_11; }
	inline void set_close_output_stream_11(bool value)
	{
		___close_output_stream_11 = value;
	}

	inline static int32_t get_offset_of_ignore_encoding_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___ignore_encoding_12)); }
	inline bool get_ignore_encoding_12() const { return ___ignore_encoding_12; }
	inline bool* get_address_of_ignore_encoding_12() { return &___ignore_encoding_12; }
	inline void set_ignore_encoding_12(bool value)
	{
		___ignore_encoding_12 = value;
	}

	inline static int32_t get_offset_of_namespaces_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___namespaces_13)); }
	inline bool get_namespaces_13() const { return ___namespaces_13; }
	inline bool* get_address_of_namespaces_13() { return &___namespaces_13; }
	inline void set_namespaces_13(bool value)
	{
		___namespaces_13 = value;
	}

	inline static int32_t get_offset_of_xmldecl_state_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___xmldecl_state_14)); }
	inline int32_t get_xmldecl_state_14() const { return ___xmldecl_state_14; }
	inline int32_t* get_address_of_xmldecl_state_14() { return &___xmldecl_state_14; }
	inline void set_xmldecl_state_14(int32_t value)
	{
		___xmldecl_state_14 = value;
	}

	inline static int32_t get_offset_of_check_character_validity_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___check_character_validity_15)); }
	inline bool get_check_character_validity_15() const { return ___check_character_validity_15; }
	inline bool* get_address_of_check_character_validity_15() { return &___check_character_validity_15; }
	inline void set_check_character_validity_15(bool value)
	{
		___check_character_validity_15 = value;
	}

	inline static int32_t get_offset_of_newline_handling_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___newline_handling_16)); }
	inline int32_t get_newline_handling_16() const { return ___newline_handling_16; }
	inline int32_t* get_address_of_newline_handling_16() { return &___newline_handling_16; }
	inline void set_newline_handling_16(int32_t value)
	{
		___newline_handling_16 = value;
	}

	inline static int32_t get_offset_of_is_document_entity_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___is_document_entity_17)); }
	inline bool get_is_document_entity_17() const { return ___is_document_entity_17; }
	inline bool* get_address_of_is_document_entity_17() { return &___is_document_entity_17; }
	inline void set_is_document_entity_17(bool value)
	{
		___is_document_entity_17 = value;
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___state_18)); }
	inline int32_t get_state_18() const { return ___state_18; }
	inline int32_t* get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(int32_t value)
	{
		___state_18 = value;
	}

	inline static int32_t get_offset_of_node_state_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___node_state_19)); }
	inline int32_t get_node_state_19() const { return ___node_state_19; }
	inline int32_t* get_address_of_node_state_19() { return &___node_state_19; }
	inline void set_node_state_19(int32_t value)
	{
		___node_state_19 = value;
	}

	inline static int32_t get_offset_of_nsmanager_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___nsmanager_20)); }
	inline XmlNamespaceManager_t486731501 * get_nsmanager_20() const { return ___nsmanager_20; }
	inline XmlNamespaceManager_t486731501 ** get_address_of_nsmanager_20() { return &___nsmanager_20; }
	inline void set_nsmanager_20(XmlNamespaceManager_t486731501 * value)
	{
		___nsmanager_20 = value;
		Il2CppCodeGenWriteBarrier(&___nsmanager_20, value);
	}

	inline static int32_t get_offset_of_open_count_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___open_count_21)); }
	inline int32_t get_open_count_21() const { return ___open_count_21; }
	inline int32_t* get_address_of_open_count_21() { return &___open_count_21; }
	inline void set_open_count_21(int32_t value)
	{
		___open_count_21 = value;
	}

	inline static int32_t get_offset_of_elements_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___elements_22)); }
	inline XmlNodeInfoU5BU5D_t2015100792* get_elements_22() const { return ___elements_22; }
	inline XmlNodeInfoU5BU5D_t2015100792** get_address_of_elements_22() { return &___elements_22; }
	inline void set_elements_22(XmlNodeInfoU5BU5D_t2015100792* value)
	{
		___elements_22 = value;
		Il2CppCodeGenWriteBarrier(&___elements_22, value);
	}

	inline static int32_t get_offset_of_new_local_namespaces_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___new_local_namespaces_23)); }
	inline Stack_t1043988394 * get_new_local_namespaces_23() const { return ___new_local_namespaces_23; }
	inline Stack_t1043988394 ** get_address_of_new_local_namespaces_23() { return &___new_local_namespaces_23; }
	inline void set_new_local_namespaces_23(Stack_t1043988394 * value)
	{
		___new_local_namespaces_23 = value;
		Il2CppCodeGenWriteBarrier(&___new_local_namespaces_23, value);
	}

	inline static int32_t get_offset_of_explicit_nsdecls_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___explicit_nsdecls_24)); }
	inline ArrayList_t4252133567 * get_explicit_nsdecls_24() const { return ___explicit_nsdecls_24; }
	inline ArrayList_t4252133567 ** get_address_of_explicit_nsdecls_24() { return &___explicit_nsdecls_24; }
	inline void set_explicit_nsdecls_24(ArrayList_t4252133567 * value)
	{
		___explicit_nsdecls_24 = value;
		Il2CppCodeGenWriteBarrier(&___explicit_nsdecls_24, value);
	}

	inline static int32_t get_offset_of_namespace_handling_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___namespace_handling_25)); }
	inline int32_t get_namespace_handling_25() const { return ___namespace_handling_25; }
	inline int32_t* get_address_of_namespace_handling_25() { return &___namespace_handling_25; }
	inline void set_namespace_handling_25(int32_t value)
	{
		___namespace_handling_25 = value;
	}

	inline static int32_t get_offset_of_indent_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___indent_26)); }
	inline bool get_indent_26() const { return ___indent_26; }
	inline bool* get_address_of_indent_26() { return &___indent_26; }
	inline void set_indent_26(bool value)
	{
		___indent_26 = value;
	}

	inline static int32_t get_offset_of_indent_count_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___indent_count_27)); }
	inline int32_t get_indent_count_27() const { return ___indent_count_27; }
	inline int32_t* get_address_of_indent_count_27() { return &___indent_count_27; }
	inline void set_indent_count_27(int32_t value)
	{
		___indent_count_27 = value;
	}

	inline static int32_t get_offset_of_indent_char_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___indent_char_28)); }
	inline Il2CppChar get_indent_char_28() const { return ___indent_char_28; }
	inline Il2CppChar* get_address_of_indent_char_28() { return &___indent_char_28; }
	inline void set_indent_char_28(Il2CppChar value)
	{
		___indent_char_28 = value;
	}

	inline static int32_t get_offset_of_indent_string_29() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___indent_string_29)); }
	inline String_t* get_indent_string_29() const { return ___indent_string_29; }
	inline String_t** get_address_of_indent_string_29() { return &___indent_string_29; }
	inline void set_indent_string_29(String_t* value)
	{
		___indent_string_29 = value;
		Il2CppCodeGenWriteBarrier(&___indent_string_29, value);
	}

	inline static int32_t get_offset_of_newline_30() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___newline_30)); }
	inline String_t* get_newline_30() const { return ___newline_30; }
	inline String_t** get_address_of_newline_30() { return &___newline_30; }
	inline void set_newline_30(String_t* value)
	{
		___newline_30 = value;
		Il2CppCodeGenWriteBarrier(&___newline_30, value);
	}

	inline static int32_t get_offset_of_indent_attributes_31() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___indent_attributes_31)); }
	inline bool get_indent_attributes_31() const { return ___indent_attributes_31; }
	inline bool* get_address_of_indent_attributes_31() { return &___indent_attributes_31; }
	inline void set_indent_attributes_31(bool value)
	{
		___indent_attributes_31 = value;
	}

	inline static int32_t get_offset_of_quote_char_32() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___quote_char_32)); }
	inline Il2CppChar get_quote_char_32() const { return ___quote_char_32; }
	inline Il2CppChar* get_address_of_quote_char_32() { return &___quote_char_32; }
	inline void set_quote_char_32(Il2CppChar value)
	{
		___quote_char_32 = value;
	}

	inline static int32_t get_offset_of_v2_33() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655, ___v2_33)); }
	inline bool get_v2_33() const { return ___v2_33; }
	inline bool* get_address_of_v2_33() { return &___v2_33; }
	inline void set_v2_33(bool value)
	{
		___v2_33 = value;
	}
};

struct XmlTextWriter_t2527250655_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t663144255 * ___unmarked_utf8encoding_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t1328083999* ___escaped_text_chars_2;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t1328083999* ___escaped_attr_chars_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map53_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map54_35;

public:
	inline static int32_t get_offset_of_unmarked_utf8encoding_1() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655_StaticFields, ___unmarked_utf8encoding_1)); }
	inline Encoding_t663144255 * get_unmarked_utf8encoding_1() const { return ___unmarked_utf8encoding_1; }
	inline Encoding_t663144255 ** get_address_of_unmarked_utf8encoding_1() { return &___unmarked_utf8encoding_1; }
	inline void set_unmarked_utf8encoding_1(Encoding_t663144255 * value)
	{
		___unmarked_utf8encoding_1 = value;
		Il2CppCodeGenWriteBarrier(&___unmarked_utf8encoding_1, value);
	}

	inline static int32_t get_offset_of_escaped_text_chars_2() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655_StaticFields, ___escaped_text_chars_2)); }
	inline CharU5BU5D_t1328083999* get_escaped_text_chars_2() const { return ___escaped_text_chars_2; }
	inline CharU5BU5D_t1328083999** get_address_of_escaped_text_chars_2() { return &___escaped_text_chars_2; }
	inline void set_escaped_text_chars_2(CharU5BU5D_t1328083999* value)
	{
		___escaped_text_chars_2 = value;
		Il2CppCodeGenWriteBarrier(&___escaped_text_chars_2, value);
	}

	inline static int32_t get_offset_of_escaped_attr_chars_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655_StaticFields, ___escaped_attr_chars_3)); }
	inline CharU5BU5D_t1328083999* get_escaped_attr_chars_3() const { return ___escaped_attr_chars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_escaped_attr_chars_3() { return &___escaped_attr_chars_3; }
	inline void set_escaped_attr_chars_3(CharU5BU5D_t1328083999* value)
	{
		___escaped_attr_chars_3 = value;
		Il2CppCodeGenWriteBarrier(&___escaped_attr_chars_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map53_34() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655_StaticFields, ___U3CU3Ef__switchU24map53_34)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map53_34() const { return ___U3CU3Ef__switchU24map53_34; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map53_34() { return &___U3CU3Ef__switchU24map53_34; }
	inline void set_U3CU3Ef__switchU24map53_34(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map53_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map53_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map54_35() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2527250655_StaticFields, ___U3CU3Ef__switchU24map54_35)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map54_35() const { return ___U3CU3Ef__switchU24map54_35; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map54_35() { return &___U3CU3Ef__switchU24map54_35; }
	inline void set_U3CU3Ef__switchU24map54_35(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map54_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map54_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
