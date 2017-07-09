#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.DiskCache/CacheItem
struct  CacheItem_t2357247121 
{
public:
	// System.Int64 Mapbox.Platform.Cache.DiskCache/CacheItem::Timestamp
	int64_t ___Timestamp_0;
	// System.Byte[] Mapbox.Platform.Cache.DiskCache/CacheItem::Data
	ByteU5BU5D_t3397334013* ___Data_1;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(CacheItem_t2357247121, ___Timestamp_0)); }
	inline int64_t get_Timestamp_0() const { return ___Timestamp_0; }
	inline int64_t* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(int64_t value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(CacheItem_t2357247121, ___Data_1)); }
	inline ByteU5BU5D_t3397334013* get_Data_1() const { return ___Data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(ByteU5BU5D_t3397334013* value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier(&___Data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Platform.Cache.DiskCache/CacheItem
struct CacheItem_t2357247121_marshaled_pinvoke
{
	int64_t ___Timestamp_0;
	uint8_t* ___Data_1;
};
// Native definition for COM marshalling of Mapbox.Platform.Cache.DiskCache/CacheItem
struct CacheItem_t2357247121_marshaled_com
{
	int64_t ___Timestamp_0;
	uint8_t* ___Data_1;
};
