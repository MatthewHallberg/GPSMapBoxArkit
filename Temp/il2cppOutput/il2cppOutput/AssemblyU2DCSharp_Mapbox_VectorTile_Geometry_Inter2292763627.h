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

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t2833881561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode
struct  IntersectNode_t2292763627  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge1
	TEdge_t2833881561 * ___Edge1_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge2
	TEdge_t2833881561 * ___Edge2_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Pt
	IntPoint_t2482359717  ___Pt_2;

public:
	inline static int32_t get_offset_of_Edge1_0() { return static_cast<int32_t>(offsetof(IntersectNode_t2292763627, ___Edge1_0)); }
	inline TEdge_t2833881561 * get_Edge1_0() const { return ___Edge1_0; }
	inline TEdge_t2833881561 ** get_address_of_Edge1_0() { return &___Edge1_0; }
	inline void set_Edge1_0(TEdge_t2833881561 * value)
	{
		___Edge1_0 = value;
		Il2CppCodeGenWriteBarrier(&___Edge1_0, value);
	}

	inline static int32_t get_offset_of_Edge2_1() { return static_cast<int32_t>(offsetof(IntersectNode_t2292763627, ___Edge2_1)); }
	inline TEdge_t2833881561 * get_Edge2_1() const { return ___Edge2_1; }
	inline TEdge_t2833881561 ** get_address_of_Edge2_1() { return &___Edge2_1; }
	inline void set_Edge2_1(TEdge_t2833881561 * value)
	{
		___Edge2_1 = value;
		Il2CppCodeGenWriteBarrier(&___Edge2_1, value);
	}

	inline static int32_t get_offset_of_Pt_2() { return static_cast<int32_t>(offsetof(IntersectNode_t2292763627, ___Pt_2)); }
	inline IntPoint_t2482359717  get_Pt_2() const { return ___Pt_2; }
	inline IntPoint_t2482359717 * get_address_of_Pt_2() { return &___Pt_2; }
	inline void set_Pt_2(IntPoint_t2482359717  value)
	{
		___Pt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
