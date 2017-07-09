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

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join
struct  Join_t2786430084  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OutPt1
	OutPt_t87825268 * ___OutPt1_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OutPt2
	OutPt_t87825268 * ___OutPt2_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join::OffPt
	IntPoint_t2482359717  ___OffPt_2;

public:
	inline static int32_t get_offset_of_OutPt1_0() { return static_cast<int32_t>(offsetof(Join_t2786430084, ___OutPt1_0)); }
	inline OutPt_t87825268 * get_OutPt1_0() const { return ___OutPt1_0; }
	inline OutPt_t87825268 ** get_address_of_OutPt1_0() { return &___OutPt1_0; }
	inline void set_OutPt1_0(OutPt_t87825268 * value)
	{
		___OutPt1_0 = value;
		Il2CppCodeGenWriteBarrier(&___OutPt1_0, value);
	}

	inline static int32_t get_offset_of_OutPt2_1() { return static_cast<int32_t>(offsetof(Join_t2786430084, ___OutPt2_1)); }
	inline OutPt_t87825268 * get_OutPt2_1() const { return ___OutPt2_1; }
	inline OutPt_t87825268 ** get_address_of_OutPt2_1() { return &___OutPt2_1; }
	inline void set_OutPt2_1(OutPt_t87825268 * value)
	{
		___OutPt2_1 = value;
		Il2CppCodeGenWriteBarrier(&___OutPt2_1, value);
	}

	inline static int32_t get_offset_of_OffPt_2() { return static_cast<int32_t>(offsetof(Join_t2786430084, ___OffPt_2)); }
	inline IntPoint_t2482359717  get_OffPt_2() const { return ___OffPt_2; }
	inline IntPoint_t2482359717 * get_address_of_OffPt_2() { return &___OffPt_2; }
	inline void set_OffPt_2(IntPoint_t2482359717  value)
	{
		___OffPt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
