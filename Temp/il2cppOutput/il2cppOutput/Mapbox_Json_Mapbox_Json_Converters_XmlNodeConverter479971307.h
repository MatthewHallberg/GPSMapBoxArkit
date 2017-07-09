#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_JsonConverter320544374.h"

// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>
struct List_1_t2403726058;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.XmlNodeConverter
struct  XmlNodeConverter_t479971307  : public JsonConverter_t320544374
{
public:
	// System.String Mapbox.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_1;
	// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_2;
	// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDeserializeRootElementNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t479971307, ___U3CDeserializeRootElementNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CDeserializeRootElementNameU3Ek__BackingField_1() const { return ___U3CDeserializeRootElementNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDeserializeRootElementNameU3Ek__BackingField_1() { return &___U3CDeserializeRootElementNameU3Ek__BackingField_1; }
	inline void set_U3CDeserializeRootElementNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CDeserializeRootElementNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeserializeRootElementNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CWriteArrayAttributeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t479971307, ___U3CWriteArrayAttributeU3Ek__BackingField_2)); }
	inline bool get_U3CWriteArrayAttributeU3Ek__BackingField_2() const { return ___U3CWriteArrayAttributeU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CWriteArrayAttributeU3Ek__BackingField_2() { return &___U3CWriteArrayAttributeU3Ek__BackingField_2; }
	inline void set_U3CWriteArrayAttributeU3Ek__BackingField_2(bool value)
	{
		___U3CWriteArrayAttributeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COmitRootObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t479971307, ___U3COmitRootObjectU3Ek__BackingField_3)); }
	inline bool get_U3COmitRootObjectU3Ek__BackingField_3() const { return ___U3COmitRootObjectU3Ek__BackingField_3; }
	inline bool* get_address_of_U3COmitRootObjectU3Ek__BackingField_3() { return &___U3COmitRootObjectU3Ek__BackingField_3; }
	inline void set_U3COmitRootObjectU3Ek__BackingField_3(bool value)
	{
		___U3COmitRootObjectU3Ek__BackingField_3 = value;
	}
};

struct XmlNodeConverter_t479971307_StaticFields
{
public:
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeConverter::EmptyChildNodes
	List_1_t2403726058 * ___EmptyChildNodes_0;

public:
	inline static int32_t get_offset_of_EmptyChildNodes_0() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t479971307_StaticFields, ___EmptyChildNodes_0)); }
	inline List_1_t2403726058 * get_EmptyChildNodes_0() const { return ___EmptyChildNodes_0; }
	inline List_1_t2403726058 ** get_address_of_EmptyChildNodes_0() { return &___EmptyChildNodes_0; }
	inline void set_EmptyChildNodes_0(List_1_t2403726058 * value)
	{
		___EmptyChildNodes_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyChildNodes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
