#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_DcelMe3742056343.h"

// TriangleNet.IPredicates
struct IPredicates_t3101063573;
// TriangleNet.Voronoi.IVoronoiFactory
struct IVoronoiFactory_t3613463993;
// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.HalfEdge>
struct List_1_t4109356166;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Voronoi.VoronoiBase
struct  VoronoiBase_t1875181573  : public DcelMesh_t3742056343
{
public:
	// TriangleNet.IPredicates TriangleNet.Voronoi.VoronoiBase::predicates
	Il2CppObject * ___predicates_3;
	// TriangleNet.Voronoi.IVoronoiFactory TriangleNet.Voronoi.VoronoiBase::factory
	Il2CppObject * ___factory_4;
	// System.Collections.Generic.List`1<TriangleNet.Topology.DCEL.HalfEdge> TriangleNet.Voronoi.VoronoiBase::rays
	List_1_t4109356166 * ___rays_5;

public:
	inline static int32_t get_offset_of_predicates_3() { return static_cast<int32_t>(offsetof(VoronoiBase_t1875181573, ___predicates_3)); }
	inline Il2CppObject * get_predicates_3() const { return ___predicates_3; }
	inline Il2CppObject ** get_address_of_predicates_3() { return &___predicates_3; }
	inline void set_predicates_3(Il2CppObject * value)
	{
		___predicates_3 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_3, value);
	}

	inline static int32_t get_offset_of_factory_4() { return static_cast<int32_t>(offsetof(VoronoiBase_t1875181573, ___factory_4)); }
	inline Il2CppObject * get_factory_4() const { return ___factory_4; }
	inline Il2CppObject ** get_address_of_factory_4() { return &___factory_4; }
	inline void set_factory_4(Il2CppObject * value)
	{
		___factory_4 = value;
		Il2CppCodeGenWriteBarrier(&___factory_4, value);
	}

	inline static int32_t get_offset_of_rays_5() { return static_cast<int32_t>(offsetof(VoronoiBase_t1875181573, ___rays_5)); }
	inline List_1_t4109356166 * get_rays_5() const { return ___rays_5; }
	inline List_1_t4109356166 ** get_address_of_rays_5() { return &___rays_5; }
	inline void set_rays_5(List_1_t4109356166 * value)
	{
		___rays_5 = value;
		Il2CppCodeGenWriteBarrier(&___rays_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
