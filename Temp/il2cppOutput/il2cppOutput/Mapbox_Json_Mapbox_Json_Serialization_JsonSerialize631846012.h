#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Json.Serialization.ErrorContext
struct ErrorContext_t1764915369;
// Mapbox.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t4161140910;
// Mapbox.Json.JsonSerializer
struct JsonSerializer_t754141078;
// Mapbox.Json.Serialization.ITraceWriter
struct ITraceWriter_t1085865043;
// Mapbox.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t231679858;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonSerializerInternalBase
struct  JsonSerializerInternalBase_t631846012  : public Il2CppObject
{
public:
	// Mapbox.Json.Serialization.ErrorContext Mapbox.Json.Serialization.JsonSerializerInternalBase::_currentErrorContext
	ErrorContext_t1764915369 * ____currentErrorContext_0;
	// Mapbox.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Mapbox.Json.Serialization.JsonSerializerInternalBase::_mappings
	BidirectionalDictionary_2_t4161140910 * ____mappings_1;
	// Mapbox.Json.JsonSerializer Mapbox.Json.Serialization.JsonSerializerInternalBase::Serializer
	JsonSerializer_t754141078 * ___Serializer_2;
	// Mapbox.Json.Serialization.ITraceWriter Mapbox.Json.Serialization.JsonSerializerInternalBase::TraceWriter
	Il2CppObject * ___TraceWriter_3;
	// Mapbox.Json.Serialization.JsonSerializerProxy Mapbox.Json.Serialization.JsonSerializerInternalBase::InternalSerializer
	JsonSerializerProxy_t231679858 * ___InternalSerializer_4;

public:
	inline static int32_t get_offset_of__currentErrorContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t631846012, ____currentErrorContext_0)); }
	inline ErrorContext_t1764915369 * get__currentErrorContext_0() const { return ____currentErrorContext_0; }
	inline ErrorContext_t1764915369 ** get_address_of__currentErrorContext_0() { return &____currentErrorContext_0; }
	inline void set__currentErrorContext_0(ErrorContext_t1764915369 * value)
	{
		____currentErrorContext_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentErrorContext_0, value);
	}

	inline static int32_t get_offset_of__mappings_1() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t631846012, ____mappings_1)); }
	inline BidirectionalDictionary_2_t4161140910 * get__mappings_1() const { return ____mappings_1; }
	inline BidirectionalDictionary_2_t4161140910 ** get_address_of__mappings_1() { return &____mappings_1; }
	inline void set__mappings_1(BidirectionalDictionary_2_t4161140910 * value)
	{
		____mappings_1 = value;
		Il2CppCodeGenWriteBarrier(&____mappings_1, value);
	}

	inline static int32_t get_offset_of_Serializer_2() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t631846012, ___Serializer_2)); }
	inline JsonSerializer_t754141078 * get_Serializer_2() const { return ___Serializer_2; }
	inline JsonSerializer_t754141078 ** get_address_of_Serializer_2() { return &___Serializer_2; }
	inline void set_Serializer_2(JsonSerializer_t754141078 * value)
	{
		___Serializer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Serializer_2, value);
	}

	inline static int32_t get_offset_of_TraceWriter_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t631846012, ___TraceWriter_3)); }
	inline Il2CppObject * get_TraceWriter_3() const { return ___TraceWriter_3; }
	inline Il2CppObject ** get_address_of_TraceWriter_3() { return &___TraceWriter_3; }
	inline void set_TraceWriter_3(Il2CppObject * value)
	{
		___TraceWriter_3 = value;
		Il2CppCodeGenWriteBarrier(&___TraceWriter_3, value);
	}

	inline static int32_t get_offset_of_InternalSerializer_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t631846012, ___InternalSerializer_4)); }
	inline JsonSerializerProxy_t231679858 * get_InternalSerializer_4() const { return ___InternalSerializer_4; }
	inline JsonSerializerProxy_t231679858 ** get_address_of_InternalSerializer_4() { return &___InternalSerializer_4; }
	inline void set_InternalSerializer_4(JsonSerializerProxy_t231679858 * value)
	{
		___InternalSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&___InternalSerializer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
