#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Serialization_JsonContract3987907316.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen670699445.h"
#include "mscorlib_System_Nullable_1_gen952719577.h"

// Mapbox.Json.Serialization.JsonContract
struct JsonContract_t3987907316;
// Mapbox.Json.JsonConverter
struct JsonConverter_t320544374;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonContainerContract
struct  JsonContainerContract_t3704404385  : public JsonContract_t3987907316
{
public:
	// Mapbox.Json.Serialization.JsonContract Mapbox.Json.Serialization.JsonContainerContract::_itemContract
	JsonContract_t3987907316 * ____itemContract_21;
	// Mapbox.Json.Serialization.JsonContract Mapbox.Json.Serialization.JsonContainerContract::_finalItemContract
	JsonContract_t3987907316 * ____finalItemContract_22;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonContainerContract::<ItemConverter>k__BackingField
	JsonConverter_t320544374 * ___U3CItemConverterU3Ek__BackingField_23;
	// System.Nullable`1<System.Boolean> Mapbox.Json.Serialization.JsonContainerContract::<ItemIsReference>k__BackingField
	Nullable_1_t2088641033  ___U3CItemIsReferenceU3Ek__BackingField_24;
	// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling> Mapbox.Json.Serialization.JsonContainerContract::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t670699445  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25;
	// System.Nullable`1<Mapbox.Json.TypeNameHandling> Mapbox.Json.Serialization.JsonContainerContract::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t952719577  ___U3CItemTypeNameHandlingU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of__itemContract_21() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ____itemContract_21)); }
	inline JsonContract_t3987907316 * get__itemContract_21() const { return ____itemContract_21; }
	inline JsonContract_t3987907316 ** get_address_of__itemContract_21() { return &____itemContract_21; }
	inline void set__itemContract_21(JsonContract_t3987907316 * value)
	{
		____itemContract_21 = value;
		Il2CppCodeGenWriteBarrier(&____itemContract_21, value);
	}

	inline static int32_t get_offset_of__finalItemContract_22() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ____finalItemContract_22)); }
	inline JsonContract_t3987907316 * get__finalItemContract_22() const { return ____finalItemContract_22; }
	inline JsonContract_t3987907316 ** get_address_of__finalItemContract_22() { return &____finalItemContract_22; }
	inline void set__finalItemContract_22(JsonContract_t3987907316 * value)
	{
		____finalItemContract_22 = value;
		Il2CppCodeGenWriteBarrier(&____finalItemContract_22, value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ___U3CItemConverterU3Ek__BackingField_23)); }
	inline JsonConverter_t320544374 * get_U3CItemConverterU3Ek__BackingField_23() const { return ___U3CItemConverterU3Ek__BackingField_23; }
	inline JsonConverter_t320544374 ** get_address_of_U3CItemConverterU3Ek__BackingField_23() { return &___U3CItemConverterU3Ek__BackingField_23; }
	inline void set_U3CItemConverterU3Ek__BackingField_23(JsonConverter_t320544374 * value)
	{
		___U3CItemConverterU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ___U3CItemIsReferenceU3Ek__BackingField_24)); }
	inline Nullable_1_t2088641033  get_U3CItemIsReferenceU3Ek__BackingField_24() const { return ___U3CItemIsReferenceU3Ek__BackingField_24; }
	inline Nullable_1_t2088641033 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_24() { return &___U3CItemIsReferenceU3Ek__BackingField_24; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_24(Nullable_1_t2088641033  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25)); }
	inline Nullable_1_t670699445  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_25; }
	inline Nullable_1_t670699445 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_25() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_25; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_25(Nullable_1_t670699445  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonContainerContract_t3704404385, ___U3CItemTypeNameHandlingU3Ek__BackingField_26)); }
	inline Nullable_1_t952719577  get_U3CItemTypeNameHandlingU3Ek__BackingField_26() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_26; }
	inline Nullable_1_t952719577 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_26() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_26; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_26(Nullable_1_t952719577  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
