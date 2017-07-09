#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct Scanbeam_t737766598;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct  Scanbeam_t737766598  : public Il2CppObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Next
	Scanbeam_t737766598 * ___Next_1;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(Scanbeam_t737766598, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Scanbeam_t737766598, ___Next_1)); }
	inline Scanbeam_t737766598 * get_Next_1() const { return ___Next_1; }
	inline Scanbeam_t737766598 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Scanbeam_t737766598 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier(&___Next_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
