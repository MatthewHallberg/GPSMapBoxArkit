#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_ObjectModel_KeyedCollec960852243.h"

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Mapbox.Json.Serialization.JsonProperty>
struct List_1_t3697610695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonPropertyCollection
struct  JsonPropertyCollection_t781828915  : public KeyedCollection_2_t960852243
{
public:
	// System.Type Mapbox.Json.Serialization.JsonPropertyCollection::_type
	Type_t * ____type_5;
	// System.Collections.Generic.List`1<Mapbox.Json.Serialization.JsonProperty> Mapbox.Json.Serialization.JsonPropertyCollection::_list
	List_1_t3697610695 * ____list_6;

public:
	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_t781828915, ____type_5)); }
	inline Type_t * get__type_5() const { return ____type_5; }
	inline Type_t ** get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(Type_t * value)
	{
		____type_5 = value;
		Il2CppCodeGenWriteBarrier(&____type_5, value);
	}

	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_t781828915, ____list_6)); }
	inline List_1_t3697610695 * get__list_6() const { return ____list_6; }
	inline List_1_t3697610695 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(List_1_t3697610695 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier(&____list_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
