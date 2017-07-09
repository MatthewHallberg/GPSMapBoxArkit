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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Geometry.RegionPointer
struct  RegionPointer_t2241912621  : public Il2CppObject
{
public:
	// TriangleNet.Geometry.Point TriangleNet.Geometry.RegionPointer::point
	Point_t124225758 * ___point_0;
	// System.Int32 TriangleNet.Geometry.RegionPointer::id
	int32_t ___id_1;
	// System.Double TriangleNet.Geometry.RegionPointer::area
	double ___area_2;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(RegionPointer_t2241912621, ___point_0)); }
	inline Point_t124225758 * get_point_0() const { return ___point_0; }
	inline Point_t124225758 ** get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Point_t124225758 * value)
	{
		___point_0 = value;
		Il2CppCodeGenWriteBarrier(&___point_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(RegionPointer_t2241912621, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_area_2() { return static_cast<int32_t>(offsetof(RegionPointer_t2241912621, ___area_2)); }
	inline double get_area_2() const { return ___area_2; }
	inline double* get_address_of_area_2() { return &___area_2; }
	inline void set_area_2(double value)
	{
		___area_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
