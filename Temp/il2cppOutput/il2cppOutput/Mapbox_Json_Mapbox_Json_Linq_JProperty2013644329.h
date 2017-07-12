#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Linq_JContainer1655356485.h"

// Mapbox.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t2656545778;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JProperty
struct  JProperty_t2013644329  : public JContainer_t1655356485
{
public:
	// Mapbox.Json.Linq.JProperty/JPropertyList Mapbox.Json.Linq.JProperty::_content
	JPropertyList_t2656545778 * ____content_14;
	// System.String Mapbox.Json.Linq.JProperty::_name
	String_t* ____name_15;

public:
	inline static int32_t get_offset_of__content_14() { return static_cast<int32_t>(offsetof(JProperty_t2013644329, ____content_14)); }
	inline JPropertyList_t2656545778 * get__content_14() const { return ____content_14; }
	inline JPropertyList_t2656545778 ** get_address_of__content_14() { return &____content_14; }
	inline void set__content_14(JPropertyList_t2656545778 * value)
	{
		____content_14 = value;
		Il2CppCodeGenWriteBarrier(&____content_14, value);
	}

	inline static int32_t get_offset_of__name_15() { return static_cast<int32_t>(offsetof(JProperty_t2013644329, ____name_15)); }
	inline String_t* get__name_15() const { return ____name_15; }
	inline String_t** get_address_of__name_15() { return &____name_15; }
	inline void set__name_15(String_t* value)
	{
		____name_15 = value;
		Il2CppCodeGenWriteBarrier(&____name_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
