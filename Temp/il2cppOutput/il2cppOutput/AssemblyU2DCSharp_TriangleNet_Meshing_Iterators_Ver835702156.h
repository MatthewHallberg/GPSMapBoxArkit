#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.Topology.Otri>
struct List_1_t3838928416;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Iterators.VertexCirculator
struct  VertexCirculator_t835702156  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Topology.Otri> TriangleNet.Meshing.Iterators.VertexCirculator::cache
	List_1_t3838928416 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(VertexCirculator_t835702156, ___cache_0)); }
	inline List_1_t3838928416 * get_cache_0() const { return ___cache_0; }
	inline List_1_t3838928416 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(List_1_t3838928416 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier(&___cache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
