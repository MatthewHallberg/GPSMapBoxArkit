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
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.FastEncoderWindow
struct  FastEncoderWindow_t3738283794  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.FastEncoderWindow::window
	ByteU5BU5D_t3397334013* ___window_0;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufPos
	int32_t ___bufPos_1;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufEnd
	int32_t ___bufEnd_2;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::prev
	UInt16U5BU5D_t2527266722* ___prev_15;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::lookup
	UInt16U5BU5D_t2527266722* ___lookup_16;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t3738283794, ___window_0)); }
	inline ByteU5BU5D_t3397334013* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t3397334013* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier(&___window_0, value);
	}

	inline static int32_t get_offset_of_bufPos_1() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t3738283794, ___bufPos_1)); }
	inline int32_t get_bufPos_1() const { return ___bufPos_1; }
	inline int32_t* get_address_of_bufPos_1() { return &___bufPos_1; }
	inline void set_bufPos_1(int32_t value)
	{
		___bufPos_1 = value;
	}

	inline static int32_t get_offset_of_bufEnd_2() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t3738283794, ___bufEnd_2)); }
	inline int32_t get_bufEnd_2() const { return ___bufEnd_2; }
	inline int32_t* get_address_of_bufEnd_2() { return &___bufEnd_2; }
	inline void set_bufEnd_2(int32_t value)
	{
		___bufEnd_2 = value;
	}

	inline static int32_t get_offset_of_prev_15() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t3738283794, ___prev_15)); }
	inline UInt16U5BU5D_t2527266722* get_prev_15() const { return ___prev_15; }
	inline UInt16U5BU5D_t2527266722** get_address_of_prev_15() { return &___prev_15; }
	inline void set_prev_15(UInt16U5BU5D_t2527266722* value)
	{
		___prev_15 = value;
		Il2CppCodeGenWriteBarrier(&___prev_15, value);
	}

	inline static int32_t get_offset_of_lookup_16() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t3738283794, ___lookup_16)); }
	inline UInt16U5BU5D_t2527266722* get_lookup_16() const { return ___lookup_16; }
	inline UInt16U5BU5D_t2527266722** get_address_of_lookup_16() { return &___lookup_16; }
	inline void set_lookup_16(UInt16U5BU5D_t2527266722* value)
	{
		___lookup_16 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
