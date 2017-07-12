#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.WebConnection
struct WebConnection_t324679648;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionStream
struct  WebConnectionStream_t1922483508  : public Stream_t3255436806
{
public:
	// System.Boolean System.Net.WebConnectionStream::isRead
	bool ___isRead_2;
	// System.Net.WebConnection System.Net.WebConnectionStream::cnc
	WebConnection_t324679648 * ___cnc_3;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::request
	HttpWebRequest_t1951404513 * ___request_4;
	// System.Byte[] System.Net.WebConnectionStream::readBuffer
	ByteU5BU5D_t3397334013* ___readBuffer_5;
	// System.Int32 System.Net.WebConnectionStream::readBufferOffset
	int32_t ___readBufferOffset_6;
	// System.Int32 System.Net.WebConnectionStream::readBufferSize
	int32_t ___readBufferSize_7;
	// System.Int32 System.Net.WebConnectionStream::contentLength
	int32_t ___contentLength_8;
	// System.Int32 System.Net.WebConnectionStream::totalRead
	int32_t ___totalRead_9;
	// System.Int64 System.Net.WebConnectionStream::totalWritten
	int64_t ___totalWritten_10;
	// System.Boolean System.Net.WebConnectionStream::nextReadCalled
	bool ___nextReadCalled_11;
	// System.Int32 System.Net.WebConnectionStream::pendingReads
	int32_t ___pendingReads_12;
	// System.Int32 System.Net.WebConnectionStream::pendingWrites
	int32_t ___pendingWrites_13;
	// System.Threading.ManualResetEvent System.Net.WebConnectionStream::pending
	ManualResetEvent_t926074657 * ___pending_14;
	// System.Boolean System.Net.WebConnectionStream::allowBuffering
	bool ___allowBuffering_15;
	// System.Boolean System.Net.WebConnectionStream::sendChunked
	bool ___sendChunked_16;
	// System.IO.MemoryStream System.Net.WebConnectionStream::writeBuffer
	MemoryStream_t743994179 * ___writeBuffer_17;
	// System.Boolean System.Net.WebConnectionStream::requestWritten
	bool ___requestWritten_18;
	// System.Byte[] System.Net.WebConnectionStream::headers
	ByteU5BU5D_t3397334013* ___headers_19;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_20;
	// System.Boolean System.Net.WebConnectionStream::headersSent
	bool ___headersSent_21;
	// System.Object System.Net.WebConnectionStream::locker
	Il2CppObject * ___locker_22;
	// System.Boolean System.Net.WebConnectionStream::initRead
	bool ___initRead_23;
	// System.Boolean System.Net.WebConnectionStream::read_eof
	bool ___read_eof_24;
	// System.Boolean System.Net.WebConnectionStream::complete_request_written
	bool ___complete_request_written_25;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_26;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_27;

public:
	inline static int32_t get_offset_of_isRead_2() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___isRead_2)); }
	inline bool get_isRead_2() const { return ___isRead_2; }
	inline bool* get_address_of_isRead_2() { return &___isRead_2; }
	inline void set_isRead_2(bool value)
	{
		___isRead_2 = value;
	}

	inline static int32_t get_offset_of_cnc_3() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___cnc_3)); }
	inline WebConnection_t324679648 * get_cnc_3() const { return ___cnc_3; }
	inline WebConnection_t324679648 ** get_address_of_cnc_3() { return &___cnc_3; }
	inline void set_cnc_3(WebConnection_t324679648 * value)
	{
		___cnc_3 = value;
		Il2CppCodeGenWriteBarrier(&___cnc_3, value);
	}

	inline static int32_t get_offset_of_request_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___request_4)); }
	inline HttpWebRequest_t1951404513 * get_request_4() const { return ___request_4; }
	inline HttpWebRequest_t1951404513 ** get_address_of_request_4() { return &___request_4; }
	inline void set_request_4(HttpWebRequest_t1951404513 * value)
	{
		___request_4 = value;
		Il2CppCodeGenWriteBarrier(&___request_4, value);
	}

	inline static int32_t get_offset_of_readBuffer_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___readBuffer_5)); }
	inline ByteU5BU5D_t3397334013* get_readBuffer_5() const { return ___readBuffer_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_readBuffer_5() { return &___readBuffer_5; }
	inline void set_readBuffer_5(ByteU5BU5D_t3397334013* value)
	{
		___readBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___readBuffer_5, value);
	}

	inline static int32_t get_offset_of_readBufferOffset_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___readBufferOffset_6)); }
	inline int32_t get_readBufferOffset_6() const { return ___readBufferOffset_6; }
	inline int32_t* get_address_of_readBufferOffset_6() { return &___readBufferOffset_6; }
	inline void set_readBufferOffset_6(int32_t value)
	{
		___readBufferOffset_6 = value;
	}

	inline static int32_t get_offset_of_readBufferSize_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___readBufferSize_7)); }
	inline int32_t get_readBufferSize_7() const { return ___readBufferSize_7; }
	inline int32_t* get_address_of_readBufferSize_7() { return &___readBufferSize_7; }
	inline void set_readBufferSize_7(int32_t value)
	{
		___readBufferSize_7 = value;
	}

	inline static int32_t get_offset_of_contentLength_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___contentLength_8)); }
	inline int32_t get_contentLength_8() const { return ___contentLength_8; }
	inline int32_t* get_address_of_contentLength_8() { return &___contentLength_8; }
	inline void set_contentLength_8(int32_t value)
	{
		___contentLength_8 = value;
	}

	inline static int32_t get_offset_of_totalRead_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___totalRead_9)); }
	inline int32_t get_totalRead_9() const { return ___totalRead_9; }
	inline int32_t* get_address_of_totalRead_9() { return &___totalRead_9; }
	inline void set_totalRead_9(int32_t value)
	{
		___totalRead_9 = value;
	}

	inline static int32_t get_offset_of_totalWritten_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___totalWritten_10)); }
	inline int64_t get_totalWritten_10() const { return ___totalWritten_10; }
	inline int64_t* get_address_of_totalWritten_10() { return &___totalWritten_10; }
	inline void set_totalWritten_10(int64_t value)
	{
		___totalWritten_10 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___nextReadCalled_11)); }
	inline bool get_nextReadCalled_11() const { return ___nextReadCalled_11; }
	inline bool* get_address_of_nextReadCalled_11() { return &___nextReadCalled_11; }
	inline void set_nextReadCalled_11(bool value)
	{
		___nextReadCalled_11 = value;
	}

	inline static int32_t get_offset_of_pendingReads_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___pendingReads_12)); }
	inline int32_t get_pendingReads_12() const { return ___pendingReads_12; }
	inline int32_t* get_address_of_pendingReads_12() { return &___pendingReads_12; }
	inline void set_pendingReads_12(int32_t value)
	{
		___pendingReads_12 = value;
	}

	inline static int32_t get_offset_of_pendingWrites_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___pendingWrites_13)); }
	inline int32_t get_pendingWrites_13() const { return ___pendingWrites_13; }
	inline int32_t* get_address_of_pendingWrites_13() { return &___pendingWrites_13; }
	inline void set_pendingWrites_13(int32_t value)
	{
		___pendingWrites_13 = value;
	}

	inline static int32_t get_offset_of_pending_14() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___pending_14)); }
	inline ManualResetEvent_t926074657 * get_pending_14() const { return ___pending_14; }
	inline ManualResetEvent_t926074657 ** get_address_of_pending_14() { return &___pending_14; }
	inline void set_pending_14(ManualResetEvent_t926074657 * value)
	{
		___pending_14 = value;
		Il2CppCodeGenWriteBarrier(&___pending_14, value);
	}

	inline static int32_t get_offset_of_allowBuffering_15() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___allowBuffering_15)); }
	inline bool get_allowBuffering_15() const { return ___allowBuffering_15; }
	inline bool* get_address_of_allowBuffering_15() { return &___allowBuffering_15; }
	inline void set_allowBuffering_15(bool value)
	{
		___allowBuffering_15 = value;
	}

	inline static int32_t get_offset_of_sendChunked_16() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___sendChunked_16)); }
	inline bool get_sendChunked_16() const { return ___sendChunked_16; }
	inline bool* get_address_of_sendChunked_16() { return &___sendChunked_16; }
	inline void set_sendChunked_16(bool value)
	{
		___sendChunked_16 = value;
	}

	inline static int32_t get_offset_of_writeBuffer_17() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___writeBuffer_17)); }
	inline MemoryStream_t743994179 * get_writeBuffer_17() const { return ___writeBuffer_17; }
	inline MemoryStream_t743994179 ** get_address_of_writeBuffer_17() { return &___writeBuffer_17; }
	inline void set_writeBuffer_17(MemoryStream_t743994179 * value)
	{
		___writeBuffer_17 = value;
		Il2CppCodeGenWriteBarrier(&___writeBuffer_17, value);
	}

	inline static int32_t get_offset_of_requestWritten_18() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___requestWritten_18)); }
	inline bool get_requestWritten_18() const { return ___requestWritten_18; }
	inline bool* get_address_of_requestWritten_18() { return &___requestWritten_18; }
	inline void set_requestWritten_18(bool value)
	{
		___requestWritten_18 = value;
	}

	inline static int32_t get_offset_of_headers_19() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___headers_19)); }
	inline ByteU5BU5D_t3397334013* get_headers_19() const { return ___headers_19; }
	inline ByteU5BU5D_t3397334013** get_address_of_headers_19() { return &___headers_19; }
	inline void set_headers_19(ByteU5BU5D_t3397334013* value)
	{
		___headers_19 = value;
		Il2CppCodeGenWriteBarrier(&___headers_19, value);
	}

	inline static int32_t get_offset_of_disposed_20() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___disposed_20)); }
	inline bool get_disposed_20() const { return ___disposed_20; }
	inline bool* get_address_of_disposed_20() { return &___disposed_20; }
	inline void set_disposed_20(bool value)
	{
		___disposed_20 = value;
	}

	inline static int32_t get_offset_of_headersSent_21() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___headersSent_21)); }
	inline bool get_headersSent_21() const { return ___headersSent_21; }
	inline bool* get_address_of_headersSent_21() { return &___headersSent_21; }
	inline void set_headersSent_21(bool value)
	{
		___headersSent_21 = value;
	}

	inline static int32_t get_offset_of_locker_22() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___locker_22)); }
	inline Il2CppObject * get_locker_22() const { return ___locker_22; }
	inline Il2CppObject ** get_address_of_locker_22() { return &___locker_22; }
	inline void set_locker_22(Il2CppObject * value)
	{
		___locker_22 = value;
		Il2CppCodeGenWriteBarrier(&___locker_22, value);
	}

	inline static int32_t get_offset_of_initRead_23() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___initRead_23)); }
	inline bool get_initRead_23() const { return ___initRead_23; }
	inline bool* get_address_of_initRead_23() { return &___initRead_23; }
	inline void set_initRead_23(bool value)
	{
		___initRead_23 = value;
	}

	inline static int32_t get_offset_of_read_eof_24() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___read_eof_24)); }
	inline bool get_read_eof_24() const { return ___read_eof_24; }
	inline bool* get_address_of_read_eof_24() { return &___read_eof_24; }
	inline void set_read_eof_24(bool value)
	{
		___read_eof_24 = value;
	}

	inline static int32_t get_offset_of_complete_request_written_25() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___complete_request_written_25)); }
	inline bool get_complete_request_written_25() const { return ___complete_request_written_25; }
	inline bool* get_address_of_complete_request_written_25() { return &___complete_request_written_25; }
	inline void set_complete_request_written_25(bool value)
	{
		___complete_request_written_25 = value;
	}

	inline static int32_t get_offset_of_read_timeout_26() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___read_timeout_26)); }
	inline int32_t get_read_timeout_26() const { return ___read_timeout_26; }
	inline int32_t* get_address_of_read_timeout_26() { return &___read_timeout_26; }
	inline void set_read_timeout_26(int32_t value)
	{
		___read_timeout_26 = value;
	}

	inline static int32_t get_offset_of_write_timeout_27() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508, ___write_timeout_27)); }
	inline int32_t get_write_timeout_27() const { return ___write_timeout_27; }
	inline int32_t* get_address_of_write_timeout_27() { return &___write_timeout_27; }
	inline void set_write_timeout_27(int32_t value)
	{
		___write_timeout_27 = value;
	}
};

struct WebConnectionStream_t1922483508_StaticFields
{
public:
	// System.Byte[] System.Net.WebConnectionStream::crlf
	ByteU5BU5D_t3397334013* ___crlf_1;

public:
	inline static int32_t get_offset_of_crlf_1() { return static_cast<int32_t>(offsetof(WebConnectionStream_t1922483508_StaticFields, ___crlf_1)); }
	inline ByteU5BU5D_t3397334013* get_crlf_1() const { return ___crlf_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_crlf_1() { return &___crlf_1; }
	inline void set_crlf_1(ByteU5BU5D_t3397334013* value)
	{
		___crlf_1 = value;
		Il2CppCodeGenWriteBarrier(&___crlf_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
