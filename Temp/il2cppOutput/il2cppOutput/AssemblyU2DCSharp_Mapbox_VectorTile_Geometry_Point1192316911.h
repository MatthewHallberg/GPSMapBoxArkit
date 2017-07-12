#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.Point2d`1<System.Object>
struct  Point2d_1_t1192316911 
{
public:
	// T Mapbox.VectorTile.Geometry.Point2d`1::X
	Il2CppObject * ___X_0;
	// T Mapbox.VectorTile.Geometry.Point2d`1::Y
	Il2CppObject * ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point2d_1_t1192316911, ___X_0)); }
	inline Il2CppObject * get_X_0() const { return ___X_0; }
	inline Il2CppObject ** get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(Il2CppObject * value)
	{
		___X_0 = value;
		Il2CppCodeGenWriteBarrier(&___X_0, value);
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point2d_1_t1192316911, ___Y_1)); }
	inline Il2CppObject * get_Y_1() const { return ___Y_1; }
	inline Il2CppObject ** get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(Il2CppObject * value)
	{
		___Y_1 = value;
		Il2CppCodeGenWriteBarrier(&___Y_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
