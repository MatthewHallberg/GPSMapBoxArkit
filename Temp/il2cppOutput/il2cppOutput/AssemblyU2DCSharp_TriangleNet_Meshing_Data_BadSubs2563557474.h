#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Osub2903723171.h"

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Data.BadSubseg
struct  BadSubseg_t2563557474  : public Il2CppObject
{
public:
	// TriangleNet.Topology.Osub TriangleNet.Meshing.Data.BadSubseg::subseg
	Osub_t2903723171  ___subseg_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::org
	Vertex_t3430001018 * ___org_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::dest
	Vertex_t3430001018 * ___dest_2;

public:
	inline static int32_t get_offset_of_subseg_0() { return static_cast<int32_t>(offsetof(BadSubseg_t2563557474, ___subseg_0)); }
	inline Osub_t2903723171  get_subseg_0() const { return ___subseg_0; }
	inline Osub_t2903723171 * get_address_of_subseg_0() { return &___subseg_0; }
	inline void set_subseg_0(Osub_t2903723171  value)
	{
		___subseg_0 = value;
	}

	inline static int32_t get_offset_of_org_1() { return static_cast<int32_t>(offsetof(BadSubseg_t2563557474, ___org_1)); }
	inline Vertex_t3430001018 * get_org_1() const { return ___org_1; }
	inline Vertex_t3430001018 ** get_address_of_org_1() { return &___org_1; }
	inline void set_org_1(Vertex_t3430001018 * value)
	{
		___org_1 = value;
		Il2CppCodeGenWriteBarrier(&___org_1, value);
	}

	inline static int32_t get_offset_of_dest_2() { return static_cast<int32_t>(offsetof(BadSubseg_t2563557474, ___dest_2)); }
	inline Vertex_t3430001018 * get_dest_2() const { return ___dest_2; }
	inline Vertex_t3430001018 ** get_address_of_dest_2() { return &___dest_2; }
	inline void set_dest_2(Vertex_t3430001018 * value)
	{
		___dest_2 = value;
		Il2CppCodeGenWriteBarrier(&___dest_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
