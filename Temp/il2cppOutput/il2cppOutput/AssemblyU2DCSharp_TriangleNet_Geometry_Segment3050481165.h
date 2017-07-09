#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Geometry.Segment
struct  Segment_t3050481165  : public Il2CppObject
{
public:
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v0
	Vertex_t3430001018 * ___v0_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v1
	Vertex_t3430001018 * ___v1_1;
	// System.Int32 TriangleNet.Geometry.Segment::label
	int32_t ___label_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(Segment_t3050481165, ___v0_0)); }
	inline Vertex_t3430001018 * get_v0_0() const { return ___v0_0; }
	inline Vertex_t3430001018 ** get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(Vertex_t3430001018 * value)
	{
		___v0_0 = value;
		Il2CppCodeGenWriteBarrier(&___v0_0, value);
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(Segment_t3050481165, ___v1_1)); }
	inline Vertex_t3430001018 * get_v1_1() const { return ___v1_1; }
	inline Vertex_t3430001018 ** get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(Vertex_t3430001018 * value)
	{
		___v1_1 = value;
		Il2CppCodeGenWriteBarrier(&___v1_1, value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(Segment_t3050481165, ___label_2)); }
	inline int32_t get_label_2() const { return ___label_2; }
	inline int32_t* get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(int32_t value)
	{
		___label_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
