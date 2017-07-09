#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t3738283794;
// Mapbox.IO.Compression.Match
struct Match_t3913623249;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.FastEncoder
struct  FastEncoder_t339831550  : public Il2CppObject
{
public:
	// Mapbox.IO.Compression.FastEncoderWindow Mapbox.IO.Compression.FastEncoder::inputWindow
	FastEncoderWindow_t3738283794 * ___inputWindow_0;
	// Mapbox.IO.Compression.Match Mapbox.IO.Compression.FastEncoder::currentMatch
	Match_t3913623249 * ___currentMatch_1;
	// System.Double Mapbox.IO.Compression.FastEncoder::lastCompressionRatio
	double ___lastCompressionRatio_2;

public:
	inline static int32_t get_offset_of_inputWindow_0() { return static_cast<int32_t>(offsetof(FastEncoder_t339831550, ___inputWindow_0)); }
	inline FastEncoderWindow_t3738283794 * get_inputWindow_0() const { return ___inputWindow_0; }
	inline FastEncoderWindow_t3738283794 ** get_address_of_inputWindow_0() { return &___inputWindow_0; }
	inline void set_inputWindow_0(FastEncoderWindow_t3738283794 * value)
	{
		___inputWindow_0 = value;
		Il2CppCodeGenWriteBarrier(&___inputWindow_0, value);
	}

	inline static int32_t get_offset_of_currentMatch_1() { return static_cast<int32_t>(offsetof(FastEncoder_t339831550, ___currentMatch_1)); }
	inline Match_t3913623249 * get_currentMatch_1() const { return ___currentMatch_1; }
	inline Match_t3913623249 ** get_address_of_currentMatch_1() { return &___currentMatch_1; }
	inline void set_currentMatch_1(Match_t3913623249 * value)
	{
		___currentMatch_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentMatch_1, value);
	}

	inline static int32_t get_offset_of_lastCompressionRatio_2() { return static_cast<int32_t>(offsetof(FastEncoder_t339831550, ___lastCompressionRatio_2)); }
	inline double get_lastCompressionRatio_2() const { return ___lastCompressionRatio_2; }
	inline double* get_address_of_lastCompressionRatio_2() { return &___lastCompressionRatio_2; }
	inline void set_lastCompressionRatio_2(double value)
	{
		___lastCompressionRatio_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
