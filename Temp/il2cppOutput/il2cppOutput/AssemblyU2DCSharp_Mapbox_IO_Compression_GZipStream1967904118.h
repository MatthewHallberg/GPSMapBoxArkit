#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_t3660596259;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipStream
struct  GZipStream_t1967904118  : public Stream_t3255436806
{
public:
	// Mapbox.IO.Compression.DeflateStream Mapbox.IO.Compression.GZipStream::deflateStream
	DeflateStream_t3660596259 * ___deflateStream_1;

public:
	inline static int32_t get_offset_of_deflateStream_1() { return static_cast<int32_t>(offsetof(GZipStream_t1967904118, ___deflateStream_1)); }
	inline DeflateStream_t3660596259 * get_deflateStream_1() const { return ___deflateStream_1; }
	inline DeflateStream_t3660596259 ** get_address_of_deflateStream_1() { return &___deflateStream_1; }
	inline void set_deflateStream_1(DeflateStream_t3660596259 * value)
	{
		___deflateStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___deflateStream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
