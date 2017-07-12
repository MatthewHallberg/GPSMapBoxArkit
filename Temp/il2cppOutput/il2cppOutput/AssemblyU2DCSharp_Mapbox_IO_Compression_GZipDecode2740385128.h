#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_IO_Compression_GZipDecode4016374056.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipDecoder
struct  GZipDecoder_t2740385128  : public Il2CppObject
{
public:
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipHeaderSubstate
	int32_t ___gzipHeaderSubstate_0;
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipFooterSubstate
	int32_t ___gzipFooterSubstate_1;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_flag
	int32_t ___gzip_header_flag_2;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_xlen
	int32_t ___gzip_header_xlen_3;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedCrc32
	uint32_t ___expectedCrc32_4;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedOutputStreamSizeModulo
	uint32_t ___expectedOutputStreamSizeModulo_5;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::loopCounter
	int32_t ___loopCounter_6;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::actualCrc32
	uint32_t ___actualCrc32_7;
	// System.Int64 Mapbox.IO.Compression.GZipDecoder::actualStreamSizeModulo
	int64_t ___actualStreamSizeModulo_8;

public:
	inline static int32_t get_offset_of_gzipHeaderSubstate_0() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___gzipHeaderSubstate_0)); }
	inline int32_t get_gzipHeaderSubstate_0() const { return ___gzipHeaderSubstate_0; }
	inline int32_t* get_address_of_gzipHeaderSubstate_0() { return &___gzipHeaderSubstate_0; }
	inline void set_gzipHeaderSubstate_0(int32_t value)
	{
		___gzipHeaderSubstate_0 = value;
	}

	inline static int32_t get_offset_of_gzipFooterSubstate_1() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___gzipFooterSubstate_1)); }
	inline int32_t get_gzipFooterSubstate_1() const { return ___gzipFooterSubstate_1; }
	inline int32_t* get_address_of_gzipFooterSubstate_1() { return &___gzipFooterSubstate_1; }
	inline void set_gzipFooterSubstate_1(int32_t value)
	{
		___gzipFooterSubstate_1 = value;
	}

	inline static int32_t get_offset_of_gzip_header_flag_2() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___gzip_header_flag_2)); }
	inline int32_t get_gzip_header_flag_2() const { return ___gzip_header_flag_2; }
	inline int32_t* get_address_of_gzip_header_flag_2() { return &___gzip_header_flag_2; }
	inline void set_gzip_header_flag_2(int32_t value)
	{
		___gzip_header_flag_2 = value;
	}

	inline static int32_t get_offset_of_gzip_header_xlen_3() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___gzip_header_xlen_3)); }
	inline int32_t get_gzip_header_xlen_3() const { return ___gzip_header_xlen_3; }
	inline int32_t* get_address_of_gzip_header_xlen_3() { return &___gzip_header_xlen_3; }
	inline void set_gzip_header_xlen_3(int32_t value)
	{
		___gzip_header_xlen_3 = value;
	}

	inline static int32_t get_offset_of_expectedCrc32_4() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___expectedCrc32_4)); }
	inline uint32_t get_expectedCrc32_4() const { return ___expectedCrc32_4; }
	inline uint32_t* get_address_of_expectedCrc32_4() { return &___expectedCrc32_4; }
	inline void set_expectedCrc32_4(uint32_t value)
	{
		___expectedCrc32_4 = value;
	}

	inline static int32_t get_offset_of_expectedOutputStreamSizeModulo_5() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___expectedOutputStreamSizeModulo_5)); }
	inline uint32_t get_expectedOutputStreamSizeModulo_5() const { return ___expectedOutputStreamSizeModulo_5; }
	inline uint32_t* get_address_of_expectedOutputStreamSizeModulo_5() { return &___expectedOutputStreamSizeModulo_5; }
	inline void set_expectedOutputStreamSizeModulo_5(uint32_t value)
	{
		___expectedOutputStreamSizeModulo_5 = value;
	}

	inline static int32_t get_offset_of_loopCounter_6() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___loopCounter_6)); }
	inline int32_t get_loopCounter_6() const { return ___loopCounter_6; }
	inline int32_t* get_address_of_loopCounter_6() { return &___loopCounter_6; }
	inline void set_loopCounter_6(int32_t value)
	{
		___loopCounter_6 = value;
	}

	inline static int32_t get_offset_of_actualCrc32_7() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___actualCrc32_7)); }
	inline uint32_t get_actualCrc32_7() const { return ___actualCrc32_7; }
	inline uint32_t* get_address_of_actualCrc32_7() { return &___actualCrc32_7; }
	inline void set_actualCrc32_7(uint32_t value)
	{
		___actualCrc32_7 = value;
	}

	inline static int32_t get_offset_of_actualStreamSizeModulo_8() { return static_cast<int32_t>(offsetof(GZipDecoder_t2740385128, ___actualStreamSizeModulo_8)); }
	inline int64_t get_actualStreamSizeModulo_8() const { return ___actualStreamSizeModulo_8; }
	inline int64_t* get_address_of_actualStreamSizeModulo_8() { return &___actualStreamSizeModulo_8; }
	inline void set_actualStreamSizeModulo_8(int64_t value)
	{
		___actualStreamSizeModulo_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
