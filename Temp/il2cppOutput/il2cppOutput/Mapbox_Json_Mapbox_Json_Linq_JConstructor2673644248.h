#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Linq_JContainer1655356485.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<Mapbox.Json.Linq.JToken>
struct List_1_t3885673667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JConstructor
struct  JConstructor_t2673644248  : public JContainer_t1655356485
{
public:
	// System.String Mapbox.Json.Linq.JConstructor::_name
	String_t* ____name_14;
	// System.Collections.Generic.List`1<Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JConstructor::_values
	List_1_t3885673667 * ____values_15;

public:
	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(JConstructor_t2673644248, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier(&____name_14, value);
	}

	inline static int32_t get_offset_of__values_15() { return static_cast<int32_t>(offsetof(JConstructor_t2673644248, ____values_15)); }
	inline List_1_t3885673667 * get__values_15() const { return ____values_15; }
	inline List_1_t3885673667 ** get_address_of__values_15() { return &____values_15; }
	inline void set__values_15(List_1_t3885673667 * value)
	{
		____values_15 = value;
		Il2CppCodeGenWriteBarrier(&____values_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
