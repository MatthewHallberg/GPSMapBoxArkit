#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_t2799122150;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t3788314186;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_t1611033753;
// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment>
struct List_1_t528188932;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Geometry.Polygon
struct  Polygon_t2200283598  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex> TriangleNet.Geometry.Polygon::points
	List_1_t2799122150 * ___points_0;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Geometry.Polygon::holes
	List_1_t3788314186 * ___holes_1;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.Geometry.Polygon::regions
	List_1_t1611033753 * ___regions_2;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.ISegment> TriangleNet.Geometry.Polygon::segments
	List_1_t528188932 * ___segments_3;
	// System.Boolean TriangleNet.Geometry.Polygon::<HasPointMarkers>k__BackingField
	bool ___U3CHasPointMarkersU3Ek__BackingField_4;
	// System.Boolean TriangleNet.Geometry.Polygon::<HasSegmentMarkers>k__BackingField
	bool ___U3CHasSegmentMarkersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___points_0)); }
	inline List_1_t2799122150 * get_points_0() const { return ___points_0; }
	inline List_1_t2799122150 ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_t2799122150 * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_0, value);
	}

	inline static int32_t get_offset_of_holes_1() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___holes_1)); }
	inline List_1_t3788314186 * get_holes_1() const { return ___holes_1; }
	inline List_1_t3788314186 ** get_address_of_holes_1() { return &___holes_1; }
	inline void set_holes_1(List_1_t3788314186 * value)
	{
		___holes_1 = value;
		Il2CppCodeGenWriteBarrier(&___holes_1, value);
	}

	inline static int32_t get_offset_of_regions_2() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___regions_2)); }
	inline List_1_t1611033753 * get_regions_2() const { return ___regions_2; }
	inline List_1_t1611033753 ** get_address_of_regions_2() { return &___regions_2; }
	inline void set_regions_2(List_1_t1611033753 * value)
	{
		___regions_2 = value;
		Il2CppCodeGenWriteBarrier(&___regions_2, value);
	}

	inline static int32_t get_offset_of_segments_3() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___segments_3)); }
	inline List_1_t528188932 * get_segments_3() const { return ___segments_3; }
	inline List_1_t528188932 ** get_address_of_segments_3() { return &___segments_3; }
	inline void set_segments_3(List_1_t528188932 * value)
	{
		___segments_3 = value;
		Il2CppCodeGenWriteBarrier(&___segments_3, value);
	}

	inline static int32_t get_offset_of_U3CHasPointMarkersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___U3CHasPointMarkersU3Ek__BackingField_4)); }
	inline bool get_U3CHasPointMarkersU3Ek__BackingField_4() const { return ___U3CHasPointMarkersU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasPointMarkersU3Ek__BackingField_4() { return &___U3CHasPointMarkersU3Ek__BackingField_4; }
	inline void set_U3CHasPointMarkersU3Ek__BackingField_4(bool value)
	{
		___U3CHasPointMarkersU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CHasSegmentMarkersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Polygon_t2200283598, ___U3CHasSegmentMarkersU3Ek__BackingField_5)); }
	inline bool get_U3CHasSegmentMarkersU3Ek__BackingField_5() const { return ___U3CHasSegmentMarkersU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHasSegmentMarkersU3Ek__BackingField_5() { return &___U3CHasSegmentMarkersU3Ek__BackingField_5; }
	inline void set_U3CHasSegmentMarkersU3Ek__BackingField_5(bool value)
	{
		___U3CHasSegmentMarkersU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
