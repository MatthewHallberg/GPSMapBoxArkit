#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Geometry.Point
struct Point_t124225758;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t3788314186;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Voronoi.Legacy.VoronoiRegion>
struct Dictionary_2_t231905595;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Voronoi.Legacy.VoronoiRegion
struct  VoronoiRegion_t1224079960  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Voronoi.Legacy.VoronoiRegion::id
	int32_t ___id_0;
	// TriangleNet.Geometry.Point TriangleNet.Voronoi.Legacy.VoronoiRegion::generator
	Point_t124225758 * ___generator_1;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Voronoi.Legacy.VoronoiRegion::vertices
	List_1_t3788314186 * ___vertices_2;
	// System.Boolean TriangleNet.Voronoi.Legacy.VoronoiRegion::bounded
	bool ___bounded_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Voronoi.Legacy.VoronoiRegion> TriangleNet.Voronoi.Legacy.VoronoiRegion::neighbors
	Dictionary_2_t231905595 * ___neighbors_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VoronoiRegion_t1224079960, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_generator_1() { return static_cast<int32_t>(offsetof(VoronoiRegion_t1224079960, ___generator_1)); }
	inline Point_t124225758 * get_generator_1() const { return ___generator_1; }
	inline Point_t124225758 ** get_address_of_generator_1() { return &___generator_1; }
	inline void set_generator_1(Point_t124225758 * value)
	{
		___generator_1 = value;
		Il2CppCodeGenWriteBarrier(&___generator_1, value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(VoronoiRegion_t1224079960, ___vertices_2)); }
	inline List_1_t3788314186 * get_vertices_2() const { return ___vertices_2; }
	inline List_1_t3788314186 ** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(List_1_t3788314186 * value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_2, value);
	}

	inline static int32_t get_offset_of_bounded_3() { return static_cast<int32_t>(offsetof(VoronoiRegion_t1224079960, ___bounded_3)); }
	inline bool get_bounded_3() const { return ___bounded_3; }
	inline bool* get_address_of_bounded_3() { return &___bounded_3; }
	inline void set_bounded_3(bool value)
	{
		___bounded_3 = value;
	}

	inline static int32_t get_offset_of_neighbors_4() { return static_cast<int32_t>(offsetof(VoronoiRegion_t1224079960, ___neighbors_4)); }
	inline Dictionary_2_t231905595 * get_neighbors_4() const { return ___neighbors_4; }
	inline Dictionary_2_t231905595 ** get_address_of_neighbors_4() { return &___neighbors_4; }
	inline void set_neighbors_4(Dictionary_2_t231905595 * value)
	{
		___neighbors_4 = value;
		Il2CppCodeGenWriteBarrier(&___neighbors_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
