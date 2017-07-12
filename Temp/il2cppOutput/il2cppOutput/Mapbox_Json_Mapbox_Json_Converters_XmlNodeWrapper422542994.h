#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>
struct List_1_t2403726058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.XmlNodeWrapper
struct  XmlNodeWrapper_t422542994  : public Il2CppObject
{
public:
	// System.Xml.XmlNode Mapbox.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t616554813 * ____node_0;
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_t2403726058 * ____childNodes_1;
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::_attributes
	List_1_t2403726058 * ____attributes_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t422542994, ____node_0)); }
	inline XmlNode_t616554813 * get__node_0() const { return ____node_0; }
	inline XmlNode_t616554813 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(XmlNode_t616554813 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier(&____node_0, value);
	}

	inline static int32_t get_offset_of__childNodes_1() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t422542994, ____childNodes_1)); }
	inline List_1_t2403726058 * get__childNodes_1() const { return ____childNodes_1; }
	inline List_1_t2403726058 ** get_address_of__childNodes_1() { return &____childNodes_1; }
	inline void set__childNodes_1(List_1_t2403726058 * value)
	{
		____childNodes_1 = value;
		Il2CppCodeGenWriteBarrier(&____childNodes_1, value);
	}

	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t422542994, ____attributes_2)); }
	inline List_1_t2403726058 * get__attributes_2() const { return ____attributes_2; }
	inline List_1_t2403726058 ** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(List_1_t2403726058 * value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier(&____attributes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
