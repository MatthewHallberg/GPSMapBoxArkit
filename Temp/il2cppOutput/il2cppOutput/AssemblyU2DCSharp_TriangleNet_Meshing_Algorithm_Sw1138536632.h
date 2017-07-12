#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TriangleNet_Geometry_Vertex3430001018.h"

// TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent
struct SweepEvent_t3747825302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.SweepLine/SweepEventVertex
struct  SweepEventVertex_t1138536632  : public Vertex_t3430001018
{
public:
	// TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent TriangleNet.Meshing.Algorithm.SweepLine/SweepEventVertex::evt
	SweepEvent_t3747825302 * ___evt_8;

public:
	inline static int32_t get_offset_of_evt_8() { return static_cast<int32_t>(offsetof(SweepEventVertex_t1138536632, ___evt_8)); }
	inline SweepEvent_t3747825302 * get_evt_8() const { return ___evt_8; }
	inline SweepEvent_t3747825302 ** get_address_of_evt_8() { return &___evt_8; }
	inline void set_evt_8(SweepEvent_t3747825302 * value)
	{
		___evt_8 = value;
		Il2CppCodeGenWriteBarrier(&___evt_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
