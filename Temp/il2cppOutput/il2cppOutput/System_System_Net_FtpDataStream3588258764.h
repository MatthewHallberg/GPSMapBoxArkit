#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t3120721823;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpDataStream
struct  FtpDataStream_t3588258764  : public Stream_t3255436806
{
public:
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t3120721823 * ___request_1;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t3255436806 * ___networkStream_2;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_4;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_5;

public:
	inline static int32_t get_offset_of_request_1() { return static_cast<int32_t>(offsetof(FtpDataStream_t3588258764, ___request_1)); }
	inline FtpWebRequest_t3120721823 * get_request_1() const { return ___request_1; }
	inline FtpWebRequest_t3120721823 ** get_address_of_request_1() { return &___request_1; }
	inline void set_request_1(FtpWebRequest_t3120721823 * value)
	{
		___request_1 = value;
		Il2CppCodeGenWriteBarrier(&___request_1, value);
	}

	inline static int32_t get_offset_of_networkStream_2() { return static_cast<int32_t>(offsetof(FtpDataStream_t3588258764, ___networkStream_2)); }
	inline Stream_t3255436806 * get_networkStream_2() const { return ___networkStream_2; }
	inline Stream_t3255436806 ** get_address_of_networkStream_2() { return &___networkStream_2; }
	inline void set_networkStream_2(Stream_t3255436806 * value)
	{
		___networkStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___networkStream_2, value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(FtpDataStream_t3588258764, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_isRead_4() { return static_cast<int32_t>(offsetof(FtpDataStream_t3588258764, ___isRead_4)); }
	inline bool get_isRead_4() const { return ___isRead_4; }
	inline bool* get_address_of_isRead_4() { return &___isRead_4; }
	inline void set_isRead_4(bool value)
	{
		___isRead_4 = value;
	}

	inline static int32_t get_offset_of_totalRead_5() { return static_cast<int32_t>(offsetof(FtpDataStream_t3588258764, ___totalRead_5)); }
	inline int32_t get_totalRead_5() const { return ___totalRead_5; }
	inline int32_t* get_address_of_totalRead_5() { return &___totalRead_5; }
	inline void set_totalRead_5(int32_t value)
	{
		___totalRead_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
