#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.IPredicates
struct IPredicates_t3101063573;
// TriangleNet.Mesh
struct Mesh_t1414352559;
// TriangleNet.Geometry.Point[]
struct PointU5BU5D_t3405418987;
// System.Collections.Generic.List`1<TriangleNet.Voronoi.Legacy.VoronoiRegion>
struct List_1_t593201092;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t3788314186;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t4221418462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy
struct  BoundedVoronoiLegacy_t1975431292  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::predicates
	Il2CppObject * ___predicates_0;
	// TriangleNet.Mesh TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::mesh
	Mesh_t1414352559 * ___mesh_1;
	// TriangleNet.Geometry.Point[] TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::points
	PointU5BU5D_t3405418987* ___points_2;
	// System.Collections.Generic.List`1<TriangleNet.Voronoi.Legacy.VoronoiRegion> TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::regions
	List_1_t593201092 * ___regions_3;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::segPoints
	List_1_t3788314186 * ___segPoints_4;
	// System.Int32 TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::segIndex
	int32_t ___segIndex_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment> TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::subsegMap
	Dictionary_2_t4221418462 * ___subsegMap_6;
	// System.Boolean TriangleNet.Voronoi.Legacy.BoundedVoronoiLegacy::includeBoundary
	bool ___includeBoundary_7;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___predicates_0)); }
	inline Il2CppObject * get_predicates_0() const { return ___predicates_0; }
	inline Il2CppObject ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(Il2CppObject * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___mesh_1)); }
	inline Mesh_t1414352559 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t1414352559 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t1414352559 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_1, value);
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___points_2)); }
	inline PointU5BU5D_t3405418987* get_points_2() const { return ___points_2; }
	inline PointU5BU5D_t3405418987** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(PointU5BU5D_t3405418987* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier(&___points_2, value);
	}

	inline static int32_t get_offset_of_regions_3() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___regions_3)); }
	inline List_1_t593201092 * get_regions_3() const { return ___regions_3; }
	inline List_1_t593201092 ** get_address_of_regions_3() { return &___regions_3; }
	inline void set_regions_3(List_1_t593201092 * value)
	{
		___regions_3 = value;
		Il2CppCodeGenWriteBarrier(&___regions_3, value);
	}

	inline static int32_t get_offset_of_segPoints_4() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___segPoints_4)); }
	inline List_1_t3788314186 * get_segPoints_4() const { return ___segPoints_4; }
	inline List_1_t3788314186 ** get_address_of_segPoints_4() { return &___segPoints_4; }
	inline void set_segPoints_4(List_1_t3788314186 * value)
	{
		___segPoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___segPoints_4, value);
	}

	inline static int32_t get_offset_of_segIndex_5() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___segIndex_5)); }
	inline int32_t get_segIndex_5() const { return ___segIndex_5; }
	inline int32_t* get_address_of_segIndex_5() { return &___segIndex_5; }
	inline void set_segIndex_5(int32_t value)
	{
		___segIndex_5 = value;
	}

	inline static int32_t get_offset_of_subsegMap_6() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___subsegMap_6)); }
	inline Dictionary_2_t4221418462 * get_subsegMap_6() const { return ___subsegMap_6; }
	inline Dictionary_2_t4221418462 ** get_address_of_subsegMap_6() { return &___subsegMap_6; }
	inline void set_subsegMap_6(Dictionary_2_t4221418462 * value)
	{
		___subsegMap_6 = value;
		Il2CppCodeGenWriteBarrier(&___subsegMap_6, value);
	}

	inline static int32_t get_offset_of_includeBoundary_7() { return static_cast<int32_t>(offsetof(BoundedVoronoiLegacy_t1975431292, ___includeBoundary_7)); }
	inline bool get_includeBoundary_7() const { return ___includeBoundary_7; }
	inline bool* get_address_of_includeBoundary_7() { return &___includeBoundary_7; }
	inline void set_includeBoundary_7(bool value)
	{
		___includeBoundary_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
