#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Converters_XObjectWrapper2678687440.h"

// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>
struct List_1_t2403726058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.XContainerWrapper
struct  XContainerWrapper_t1500936920  : public XObjectWrapper_t2678687440
{
public:
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XContainerWrapper::_childNodes
	List_1_t2403726058 * ____childNodes_1;

public:
	inline static int32_t get_offset_of__childNodes_1() { return static_cast<int32_t>(offsetof(XContainerWrapper_t1500936920, ____childNodes_1)); }
	inline List_1_t2403726058 * get__childNodes_1() const { return ____childNodes_1; }
	inline List_1_t2403726058 ** get_address_of__childNodes_1() { return &____childNodes_1; }
	inline void set__childNodes_1(List_1_t2403726058 * value)
	{
		____childNodes_1 = value;
		Il2CppCodeGenWriteBarrier(&____childNodes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
