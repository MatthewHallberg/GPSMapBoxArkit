#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Tools.QualityMeasure/AreaMeasure
struct  AreaMeasure_t2609477317  : public Il2CppObject
{
public:
	// System.Double TriangleNet.Tools.QualityMeasure/AreaMeasure::area_min
	double ___area_min_0;
	// System.Double TriangleNet.Tools.QualityMeasure/AreaMeasure::area_max
	double ___area_max_1;
	// System.Double TriangleNet.Tools.QualityMeasure/AreaMeasure::area_total
	double ___area_total_2;
	// System.Int32 TriangleNet.Tools.QualityMeasure/AreaMeasure::area_zero
	int32_t ___area_zero_3;

public:
	inline static int32_t get_offset_of_area_min_0() { return static_cast<int32_t>(offsetof(AreaMeasure_t2609477317, ___area_min_0)); }
	inline double get_area_min_0() const { return ___area_min_0; }
	inline double* get_address_of_area_min_0() { return &___area_min_0; }
	inline void set_area_min_0(double value)
	{
		___area_min_0 = value;
	}

	inline static int32_t get_offset_of_area_max_1() { return static_cast<int32_t>(offsetof(AreaMeasure_t2609477317, ___area_max_1)); }
	inline double get_area_max_1() const { return ___area_max_1; }
	inline double* get_address_of_area_max_1() { return &___area_max_1; }
	inline void set_area_max_1(double value)
	{
		___area_max_1 = value;
	}

	inline static int32_t get_offset_of_area_total_2() { return static_cast<int32_t>(offsetof(AreaMeasure_t2609477317, ___area_total_2)); }
	inline double get_area_total_2() const { return ___area_total_2; }
	inline double* get_address_of_area_total_2() { return &___area_total_2; }
	inline void set_area_total_2(double value)
	{
		___area_total_2 = value;
	}

	inline static int32_t get_offset_of_area_zero_3() { return static_cast<int32_t>(offsetof(AreaMeasure_t2609477317, ___area_zero_3)); }
	inline int32_t get_area_zero_3() const { return ___area_zero_3; }
	inline int32_t* get_address_of_area_zero_3() { return &___area_zero_3; }
	inline void set_area_zero_3(int32_t value)
	{
		___area_zero_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
