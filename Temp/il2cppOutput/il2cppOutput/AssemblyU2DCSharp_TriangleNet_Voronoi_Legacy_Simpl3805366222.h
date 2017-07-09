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
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Voronoi.Legacy.VoronoiRegion>
struct Dictionary_2_t231905595;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Point>
struct Dictionary_2_t3427018689;
// TriangleNet.Geometry.Rectangle
struct Rectangle_t3983541573;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Voronoi.Legacy.SimpleVoronoi
struct  SimpleVoronoi_t3805366222  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Voronoi.Legacy.SimpleVoronoi::predicates
	Il2CppObject * ___predicates_0;
	// TriangleNet.Mesh TriangleNet.Voronoi.Legacy.SimpleVoronoi::mesh
	Mesh_t1414352559 * ___mesh_1;
	// TriangleNet.Geometry.Point[] TriangleNet.Voronoi.Legacy.SimpleVoronoi::points
	PointU5BU5D_t3405418987* ___points_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Voronoi.Legacy.VoronoiRegion> TriangleNet.Voronoi.Legacy.SimpleVoronoi::regions
	Dictionary_2_t231905595 * ___regions_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Point> TriangleNet.Voronoi.Legacy.SimpleVoronoi::rayPoints
	Dictionary_2_t3427018689 * ___rayPoints_4;
	// System.Int32 TriangleNet.Voronoi.Legacy.SimpleVoronoi::rayIndex
	int32_t ___rayIndex_5;
	// TriangleNet.Geometry.Rectangle TriangleNet.Voronoi.Legacy.SimpleVoronoi::bounds
	Rectangle_t3983541573 * ___bounds_6;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___predicates_0)); }
	inline Il2CppObject * get_predicates_0() const { return ___predicates_0; }
	inline Il2CppObject ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(Il2CppObject * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___mesh_1)); }
	inline Mesh_t1414352559 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t1414352559 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t1414352559 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_1, value);
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___points_2)); }
	inline PointU5BU5D_t3405418987* get_points_2() const { return ___points_2; }
	inline PointU5BU5D_t3405418987** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(PointU5BU5D_t3405418987* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier(&___points_2, value);
	}

	inline static int32_t get_offset_of_regions_3() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___regions_3)); }
	inline Dictionary_2_t231905595 * get_regions_3() const { return ___regions_3; }
	inline Dictionary_2_t231905595 ** get_address_of_regions_3() { return &___regions_3; }
	inline void set_regions_3(Dictionary_2_t231905595 * value)
	{
		___regions_3 = value;
		Il2CppCodeGenWriteBarrier(&___regions_3, value);
	}

	inline static int32_t get_offset_of_rayPoints_4() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___rayPoints_4)); }
	inline Dictionary_2_t3427018689 * get_rayPoints_4() const { return ___rayPoints_4; }
	inline Dictionary_2_t3427018689 ** get_address_of_rayPoints_4() { return &___rayPoints_4; }
	inline void set_rayPoints_4(Dictionary_2_t3427018689 * value)
	{
		___rayPoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___rayPoints_4, value);
	}

	inline static int32_t get_offset_of_rayIndex_5() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___rayIndex_5)); }
	inline int32_t get_rayIndex_5() const { return ___rayIndex_5; }
	inline int32_t* get_address_of_rayIndex_5() { return &___rayIndex_5; }
	inline void set_rayIndex_5(int32_t value)
	{
		___rayIndex_5 = value;
	}

	inline static int32_t get_offset_of_bounds_6() { return static_cast<int32_t>(offsetof(SimpleVoronoi_t3805366222, ___bounds_6)); }
	inline Rectangle_t3983541573 * get_bounds_6() const { return ___bounds_6; }
	inline Rectangle_t3983541573 ** get_address_of_bounds_6() { return &___bounds_6; }
	inline void set_bounds_6(Rectangle_t3983541573 * value)
	{
		___bounds_6 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
