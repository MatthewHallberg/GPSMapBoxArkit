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
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct  DeflateStreamAsyncResult_t3322983830  : public Il2CppObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateStreamAsyncResult::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::offset
	int32_t ___offset_1;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::count
	int32_t ___count_2;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::isWrite
	bool ___isWrite_3;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncObject
	Il2CppObject * ___m_AsyncObject_4;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncState
	Il2CppObject * ___m_AsyncState_5;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncCallback
	AsyncCallback_t163412349 * ___m_AsyncCallback_6;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Result
	Il2CppObject * ___m_Result_7;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::m_CompletedSynchronously
	bool ___m_CompletedSynchronously_8;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_InvokedCallback
	int32_t ___m_InvokedCallback_9;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Completed
	int32_t ___m_Completed_10;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Event
	Il2CppObject * ___m_Event_11;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_isWrite_3() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___isWrite_3)); }
	inline bool get_isWrite_3() const { return ___isWrite_3; }
	inline bool* get_address_of_isWrite_3() { return &___isWrite_3; }
	inline void set_isWrite_3(bool value)
	{
		___isWrite_3 = value;
	}

	inline static int32_t get_offset_of_m_AsyncObject_4() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_AsyncObject_4)); }
	inline Il2CppObject * get_m_AsyncObject_4() const { return ___m_AsyncObject_4; }
	inline Il2CppObject ** get_address_of_m_AsyncObject_4() { return &___m_AsyncObject_4; }
	inline void set_m_AsyncObject_4(Il2CppObject * value)
	{
		___m_AsyncObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncObject_4, value);
	}

	inline static int32_t get_offset_of_m_AsyncState_5() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_AsyncState_5)); }
	inline Il2CppObject * get_m_AsyncState_5() const { return ___m_AsyncState_5; }
	inline Il2CppObject ** get_address_of_m_AsyncState_5() { return &___m_AsyncState_5; }
	inline void set_m_AsyncState_5(Il2CppObject * value)
	{
		___m_AsyncState_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncState_5, value);
	}

	inline static int32_t get_offset_of_m_AsyncCallback_6() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_AsyncCallback_6)); }
	inline AsyncCallback_t163412349 * get_m_AsyncCallback_6() const { return ___m_AsyncCallback_6; }
	inline AsyncCallback_t163412349 ** get_address_of_m_AsyncCallback_6() { return &___m_AsyncCallback_6; }
	inline void set_m_AsyncCallback_6(AsyncCallback_t163412349 * value)
	{
		___m_AsyncCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncCallback_6, value);
	}

	inline static int32_t get_offset_of_m_Result_7() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_Result_7)); }
	inline Il2CppObject * get_m_Result_7() const { return ___m_Result_7; }
	inline Il2CppObject ** get_address_of_m_Result_7() { return &___m_Result_7; }
	inline void set_m_Result_7(Il2CppObject * value)
	{
		___m_Result_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Result_7, value);
	}

	inline static int32_t get_offset_of_m_CompletedSynchronously_8() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_CompletedSynchronously_8)); }
	inline bool get_m_CompletedSynchronously_8() const { return ___m_CompletedSynchronously_8; }
	inline bool* get_address_of_m_CompletedSynchronously_8() { return &___m_CompletedSynchronously_8; }
	inline void set_m_CompletedSynchronously_8(bool value)
	{
		___m_CompletedSynchronously_8 = value;
	}

	inline static int32_t get_offset_of_m_InvokedCallback_9() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_InvokedCallback_9)); }
	inline int32_t get_m_InvokedCallback_9() const { return ___m_InvokedCallback_9; }
	inline int32_t* get_address_of_m_InvokedCallback_9() { return &___m_InvokedCallback_9; }
	inline void set_m_InvokedCallback_9(int32_t value)
	{
		___m_InvokedCallback_9 = value;
	}

	inline static int32_t get_offset_of_m_Completed_10() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_Completed_10)); }
	inline int32_t get_m_Completed_10() const { return ___m_Completed_10; }
	inline int32_t* get_address_of_m_Completed_10() { return &___m_Completed_10; }
	inline void set_m_Completed_10(int32_t value)
	{
		___m_Completed_10 = value;
	}

	inline static int32_t get_offset_of_m_Event_11() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t3322983830, ___m_Event_11)); }
	inline Il2CppObject * get_m_Event_11() const { return ___m_Event_11; }
	inline Il2CppObject ** get_address_of_m_Event_11() { return &___m_Event_11; }
	inline void set_m_Event_11(Il2CppObject * value)
	{
		___m_Event_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Event_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
