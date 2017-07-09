#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t2915891512;
// Mapbox.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3356497476;
// Mapbox.Json.Serialization.JsonProperty
struct JsonProperty_t33522267;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonFormatterConverter
struct  JsonFormatterConverter_t1807860330  : public Il2CppObject
{
public:
	// Mapbox.Json.Serialization.JsonSerializerInternalReader Mapbox.Json.Serialization.JsonFormatterConverter::_reader
	JsonSerializerInternalReader_t2915891512 * ____reader_0;
	// Mapbox.Json.Serialization.JsonISerializableContract Mapbox.Json.Serialization.JsonFormatterConverter::_contract
	JsonISerializableContract_t3356497476 * ____contract_1;
	// Mapbox.Json.Serialization.JsonProperty Mapbox.Json.Serialization.JsonFormatterConverter::_member
	JsonProperty_t33522267 * ____member_2;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t1807860330, ____reader_0)); }
	inline JsonSerializerInternalReader_t2915891512 * get__reader_0() const { return ____reader_0; }
	inline JsonSerializerInternalReader_t2915891512 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(JsonSerializerInternalReader_t2915891512 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier(&____reader_0, value);
	}

	inline static int32_t get_offset_of__contract_1() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t1807860330, ____contract_1)); }
	inline JsonISerializableContract_t3356497476 * get__contract_1() const { return ____contract_1; }
	inline JsonISerializableContract_t3356497476 ** get_address_of__contract_1() { return &____contract_1; }
	inline void set__contract_1(JsonISerializableContract_t3356497476 * value)
	{
		____contract_1 = value;
		Il2CppCodeGenWriteBarrier(&____contract_1, value);
	}

	inline static int32_t get_offset_of__member_2() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t1807860330, ____member_2)); }
	inline JsonProperty_t33522267 * get__member_2() const { return ____member_2; }
	inline JsonProperty_t33522267 ** get_address_of__member_2() { return &____member_2; }
	inline void set__member_2(JsonProperty_t33522267 * value)
	{
		____member_2 = value;
		Il2CppCodeGenWriteBarrier(&____member_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
