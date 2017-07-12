#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_ObjectModel_Collection3870234317.h"

// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Json.Serialization.JsonProperty>
struct Dictionary_2_t1948301529;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1241853011;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.KeyedCollection`2<System.String,Mapbox.Json.Serialization.JsonProperty>
struct  KeyedCollection_2_t960852243  : public Collection_1_t3870234317
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TItem> System.Collections.ObjectModel.KeyedCollection`2::dictionary
	Dictionary_2_t1948301529 * ___dictionary_2;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.ObjectModel.KeyedCollection`2::comparer
	Il2CppObject* ___comparer_3;
	// System.Int32 System.Collections.ObjectModel.KeyedCollection`2::dictionaryCreationThreshold
	int32_t ___dictionaryCreationThreshold_4;

public:
	inline static int32_t get_offset_of_dictionary_2() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t960852243, ___dictionary_2)); }
	inline Dictionary_2_t1948301529 * get_dictionary_2() const { return ___dictionary_2; }
	inline Dictionary_2_t1948301529 ** get_address_of_dictionary_2() { return &___dictionary_2; }
	inline void set_dictionary_2(Dictionary_2_t1948301529 * value)
	{
		___dictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_2, value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t960852243, ___comparer_3)); }
	inline Il2CppObject* get_comparer_3() const { return ___comparer_3; }
	inline Il2CppObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(Il2CppObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_3, value);
	}

	inline static int32_t get_offset_of_dictionaryCreationThreshold_4() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t960852243, ___dictionaryCreationThreshold_4)); }
	inline int32_t get_dictionaryCreationThreshold_4() const { return ___dictionaryCreationThreshold_4; }
	inline int32_t* get_address_of_dictionaryCreationThreshold_4() { return &___dictionaryCreationThreshold_4; }
	inline void set_dictionaryCreationThreshold_4(int32_t value)
	{
		___dictionaryCreationThreshold_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
