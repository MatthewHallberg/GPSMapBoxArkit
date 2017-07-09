#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.AsyncCallback
struct AsyncCallback_t163412349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStreamAsyncResult
struct  FileStreamAsyncResult_t2252849197  : public Il2CppObject
{
public:
	// System.Object System.IO.FileStreamAsyncResult::state
	Il2CppObject * ___state_0;
	// System.Boolean System.IO.FileStreamAsyncResult::completed
	bool ___completed_1;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t926074657 * ___wh_2;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t163412349 * ___cb_3;
	// System.Boolean System.IO.FileStreamAsyncResult::completedSynch
	bool ___completedSynch_4;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count_5;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount_6;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead_7;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t163412349 * ___realcb_8;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___state_0)); }
	inline Il2CppObject * get_state_0() const { return ___state_0; }
	inline Il2CppObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(Il2CppObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier(&___state_0, value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_wh_2() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___wh_2)); }
	inline ManualResetEvent_t926074657 * get_wh_2() const { return ___wh_2; }
	inline ManualResetEvent_t926074657 ** get_address_of_wh_2() { return &___wh_2; }
	inline void set_wh_2(ManualResetEvent_t926074657 * value)
	{
		___wh_2 = value;
		Il2CppCodeGenWriteBarrier(&___wh_2, value);
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___cb_3)); }
	inline AsyncCallback_t163412349 * get_cb_3() const { return ___cb_3; }
	inline AsyncCallback_t163412349 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(AsyncCallback_t163412349 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier(&___cb_3, value);
	}

	inline static int32_t get_offset_of_completedSynch_4() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___completedSynch_4)); }
	inline bool get_completedSynch_4() const { return ___completedSynch_4; }
	inline bool* get_address_of_completedSynch_4() { return &___completedSynch_4; }
	inline void set_completedSynch_4(bool value)
	{
		___completedSynch_4 = value;
	}

	inline static int32_t get_offset_of_Count_5() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___Count_5)); }
	inline int32_t get_Count_5() const { return ___Count_5; }
	inline int32_t* get_address_of_Count_5() { return &___Count_5; }
	inline void set_Count_5(int32_t value)
	{
		___Count_5 = value;
	}

	inline static int32_t get_offset_of_OriginalCount_6() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___OriginalCount_6)); }
	inline int32_t get_OriginalCount_6() const { return ___OriginalCount_6; }
	inline int32_t* get_address_of_OriginalCount_6() { return &___OriginalCount_6; }
	inline void set_OriginalCount_6(int32_t value)
	{
		___OriginalCount_6 = value;
	}

	inline static int32_t get_offset_of_BytesRead_7() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___BytesRead_7)); }
	inline int32_t get_BytesRead_7() const { return ___BytesRead_7; }
	inline int32_t* get_address_of_BytesRead_7() { return &___BytesRead_7; }
	inline void set_BytesRead_7(int32_t value)
	{
		___BytesRead_7 = value;
	}

	inline static int32_t get_offset_of_realcb_8() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t2252849197, ___realcb_8)); }
	inline AsyncCallback_t163412349 * get_realcb_8() const { return ___realcb_8; }
	inline AsyncCallback_t163412349 ** get_address_of_realcb_8() { return &___realcb_8; }
	inline void set_realcb_8(AsyncCallback_t163412349 * value)
	{
		___realcb_8 = value;
		Il2CppCodeGenWriteBarrier(&___realcb_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
