#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Bson_BsonToken1725176127.h"

// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>
struct List_1_t127522753;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Bson.BsonObject
struct  BsonObject_t920626115  : public BsonToken_t1725176127
{
public:
	// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty> Mapbox.Json.Bson.BsonObject::_children
	List_1_t127522753 * ____children_2;

public:
	inline static int32_t get_offset_of__children_2() { return static_cast<int32_t>(offsetof(BsonObject_t920626115, ____children_2)); }
	inline List_1_t127522753 * get__children_2() const { return ____children_2; }
	inline List_1_t127522753 ** get_address_of__children_2() { return &____children_2; }
	inline void set__children_2(List_1_t127522753 * value)
	{
		____children_2 = value;
		Il2CppCodeGenWriteBarrier(&____children_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
