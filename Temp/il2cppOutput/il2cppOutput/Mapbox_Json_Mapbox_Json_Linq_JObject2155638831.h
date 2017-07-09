#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Linq_JContainer1655356485.h"

// Mapbox.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t2356483311;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JObject
struct  JObject_t2155638831  : public JContainer_t1655356485
{
public:
	// Mapbox.Json.Linq.JPropertyKeyedCollection Mapbox.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t2356483311 * ____properties_14;
	// System.ComponentModel.PropertyChangedEventHandler Mapbox.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t3042952059 * ___PropertyChanged_15;

public:
	inline static int32_t get_offset_of__properties_14() { return static_cast<int32_t>(offsetof(JObject_t2155638831, ____properties_14)); }
	inline JPropertyKeyedCollection_t2356483311 * get__properties_14() const { return ____properties_14; }
	inline JPropertyKeyedCollection_t2356483311 ** get_address_of__properties_14() { return &____properties_14; }
	inline void set__properties_14(JPropertyKeyedCollection_t2356483311 * value)
	{
		____properties_14 = value;
		Il2CppCodeGenWriteBarrier(&____properties_14, value);
	}

	inline static int32_t get_offset_of_PropertyChanged_15() { return static_cast<int32_t>(offsetof(JObject_t2155638831, ___PropertyChanged_15)); }
	inline PropertyChangedEventHandler_t3042952059 * get_PropertyChanged_15() const { return ___PropertyChanged_15; }
	inline PropertyChangedEventHandler_t3042952059 ** get_address_of_PropertyChanged_15() { return &___PropertyChanged_15; }
	inline void set_PropertyChanged_15(PropertyChangedEventHandler_t3042952059 * value)
	{
		___PropertyChanged_15 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyChanged_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
