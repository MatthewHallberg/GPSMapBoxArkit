#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.List`1<Mapbox.Json.Serialization.SerializationErrorCallback>
struct List_1_t861228501;
// Mapbox.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t1492107369;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Serialization.SerializationErrorCallback>
struct  Enumerator_t395958175 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t861228501 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SerializationErrorCallback_t1492107369 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t395958175, ___l_0)); }
	inline List_1_t861228501 * get_l_0() const { return ___l_0; }
	inline List_1_t861228501 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t861228501 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t395958175, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t395958175, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t395958175, ___current_3)); }
	inline SerializationErrorCallback_t1492107369 * get_current_3() const { return ___current_3; }
	inline SerializationErrorCallback_t1492107369 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SerializationErrorCallback_t1492107369 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
