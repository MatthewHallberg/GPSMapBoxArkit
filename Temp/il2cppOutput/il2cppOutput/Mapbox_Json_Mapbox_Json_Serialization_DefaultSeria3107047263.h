#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"

// Mapbox.Json.Serialization.DefaultSerializationBinder
struct DefaultSerializationBinder_t3107047263;
// Mapbox.Json.Utilities.ThreadSafeStore`2<Mapbox.Json.Utilities.TypeNameKey,System.Type>
struct ThreadSafeStore_2_t1037735079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.DefaultSerializationBinder
struct  DefaultSerializationBinder_t3107047263  : public SerializationBinder_t3985864818
{
public:
	// Mapbox.Json.Utilities.ThreadSafeStore`2<Mapbox.Json.Utilities.TypeNameKey,System.Type> Mapbox.Json.Serialization.DefaultSerializationBinder::_typeCache
	ThreadSafeStore_2_t1037735079 * ____typeCache_1;

public:
	inline static int32_t get_offset_of__typeCache_1() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t3107047263, ____typeCache_1)); }
	inline ThreadSafeStore_2_t1037735079 * get__typeCache_1() const { return ____typeCache_1; }
	inline ThreadSafeStore_2_t1037735079 ** get_address_of__typeCache_1() { return &____typeCache_1; }
	inline void set__typeCache_1(ThreadSafeStore_2_t1037735079 * value)
	{
		____typeCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeCache_1, value);
	}
};

struct DefaultSerializationBinder_t3107047263_StaticFields
{
public:
	// Mapbox.Json.Serialization.DefaultSerializationBinder Mapbox.Json.Serialization.DefaultSerializationBinder::Instance
	DefaultSerializationBinder_t3107047263 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t3107047263_StaticFields, ___Instance_0)); }
	inline DefaultSerializationBinder_t3107047263 * get_Instance_0() const { return ___Instance_0; }
	inline DefaultSerializationBinder_t3107047263 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DefaultSerializationBinder_t3107047263 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
