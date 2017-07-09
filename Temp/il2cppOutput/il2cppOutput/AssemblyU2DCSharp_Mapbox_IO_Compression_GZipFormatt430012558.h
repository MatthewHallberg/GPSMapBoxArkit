#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipFormatter
struct  GZipFormatter_t430012558  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.GZipFormatter::headerBytes
	ByteU5BU5D_t3397334013* ___headerBytes_0;
	// System.UInt32 Mapbox.IO.Compression.GZipFormatter::_crc32
	uint32_t ____crc32_1;
	// System.Int64 Mapbox.IO.Compression.GZipFormatter::_inputStreamSizeModulo
	int64_t ____inputStreamSizeModulo_2;

public:
	inline static int32_t get_offset_of_headerBytes_0() { return static_cast<int32_t>(offsetof(GZipFormatter_t430012558, ___headerBytes_0)); }
	inline ByteU5BU5D_t3397334013* get_headerBytes_0() const { return ___headerBytes_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_headerBytes_0() { return &___headerBytes_0; }
	inline void set_headerBytes_0(ByteU5BU5D_t3397334013* value)
	{
		___headerBytes_0 = value;
		Il2CppCodeGenWriteBarrier(&___headerBytes_0, value);
	}

	inline static int32_t get_offset_of__crc32_1() { return static_cast<int32_t>(offsetof(GZipFormatter_t430012558, ____crc32_1)); }
	inline uint32_t get__crc32_1() const { return ____crc32_1; }
	inline uint32_t* get_address_of__crc32_1() { return &____crc32_1; }
	inline void set__crc32_1(uint32_t value)
	{
		____crc32_1 = value;
	}

	inline static int32_t get_offset_of__inputStreamSizeModulo_2() { return static_cast<int32_t>(offsetof(GZipFormatter_t430012558, ____inputStreamSizeModulo_2)); }
	inline int64_t get__inputStreamSizeModulo_2() const { return ____inputStreamSizeModulo_2; }
	inline int64_t* get_address_of__inputStreamSizeModulo_2() { return &____inputStreamSizeModulo_2; }
	inline void set__inputStreamSizeModulo_2(int64_t value)
	{
		____inputStreamSizeModulo_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
