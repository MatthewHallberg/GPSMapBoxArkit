#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t2833881561;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct LocalMinima_t1268459690;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct  LocalMinima_t1268459690  : public Il2CppObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::LeftBound
	TEdge_t2833881561 * ___LeftBound_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::RightBound
	TEdge_t2833881561 * ___RightBound_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Next
	LocalMinima_t1268459690 * ___Next_3;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(LocalMinima_t1268459690, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_LeftBound_1() { return static_cast<int32_t>(offsetof(LocalMinima_t1268459690, ___LeftBound_1)); }
	inline TEdge_t2833881561 * get_LeftBound_1() const { return ___LeftBound_1; }
	inline TEdge_t2833881561 ** get_address_of_LeftBound_1() { return &___LeftBound_1; }
	inline void set_LeftBound_1(TEdge_t2833881561 * value)
	{
		___LeftBound_1 = value;
		Il2CppCodeGenWriteBarrier(&___LeftBound_1, value);
	}

	inline static int32_t get_offset_of_RightBound_2() { return static_cast<int32_t>(offsetof(LocalMinima_t1268459690, ___RightBound_2)); }
	inline TEdge_t2833881561 * get_RightBound_2() const { return ___RightBound_2; }
	inline TEdge_t2833881561 ** get_address_of_RightBound_2() { return &___RightBound_2; }
	inline void set_RightBound_2(TEdge_t2833881561 * value)
	{
		___RightBound_2 = value;
		Il2CppCodeGenWriteBarrier(&___RightBound_2, value);
	}

	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(LocalMinima_t1268459690, ___Next_3)); }
	inline LocalMinima_t1268459690 * get_Next_3() const { return ___Next_3; }
	inline LocalMinima_t1268459690 ** get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(LocalMinima_t1268459690 * value)
	{
		___Next_3 = value;
		Il2CppCodeGenWriteBarrier(&___Next_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
