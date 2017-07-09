#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XObject3550811009.h"

// System.Xml.Linq.XNodeEqualityComparer
struct XNodeEqualityComparer_t3116038621;
// System.Xml.Linq.XNodeDocumentOrderComparer
struct XNodeDocumentOrderComparer_t1208684534;
// System.Xml.Linq.XNode
struct XNode_t2707504214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNode
struct  XNode_t2707504214  : public XObject_t3550811009
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::previous
	XNode_t2707504214 * ___previous_6;
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t2707504214 * ___next_7;

public:
	inline static int32_t get_offset_of_previous_6() { return static_cast<int32_t>(offsetof(XNode_t2707504214, ___previous_6)); }
	inline XNode_t2707504214 * get_previous_6() const { return ___previous_6; }
	inline XNode_t2707504214 ** get_address_of_previous_6() { return &___previous_6; }
	inline void set_previous_6(XNode_t2707504214 * value)
	{
		___previous_6 = value;
		Il2CppCodeGenWriteBarrier(&___previous_6, value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XNode_t2707504214, ___next_7)); }
	inline XNode_t2707504214 * get_next_7() const { return ___next_7; }
	inline XNode_t2707504214 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XNode_t2707504214 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier(&___next_7, value);
	}
};

struct XNode_t2707504214_StaticFields
{
public:
	// System.Xml.Linq.XNodeEqualityComparer System.Xml.Linq.XNode::eq_comparer
	XNodeEqualityComparer_t3116038621 * ___eq_comparer_4;
	// System.Xml.Linq.XNodeDocumentOrderComparer System.Xml.Linq.XNode::order_comparer
	XNodeDocumentOrderComparer_t1208684534 * ___order_comparer_5;

public:
	inline static int32_t get_offset_of_eq_comparer_4() { return static_cast<int32_t>(offsetof(XNode_t2707504214_StaticFields, ___eq_comparer_4)); }
	inline XNodeEqualityComparer_t3116038621 * get_eq_comparer_4() const { return ___eq_comparer_4; }
	inline XNodeEqualityComparer_t3116038621 ** get_address_of_eq_comparer_4() { return &___eq_comparer_4; }
	inline void set_eq_comparer_4(XNodeEqualityComparer_t3116038621 * value)
	{
		___eq_comparer_4 = value;
		Il2CppCodeGenWriteBarrier(&___eq_comparer_4, value);
	}

	inline static int32_t get_offset_of_order_comparer_5() { return static_cast<int32_t>(offsetof(XNode_t2707504214_StaticFields, ___order_comparer_5)); }
	inline XNodeDocumentOrderComparer_t1208684534 * get_order_comparer_5() const { return ___order_comparer_5; }
	inline XNodeDocumentOrderComparer_t1208684534 ** get_address_of_order_comparer_5() { return &___order_comparer_5; }
	inline void set_order_comparer_5(XNodeDocumentOrderComparer_t1208684534 * value)
	{
		___order_comparer_5 = value;
		Il2CppCodeGenWriteBarrier(&___order_comparer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
