#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter1431547530.h"

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct List_1_t800668662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree
struct  PolyTree_t1344088046  : public PolyNode_t1431547530
{
public:
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::m_AllPolys
	List_1_t800668662 * ___m_AllPolys_7;

public:
	inline static int32_t get_offset_of_m_AllPolys_7() { return static_cast<int32_t>(offsetof(PolyTree_t1344088046, ___m_AllPolys_7)); }
	inline List_1_t800668662 * get_m_AllPolys_7() const { return ___m_AllPolys_7; }
	inline List_1_t800668662 ** get_address_of_m_AllPolys_7() { return &___m_AllPolys_7; }
	inline void set_m_AllPolys_7(List_1_t800668662 * value)
	{
		___m_AllPolys_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_AllPolys_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
