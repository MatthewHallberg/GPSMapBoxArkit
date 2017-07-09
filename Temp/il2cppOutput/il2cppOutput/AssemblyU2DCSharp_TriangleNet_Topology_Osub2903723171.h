#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TriangleNet.Topology.SubSegment
struct SubSegment_t918625531;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Topology.Osub
struct  Osub_t2903723171 
{
public:
	// TriangleNet.Topology.SubSegment TriangleNet.Topology.Osub::seg
	SubSegment_t918625531 * ___seg_0;
	// System.Int32 TriangleNet.Topology.Osub::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_seg_0() { return static_cast<int32_t>(offsetof(Osub_t2903723171, ___seg_0)); }
	inline SubSegment_t918625531 * get_seg_0() const { return ___seg_0; }
	inline SubSegment_t918625531 ** get_address_of_seg_0() { return &___seg_0; }
	inline void set_seg_0(SubSegment_t918625531 * value)
	{
		___seg_0 = value;
		Il2CppCodeGenWriteBarrier(&___seg_0, value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Osub_t2903723171, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TriangleNet.Topology.Osub
struct Osub_t2903723171_marshaled_pinvoke
{
	SubSegment_t918625531 * ___seg_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Osub
struct Osub_t2903723171_marshaled_com
{
	SubSegment_t918625531 * ___seg_0;
	int32_t ___orient_1;
};
