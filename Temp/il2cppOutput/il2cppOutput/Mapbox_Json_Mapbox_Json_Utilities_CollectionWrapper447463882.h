#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IList
struct IList_t3321498491;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.CollectionWrapper`1<System.Object>
struct  CollectionWrapper_1_t447463882  : public Il2CppObject
{
public:
	// System.Collections.IList Mapbox.Json.Utilities.CollectionWrapper`1::_list
	Il2CppObject * ____list_0;
	// System.Collections.Generic.ICollection`1<T> Mapbox.Json.Utilities.CollectionWrapper`1::_genericCollection
	Il2CppObject* ____genericCollection_1;
	// System.Object Mapbox.Json.Utilities.CollectionWrapper`1::_syncRoot
	Il2CppObject * ____syncRoot_2;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CollectionWrapper_1_t447463882, ____list_0)); }
	inline Il2CppObject * get__list_0() const { return ____list_0; }
	inline Il2CppObject ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(Il2CppObject * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}

	inline static int32_t get_offset_of__genericCollection_1() { return static_cast<int32_t>(offsetof(CollectionWrapper_1_t447463882, ____genericCollection_1)); }
	inline Il2CppObject* get__genericCollection_1() const { return ____genericCollection_1; }
	inline Il2CppObject** get_address_of__genericCollection_1() { return &____genericCollection_1; }
	inline void set__genericCollection_1(Il2CppObject* value)
	{
		____genericCollection_1 = value;
		Il2CppCodeGenWriteBarrier(&____genericCollection_1, value);
	}

	inline static int32_t get_offset_of__syncRoot_2() { return static_cast<int32_t>(offsetof(CollectionWrapper_1_t447463882, ____syncRoot_2)); }
	inline Il2CppObject * get__syncRoot_2() const { return ____syncRoot_2; }
	inline Il2CppObject ** get_address_of__syncRoot_2() { return &____syncRoot_2; }
	inline void set__syncRoot_2(Il2CppObject * value)
	{
		____syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
