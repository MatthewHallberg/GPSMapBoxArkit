#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter2482359717.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt
struct OutPt_t87825268;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt
struct  OutPt_t87825268  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Idx
	int32_t ___Idx_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Pt
	IntPoint_t2482359717  ___Pt_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Next
	OutPt_t87825268 * ___Next_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt::Prev
	OutPt_t87825268 * ___Prev_3;

public:
	inline static int32_t get_offset_of_Idx_0() { return static_cast<int32_t>(offsetof(OutPt_t87825268, ___Idx_0)); }
	inline int32_t get_Idx_0() const { return ___Idx_0; }
	inline int32_t* get_address_of_Idx_0() { return &___Idx_0; }
	inline void set_Idx_0(int32_t value)
	{
		___Idx_0 = value;
	}

	inline static int32_t get_offset_of_Pt_1() { return static_cast<int32_t>(offsetof(OutPt_t87825268, ___Pt_1)); }
	inline IntPoint_t2482359717  get_Pt_1() const { return ___Pt_1; }
	inline IntPoint_t2482359717 * get_address_of_Pt_1() { return &___Pt_1; }
	inline void set_Pt_1(IntPoint_t2482359717  value)
	{
		___Pt_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(OutPt_t87825268, ___Next_2)); }
	inline OutPt_t87825268 * get_Next_2() const { return ___Next_2; }
	inline OutPt_t87825268 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(OutPt_t87825268 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier(&___Next_2, value);
	}

	inline static int32_t get_offset_of_Prev_3() { return static_cast<int32_t>(offsetof(OutPt_t87825268, ___Prev_3)); }
	inline OutPt_t87825268 * get_Prev_3() const { return ___Prev_3; }
	inline OutPt_t87825268 ** get_address_of_Prev_3() { return &___Prev_3; }
	inline void set_Prev_3(OutPt_t87825268 * value)
	{
		___Prev_3 = value;
		Il2CppCodeGenWriteBarrier(&___Prev_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
