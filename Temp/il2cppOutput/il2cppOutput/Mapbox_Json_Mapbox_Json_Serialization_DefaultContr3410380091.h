#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"

// Mapbox.Json.Serialization.IContractResolver
struct IContractResolver_t703495293;
// Mapbox.Json.JsonConverter[]
struct JsonConverterU5BU5D_t682998515;
// System.Object
struct Il2CppObject;
// Mapbox.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t4053401756;
// System.Collections.Generic.Dictionary`2<System.Type,Mapbox.Json.Serialization.JsonContract>
struct Dictionary_2_t1630297917;
// Mapbox.Json.Serialization.NamingStrategy
struct NamingStrategy_t3636901525;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.DefaultContractResolver
struct  DefaultContractResolver_t3410380091  : public Il2CppObject
{
public:
	// System.Object Mapbox.Json.Serialization.DefaultContractResolver::_typeContractCacheLock
	Il2CppObject * ____typeContractCacheLock_2;
	// Mapbox.Json.Utilities.PropertyNameTable Mapbox.Json.Serialization.DefaultContractResolver::_nameTable
	PropertyNameTable_t4053401756 * ____nameTable_3;
	// System.Collections.Generic.Dictionary`2<System.Type,Mapbox.Json.Serialization.JsonContract> Mapbox.Json.Serialization.DefaultContractResolver::_contractCache
	Dictionary_2_t1630297917 * ____contractCache_4;
	// System.Reflection.BindingFlags Mapbox.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5;
	// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6;
	// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7;
	// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8;
	// Mapbox.Json.Serialization.NamingStrategy Mapbox.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_t3636901525 * ___U3CNamingStrategyU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__typeContractCacheLock_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ____typeContractCacheLock_2)); }
	inline Il2CppObject * get__typeContractCacheLock_2() const { return ____typeContractCacheLock_2; }
	inline Il2CppObject ** get_address_of__typeContractCacheLock_2() { return &____typeContractCacheLock_2; }
	inline void set__typeContractCacheLock_2(Il2CppObject * value)
	{
		____typeContractCacheLock_2 = value;
		Il2CppCodeGenWriteBarrier(&____typeContractCacheLock_2, value);
	}

	inline static int32_t get_offset_of__nameTable_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ____nameTable_3)); }
	inline PropertyNameTable_t4053401756 * get__nameTable_3() const { return ____nameTable_3; }
	inline PropertyNameTable_t4053401756 ** get_address_of__nameTable_3() { return &____nameTable_3; }
	inline void set__nameTable_3(PropertyNameTable_t4053401756 * value)
	{
		____nameTable_3 = value;
		Il2CppCodeGenWriteBarrier(&____nameTable_3, value);
	}

	inline static int32_t get_offset_of__contractCache_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ____contractCache_4)); }
	inline Dictionary_2_t1630297917 * get__contractCache_4() const { return ____contractCache_4; }
	inline Dictionary_2_t1630297917 ** get_address_of__contractCache_4() { return &____contractCache_4; }
	inline void set__contractCache_4(Dictionary_2_t1630297917 * value)
	{
		____contractCache_4 = value;
		Il2CppCodeGenWriteBarrier(&____contractCache_4, value);
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7)); }
	inline bool get_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() const { return ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() { return &___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7; }
	inline void set_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7(bool value)
	{
		___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8)); }
	inline bool get_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() const { return ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() { return &___U3CIgnoreSerializableAttributeU3Ek__BackingField_8; }
	inline void set_U3CIgnoreSerializableAttributeU3Ek__BackingField_8(bool value)
	{
		___U3CIgnoreSerializableAttributeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CNamingStrategyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091, ___U3CNamingStrategyU3Ek__BackingField_9)); }
	inline NamingStrategy_t3636901525 * get_U3CNamingStrategyU3Ek__BackingField_9() const { return ___U3CNamingStrategyU3Ek__BackingField_9; }
	inline NamingStrategy_t3636901525 ** get_address_of_U3CNamingStrategyU3Ek__BackingField_9() { return &___U3CNamingStrategyU3Ek__BackingField_9; }
	inline void set_U3CNamingStrategyU3Ek__BackingField_9(NamingStrategy_t3636901525 * value)
	{
		___U3CNamingStrategyU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNamingStrategyU3Ek__BackingField_9, value);
	}
};

struct DefaultContractResolver_t3410380091_StaticFields
{
public:
	// Mapbox.Json.Serialization.IContractResolver Mapbox.Json.Serialization.DefaultContractResolver::Instance
	Il2CppObject * ___Instance_0;
	// Mapbox.Json.JsonConverter[] Mapbox.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_t682998515* ___BuiltInConverters_1;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091_StaticFields, ___Instance_0)); }
	inline Il2CppObject * get_Instance_0() const { return ___Instance_0; }
	inline Il2CppObject ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Il2CppObject * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t3410380091_StaticFields, ___BuiltInConverters_1)); }
	inline JsonConverterU5BU5D_t682998515* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline JsonConverterU5BU5D_t682998515** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(JsonConverterU5BU5D_t682998515* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier(&___BuiltInConverters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
