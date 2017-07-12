#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Meshing.Data.BadTriangle[]
struct BadTriangleU5BU5D_t1061382046;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Data.BadTriQueue
struct  BadTriQueue_t1888802243  : public Il2CppObject
{
public:
	// TriangleNet.Meshing.Data.BadTriangle[] TriangleNet.Meshing.Data.BadTriQueue::queuefront
	BadTriangleU5BU5D_t1061382046* ___queuefront_1;
	// TriangleNet.Meshing.Data.BadTriangle[] TriangleNet.Meshing.Data.BadTriQueue::queuetail
	BadTriangleU5BU5D_t1061382046* ___queuetail_2;
	// System.Int32[] TriangleNet.Meshing.Data.BadTriQueue::nextnonemptyq
	Int32U5BU5D_t3030399641* ___nextnonemptyq_3;
	// System.Int32 TriangleNet.Meshing.Data.BadTriQueue::firstnonemptyq
	int32_t ___firstnonemptyq_4;
	// System.Int32 TriangleNet.Meshing.Data.BadTriQueue::count
	int32_t ___count_5;

public:
	inline static int32_t get_offset_of_queuefront_1() { return static_cast<int32_t>(offsetof(BadTriQueue_t1888802243, ___queuefront_1)); }
	inline BadTriangleU5BU5D_t1061382046* get_queuefront_1() const { return ___queuefront_1; }
	inline BadTriangleU5BU5D_t1061382046** get_address_of_queuefront_1() { return &___queuefront_1; }
	inline void set_queuefront_1(BadTriangleU5BU5D_t1061382046* value)
	{
		___queuefront_1 = value;
		Il2CppCodeGenWriteBarrier(&___queuefront_1, value);
	}

	inline static int32_t get_offset_of_queuetail_2() { return static_cast<int32_t>(offsetof(BadTriQueue_t1888802243, ___queuetail_2)); }
	inline BadTriangleU5BU5D_t1061382046* get_queuetail_2() const { return ___queuetail_2; }
	inline BadTriangleU5BU5D_t1061382046** get_address_of_queuetail_2() { return &___queuetail_2; }
	inline void set_queuetail_2(BadTriangleU5BU5D_t1061382046* value)
	{
		___queuetail_2 = value;
		Il2CppCodeGenWriteBarrier(&___queuetail_2, value);
	}

	inline static int32_t get_offset_of_nextnonemptyq_3() { return static_cast<int32_t>(offsetof(BadTriQueue_t1888802243, ___nextnonemptyq_3)); }
	inline Int32U5BU5D_t3030399641* get_nextnonemptyq_3() const { return ___nextnonemptyq_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_nextnonemptyq_3() { return &___nextnonemptyq_3; }
	inline void set_nextnonemptyq_3(Int32U5BU5D_t3030399641* value)
	{
		___nextnonemptyq_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextnonemptyq_3, value);
	}

	inline static int32_t get_offset_of_firstnonemptyq_4() { return static_cast<int32_t>(offsetof(BadTriQueue_t1888802243, ___firstnonemptyq_4)); }
	inline int32_t get_firstnonemptyq_4() const { return ___firstnonemptyq_4; }
	inline int32_t* get_address_of_firstnonemptyq_4() { return &___firstnonemptyq_4; }
	inline void set_firstnonemptyq_4(int32_t value)
	{
		___firstnonemptyq_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(BadTriQueue_t1888802243, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
