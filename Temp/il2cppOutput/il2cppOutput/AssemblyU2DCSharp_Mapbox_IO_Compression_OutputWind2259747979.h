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

// Mapbox.IO.Compression.OutputWindow
struct  OutputWindow_t2259747979  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputWindow::window
	ByteU5BU5D_t3397334013* ___window_2;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::end
	int32_t ___end_3;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::bytesUsed
	int32_t ___bytesUsed_4;

public:
	inline static int32_t get_offset_of_window_2() { return static_cast<int32_t>(offsetof(OutputWindow_t2259747979, ___window_2)); }
	inline ByteU5BU5D_t3397334013* get_window_2() const { return ___window_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_window_2() { return &___window_2; }
	inline void set_window_2(ByteU5BU5D_t3397334013* value)
	{
		___window_2 = value;
		Il2CppCodeGenWriteBarrier(&___window_2, value);
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(OutputWindow_t2259747979, ___end_3)); }
	inline int32_t get_end_3() const { return ___end_3; }
	inline int32_t* get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(int32_t value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_4() { return static_cast<int32_t>(offsetof(OutputWindow_t2259747979, ___bytesUsed_4)); }
	inline int32_t get_bytesUsed_4() const { return ___bytesUsed_4; }
	inline int32_t* get_address_of_bytesUsed_4() { return &___bytesUsed_4; }
	inline void set_bytesUsed_4(int32_t value)
	{
		___bytesUsed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
