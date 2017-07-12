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

// TriangleNet.TriangleSampler
struct TriangleSampler_t1615517784;
// TriangleNet.Mesh
struct Mesh_t1414352559;
// TriangleNet.IPredicates
struct IPredicates_t3101063573;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.TriangleLocator
struct  TriangleLocator_t236619704  : public Il2CppObject
{
public:
	// TriangleNet.TriangleSampler TriangleNet.TriangleLocator::sampler
	TriangleSampler_t1615517784 * ___sampler_0;
	// TriangleNet.Mesh TriangleNet.TriangleLocator::mesh
	Mesh_t1414352559 * ___mesh_1;
	// TriangleNet.IPredicates TriangleNet.TriangleLocator::predicates
	Il2CppObject * ___predicates_2;
	// TriangleNet.Topology.Otri TriangleNet.TriangleLocator::recenttri
	Otri_t174839988  ___recenttri_3;

public:
	inline static int32_t get_offset_of_sampler_0() { return static_cast<int32_t>(offsetof(TriangleLocator_t236619704, ___sampler_0)); }
	inline TriangleSampler_t1615517784 * get_sampler_0() const { return ___sampler_0; }
	inline TriangleSampler_t1615517784 ** get_address_of_sampler_0() { return &___sampler_0; }
	inline void set_sampler_0(TriangleSampler_t1615517784 * value)
	{
		___sampler_0 = value;
		Il2CppCodeGenWriteBarrier(&___sampler_0, value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(TriangleLocator_t236619704, ___mesh_1)); }
	inline Mesh_t1414352559 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t1414352559 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t1414352559 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_1, value);
	}

	inline static int32_t get_offset_of_predicates_2() { return static_cast<int32_t>(offsetof(TriangleLocator_t236619704, ___predicates_2)); }
	inline Il2CppObject * get_predicates_2() const { return ___predicates_2; }
	inline Il2CppObject ** get_address_of_predicates_2() { return &___predicates_2; }
	inline void set_predicates_2(Il2CppObject * value)
	{
		___predicates_2 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_2, value);
	}

	inline static int32_t get_offset_of_recenttri_3() { return static_cast<int32_t>(offsetof(TriangleLocator_t236619704, ___recenttri_3)); }
	inline Otri_t174839988  get_recenttri_3() const { return ___recenttri_3; }
	inline Otri_t174839988 * get_address_of_recenttri_3() { return &___recenttri_3; }
	inline void set_recenttri_3(Otri_t174839988  value)
	{
		___recenttri_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
