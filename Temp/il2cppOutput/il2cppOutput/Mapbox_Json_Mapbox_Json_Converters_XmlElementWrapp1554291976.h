#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Converters_XmlNodeWrapper422542994.h"

// System.Xml.XmlElement
struct XmlElement_t2877111883;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.XmlElementWrapper
struct  XmlElementWrapper_t1554291976  : public XmlNodeWrapper_t422542994
{
public:
	// System.Xml.XmlElement Mapbox.Json.Converters.XmlElementWrapper::_element
	XmlElement_t2877111883 * ____element_3;

public:
	inline static int32_t get_offset_of__element_3() { return static_cast<int32_t>(offsetof(XmlElementWrapper_t1554291976, ____element_3)); }
	inline XmlElement_t2877111883 * get__element_3() const { return ____element_3; }
	inline XmlElement_t2877111883 ** get_address_of__element_3() { return &____element_3; }
	inline void set__element_3(XmlElement_t2877111883 * value)
	{
		____element_3 = value;
		Il2CppCodeGenWriteBarrier(&____element_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
