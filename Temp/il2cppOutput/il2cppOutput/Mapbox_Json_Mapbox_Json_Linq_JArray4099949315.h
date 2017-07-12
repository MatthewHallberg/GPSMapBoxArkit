#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Linq_JContainer1655356485.h"

// System.Collections.Generic.List`1<Mapbox.Json.Linq.JToken>
struct List_1_t3885673667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JArray
struct  JArray_t4099949315  : public JContainer_t1655356485
{
public:
	// System.Collections.Generic.List`1<Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JArray::_values
	List_1_t3885673667 * ____values_14;

public:
	inline static int32_t get_offset_of__values_14() { return static_cast<int32_t>(offsetof(JArray_t4099949315, ____values_14)); }
	inline List_1_t3885673667 * get__values_14() const { return ____values_14; }
	inline List_1_t3885673667 ** get_address_of__values_14() { return &____values_14; }
	inline void set__values_14(List_1_t3885673667 * value)
	{
		____values_14 = value;
		Il2CppCodeGenWriteBarrier(&____values_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
