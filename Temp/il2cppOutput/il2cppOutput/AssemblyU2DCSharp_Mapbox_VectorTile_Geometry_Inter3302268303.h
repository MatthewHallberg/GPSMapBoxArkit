#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct Maxima_t3302268303;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct  Maxima_t3302268303  : public Il2CppObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::X
	int64_t ___X_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Next
	Maxima_t3302268303 * ___Next_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Prev
	Maxima_t3302268303 * ___Prev_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Maxima_t3302268303, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Maxima_t3302268303, ___Next_1)); }
	inline Maxima_t3302268303 * get_Next_1() const { return ___Next_1; }
	inline Maxima_t3302268303 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Maxima_t3302268303 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier(&___Next_1, value);
	}

	inline static int32_t get_offset_of_Prev_2() { return static_cast<int32_t>(offsetof(Maxima_t3302268303, ___Prev_2)); }
	inline Maxima_t3302268303 * get_Prev_2() const { return ___Prev_2; }
	inline Maxima_t3302268303 ** get_address_of_Prev_2() { return &___Prev_2; }
	inline void set_Prev_2(Maxima_t3302268303 * value)
	{
		___Prev_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prev_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
