#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;
// TriangleNet.Meshing.Data.BadTriangle
struct BadTriangle_t3014106343;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Data.BadTriangle
struct  BadTriangle_t3014106343  : public Il2CppObject
{
public:
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Data.BadTriangle::poortri
	Otri_t174839988  ___poortri_0;
	// System.Double TriangleNet.Meshing.Data.BadTriangle::key
	double ___key_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::org
	Vertex_t3430001018 * ___org_2;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::dest
	Vertex_t3430001018 * ___dest_3;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadTriangle::apex
	Vertex_t3430001018 * ___apex_4;
	// TriangleNet.Meshing.Data.BadTriangle TriangleNet.Meshing.Data.BadTriangle::next
	BadTriangle_t3014106343 * ___next_5;

public:
	inline static int32_t get_offset_of_poortri_0() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___poortri_0)); }
	inline Otri_t174839988  get_poortri_0() const { return ___poortri_0; }
	inline Otri_t174839988 * get_address_of_poortri_0() { return &___poortri_0; }
	inline void set_poortri_0(Otri_t174839988  value)
	{
		___poortri_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___key_1)); }
	inline double get_key_1() const { return ___key_1; }
	inline double* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(double value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_org_2() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___org_2)); }
	inline Vertex_t3430001018 * get_org_2() const { return ___org_2; }
	inline Vertex_t3430001018 ** get_address_of_org_2() { return &___org_2; }
	inline void set_org_2(Vertex_t3430001018 * value)
	{
		___org_2 = value;
		Il2CppCodeGenWriteBarrier(&___org_2, value);
	}

	inline static int32_t get_offset_of_dest_3() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___dest_3)); }
	inline Vertex_t3430001018 * get_dest_3() const { return ___dest_3; }
	inline Vertex_t3430001018 ** get_address_of_dest_3() { return &___dest_3; }
	inline void set_dest_3(Vertex_t3430001018 * value)
	{
		___dest_3 = value;
		Il2CppCodeGenWriteBarrier(&___dest_3, value);
	}

	inline static int32_t get_offset_of_apex_4() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___apex_4)); }
	inline Vertex_t3430001018 * get_apex_4() const { return ___apex_4; }
	inline Vertex_t3430001018 ** get_address_of_apex_4() { return &___apex_4; }
	inline void set_apex_4(Vertex_t3430001018 * value)
	{
		___apex_4 = value;
		Il2CppCodeGenWriteBarrier(&___apex_4, value);
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(BadTriangle_t3014106343, ___next_5)); }
	inline BadTriangle_t3014106343 * get_next_5() const { return ___next_5; }
	inline BadTriangle_t3014106343 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(BadTriangle_t3014106343 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier(&___next_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
