#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"

// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeReaderImpl
struct  XmlNodeReaderImpl_t2982135230  : public XmlReader_t3675626668
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNodeReaderImpl::document
	XmlDocument_t3649534162 * ___document_3;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::startNode
	XmlNode_t616554813 * ___startNode_4;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::current
	XmlNode_t616554813 * ___current_5;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::ownerLinkedNode
	XmlNode_t616554813 * ___ownerLinkedNode_6;
	// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::state
	int32_t ___state_7;
	// System.Int32 System.Xml.XmlNodeReaderImpl::depth
	int32_t ___depth_8;
	// System.Boolean System.Xml.XmlNodeReaderImpl::isEndElement
	bool ___isEndElement_9;
	// System.Boolean System.Xml.XmlNodeReaderImpl::ignoreStartNode
	bool ___ignoreStartNode_10;

public:
	inline static int32_t get_offset_of_document_3() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___document_3)); }
	inline XmlDocument_t3649534162 * get_document_3() const { return ___document_3; }
	inline XmlDocument_t3649534162 ** get_address_of_document_3() { return &___document_3; }
	inline void set_document_3(XmlDocument_t3649534162 * value)
	{
		___document_3 = value;
		Il2CppCodeGenWriteBarrier(&___document_3, value);
	}

	inline static int32_t get_offset_of_startNode_4() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___startNode_4)); }
	inline XmlNode_t616554813 * get_startNode_4() const { return ___startNode_4; }
	inline XmlNode_t616554813 ** get_address_of_startNode_4() { return &___startNode_4; }
	inline void set_startNode_4(XmlNode_t616554813 * value)
	{
		___startNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___startNode_4, value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___current_5)); }
	inline XmlNode_t616554813 * get_current_5() const { return ___current_5; }
	inline XmlNode_t616554813 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(XmlNode_t616554813 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier(&___current_5, value);
	}

	inline static int32_t get_offset_of_ownerLinkedNode_6() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___ownerLinkedNode_6)); }
	inline XmlNode_t616554813 * get_ownerLinkedNode_6() const { return ___ownerLinkedNode_6; }
	inline XmlNode_t616554813 ** get_address_of_ownerLinkedNode_6() { return &___ownerLinkedNode_6; }
	inline void set_ownerLinkedNode_6(XmlNode_t616554813 * value)
	{
		___ownerLinkedNode_6 = value;
		Il2CppCodeGenWriteBarrier(&___ownerLinkedNode_6, value);
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_depth_8() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___depth_8)); }
	inline int32_t get_depth_8() const { return ___depth_8; }
	inline int32_t* get_address_of_depth_8() { return &___depth_8; }
	inline void set_depth_8(int32_t value)
	{
		___depth_8 = value;
	}

	inline static int32_t get_offset_of_isEndElement_9() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___isEndElement_9)); }
	inline bool get_isEndElement_9() const { return ___isEndElement_9; }
	inline bool* get_address_of_isEndElement_9() { return &___isEndElement_9; }
	inline void set_isEndElement_9(bool value)
	{
		___isEndElement_9 = value;
	}

	inline static int32_t get_offset_of_ignoreStartNode_10() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230, ___ignoreStartNode_10)); }
	inline bool get_ignoreStartNode_10() const { return ___ignoreStartNode_10; }
	inline bool* get_address_of_ignoreStartNode_10() { return &___ignoreStartNode_10; }
	inline void set_ignoreStartNode_10(bool value)
	{
		___ignoreStartNode_10 = value;
	}
};

struct XmlNodeReaderImpl_t2982135230_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map4D
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map4D_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map4E
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map4E_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map4F
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map4F_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4D_11() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230_StaticFields, ___U3CU3Ef__switchU24map4D_11)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map4D_11() const { return ___U3CU3Ef__switchU24map4D_11; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map4D_11() { return &___U3CU3Ef__switchU24map4D_11; }
	inline void set_U3CU3Ef__switchU24map4D_11(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map4D_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4D_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4E_12() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230_StaticFields, ___U3CU3Ef__switchU24map4E_12)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map4E_12() const { return ___U3CU3Ef__switchU24map4E_12; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map4E_12() { return &___U3CU3Ef__switchU24map4E_12; }
	inline void set_U3CU3Ef__switchU24map4E_12(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map4E_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4E_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4F_13() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t2982135230_StaticFields, ___U3CU3Ef__switchU24map4F_13)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map4F_13() const { return ___U3CU3Ef__switchU24map4F_13; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map4F_13() { return &___U3CU3Ef__switchU24map4F_13; }
	inline void set_U3CU3Ef__switchU24map4F_13(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map4F_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4F_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
