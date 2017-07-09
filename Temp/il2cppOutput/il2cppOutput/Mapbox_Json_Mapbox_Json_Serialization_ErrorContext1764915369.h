#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.ErrorContext
struct  ErrorContext_t1764915369  : public Il2CppObject
{
public:
	// System.Boolean Mapbox.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Mapbox.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t1927440687 * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Mapbox.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	Il2CppObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Mapbox.Json.Serialization.ErrorContext::<Member>k__BackingField
	Il2CppObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Mapbox.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Mapbox.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t1927440687 * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t1927440687 ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t1927440687 * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline Il2CppObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline Il2CppObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(Il2CppObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3COriginalObjectU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3CMemberU3Ek__BackingField_3)); }
	inline Il2CppObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline Il2CppObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(Il2CppObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMemberU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_t1764915369, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
