#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Mapbox_IO_Compression_Compression351499893.h"

// System.IO.Stream
struct Stream_t3255436806;
// Mapbox.IO.Compression.Inflater
struct Inflater_t3697806625;
// Mapbox.IO.Compression.IDeflater
struct IDeflater_t1169693998;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t51041073;
// Mapbox.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t3473629029;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStream
struct  DeflateStream_t3660596259  : public Stream_t3255436806
{
public:
	// System.IO.Stream Mapbox.IO.Compression.DeflateStream::_stream
	Stream_t3255436806 * ____stream_2;
	// Mapbox.IO.Compression.CompressionMode Mapbox.IO.Compression.DeflateStream::_mode
	int32_t ____mode_3;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::_leaveOpen
	bool ____leaveOpen_4;
	// Mapbox.IO.Compression.Inflater Mapbox.IO.Compression.DeflateStream::inflater
	Inflater_t3697806625 * ___inflater_5;
	// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::deflater
	Il2CppObject * ___deflater_6;
	// System.Byte[] Mapbox.IO.Compression.DeflateStream::buffer
	ByteU5BU5D_t3397334013* ___buffer_7;
	// System.Int32 Mapbox.IO.Compression.DeflateStream::asyncOperations
	int32_t ___asyncOperations_8;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStream::m_CallBack
	AsyncCallback_t163412349 * ___m_CallBack_9;
	// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate Mapbox.IO.Compression.DeflateStream::m_AsyncWriterDelegate
	AsyncWriteDelegate_t51041073 * ___m_AsyncWriterDelegate_10;
	// Mapbox.IO.Compression.IFileFormatWriter Mapbox.IO.Compression.DeflateStream::formatWriter
	Il2CppObject * ___formatWriter_11;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteHeader
	bool ___wroteHeader_12;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteBytes
	bool ___wroteBytes_13;

public:
	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ____stream_2)); }
	inline Stream_t3255436806 * get__stream_2() const { return ____stream_2; }
	inline Stream_t3255436806 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(Stream_t3255436806 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier(&____stream_2, value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_4() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ____leaveOpen_4)); }
	inline bool get__leaveOpen_4() const { return ____leaveOpen_4; }
	inline bool* get_address_of__leaveOpen_4() { return &____leaveOpen_4; }
	inline void set__leaveOpen_4(bool value)
	{
		____leaveOpen_4 = value;
	}

	inline static int32_t get_offset_of_inflater_5() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___inflater_5)); }
	inline Inflater_t3697806625 * get_inflater_5() const { return ___inflater_5; }
	inline Inflater_t3697806625 ** get_address_of_inflater_5() { return &___inflater_5; }
	inline void set_inflater_5(Inflater_t3697806625 * value)
	{
		___inflater_5 = value;
		Il2CppCodeGenWriteBarrier(&___inflater_5, value);
	}

	inline static int32_t get_offset_of_deflater_6() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___deflater_6)); }
	inline Il2CppObject * get_deflater_6() const { return ___deflater_6; }
	inline Il2CppObject ** get_address_of_deflater_6() { return &___deflater_6; }
	inline void set_deflater_6(Il2CppObject * value)
	{
		___deflater_6 = value;
		Il2CppCodeGenWriteBarrier(&___deflater_6, value);
	}

	inline static int32_t get_offset_of_buffer_7() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___buffer_7)); }
	inline ByteU5BU5D_t3397334013* get_buffer_7() const { return ___buffer_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_7() { return &___buffer_7; }
	inline void set_buffer_7(ByteU5BU5D_t3397334013* value)
	{
		___buffer_7 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_7, value);
	}

	inline static int32_t get_offset_of_asyncOperations_8() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___asyncOperations_8)); }
	inline int32_t get_asyncOperations_8() const { return ___asyncOperations_8; }
	inline int32_t* get_address_of_asyncOperations_8() { return &___asyncOperations_8; }
	inline void set_asyncOperations_8(int32_t value)
	{
		___asyncOperations_8 = value;
	}

	inline static int32_t get_offset_of_m_CallBack_9() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___m_CallBack_9)); }
	inline AsyncCallback_t163412349 * get_m_CallBack_9() const { return ___m_CallBack_9; }
	inline AsyncCallback_t163412349 ** get_address_of_m_CallBack_9() { return &___m_CallBack_9; }
	inline void set_m_CallBack_9(AsyncCallback_t163412349 * value)
	{
		___m_CallBack_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CallBack_9, value);
	}

	inline static int32_t get_offset_of_m_AsyncWriterDelegate_10() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___m_AsyncWriterDelegate_10)); }
	inline AsyncWriteDelegate_t51041073 * get_m_AsyncWriterDelegate_10() const { return ___m_AsyncWriterDelegate_10; }
	inline AsyncWriteDelegate_t51041073 ** get_address_of_m_AsyncWriterDelegate_10() { return &___m_AsyncWriterDelegate_10; }
	inline void set_m_AsyncWriterDelegate_10(AsyncWriteDelegate_t51041073 * value)
	{
		___m_AsyncWriterDelegate_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncWriterDelegate_10, value);
	}

	inline static int32_t get_offset_of_formatWriter_11() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___formatWriter_11)); }
	inline Il2CppObject * get_formatWriter_11() const { return ___formatWriter_11; }
	inline Il2CppObject ** get_address_of_formatWriter_11() { return &___formatWriter_11; }
	inline void set_formatWriter_11(Il2CppObject * value)
	{
		___formatWriter_11 = value;
		Il2CppCodeGenWriteBarrier(&___formatWriter_11, value);
	}

	inline static int32_t get_offset_of_wroteHeader_12() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___wroteHeader_12)); }
	inline bool get_wroteHeader_12() const { return ___wroteHeader_12; }
	inline bool* get_address_of_wroteHeader_12() { return &___wroteHeader_12; }
	inline void set_wroteHeader_12(bool value)
	{
		___wroteHeader_12 = value;
	}

	inline static int32_t get_offset_of_wroteBytes_13() { return static_cast<int32_t>(offsetof(DeflateStream_t3660596259, ___wroteBytes_13)); }
	inline bool get_wroteBytes_13() const { return ___wroteBytes_13; }
	inline bool* get_address_of_wroteBytes_13() { return &___wroteBytes_13; }
	inline void set_wroteBytes_13(bool value)
	{
		___wroteBytes_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
