#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Intera567551532.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter2377340222.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter1761575471.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct Maxima_t3302268303;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t2833881561;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>
struct List_1_t1661884759;
// System.Collections.Generic.IComparer`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode>
struct IComparer_1_t247226749;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join>
struct List_1_t2155551216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper
struct  Clipper_t2198513455  : public ClipperBase_t567551532
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ClipType
	int32_t ___m_ClipType_18;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_Maxima
	Maxima_t3302268303 * ___m_Maxima_19;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_SortedEdges
	TEdge_t2833881561 * ___m_SortedEdges_20;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_IntersectList
	List_1_t1661884759 * ___m_IntersectList_21;
	// System.Collections.Generic.IComparer`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_IntersectNodeComparer
	Il2CppObject* ___m_IntersectNodeComparer_22;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ExecuteLocked
	bool ___m_ExecuteLocked_23;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_ClipFillType
	int32_t ___m_ClipFillType_24;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_SubjFillType
	int32_t ___m_SubjFillType_25;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_Joins
	List_1_t2155551216 * ___m_Joins_26;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Join> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_GhostJoins
	List_1_t2155551216 * ___m_GhostJoins_27;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::m_UsingPolyTree
	bool ___m_UsingPolyTree_28;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::<ReverseSolution>k__BackingField
	bool ___U3CReverseSolutionU3Ek__BackingField_29;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Clipper::<StrictlySimple>k__BackingField
	bool ___U3CStrictlySimpleU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_m_ClipType_18() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_ClipType_18)); }
	inline int32_t get_m_ClipType_18() const { return ___m_ClipType_18; }
	inline int32_t* get_address_of_m_ClipType_18() { return &___m_ClipType_18; }
	inline void set_m_ClipType_18(int32_t value)
	{
		___m_ClipType_18 = value;
	}

	inline static int32_t get_offset_of_m_Maxima_19() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_Maxima_19)); }
	inline Maxima_t3302268303 * get_m_Maxima_19() const { return ___m_Maxima_19; }
	inline Maxima_t3302268303 ** get_address_of_m_Maxima_19() { return &___m_Maxima_19; }
	inline void set_m_Maxima_19(Maxima_t3302268303 * value)
	{
		___m_Maxima_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Maxima_19, value);
	}

	inline static int32_t get_offset_of_m_SortedEdges_20() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_SortedEdges_20)); }
	inline TEdge_t2833881561 * get_m_SortedEdges_20() const { return ___m_SortedEdges_20; }
	inline TEdge_t2833881561 ** get_address_of_m_SortedEdges_20() { return &___m_SortedEdges_20; }
	inline void set_m_SortedEdges_20(TEdge_t2833881561 * value)
	{
		___m_SortedEdges_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_SortedEdges_20, value);
	}

	inline static int32_t get_offset_of_m_IntersectList_21() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_IntersectList_21)); }
	inline List_1_t1661884759 * get_m_IntersectList_21() const { return ___m_IntersectList_21; }
	inline List_1_t1661884759 ** get_address_of_m_IntersectList_21() { return &___m_IntersectList_21; }
	inline void set_m_IntersectList_21(List_1_t1661884759 * value)
	{
		___m_IntersectList_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_IntersectList_21, value);
	}

	inline static int32_t get_offset_of_m_IntersectNodeComparer_22() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_IntersectNodeComparer_22)); }
	inline Il2CppObject* get_m_IntersectNodeComparer_22() const { return ___m_IntersectNodeComparer_22; }
	inline Il2CppObject** get_address_of_m_IntersectNodeComparer_22() { return &___m_IntersectNodeComparer_22; }
	inline void set_m_IntersectNodeComparer_22(Il2CppObject* value)
	{
		___m_IntersectNodeComparer_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_IntersectNodeComparer_22, value);
	}

	inline static int32_t get_offset_of_m_ExecuteLocked_23() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_ExecuteLocked_23)); }
	inline bool get_m_ExecuteLocked_23() const { return ___m_ExecuteLocked_23; }
	inline bool* get_address_of_m_ExecuteLocked_23() { return &___m_ExecuteLocked_23; }
	inline void set_m_ExecuteLocked_23(bool value)
	{
		___m_ExecuteLocked_23 = value;
	}

	inline static int32_t get_offset_of_m_ClipFillType_24() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_ClipFillType_24)); }
	inline int32_t get_m_ClipFillType_24() const { return ___m_ClipFillType_24; }
	inline int32_t* get_address_of_m_ClipFillType_24() { return &___m_ClipFillType_24; }
	inline void set_m_ClipFillType_24(int32_t value)
	{
		___m_ClipFillType_24 = value;
	}

	inline static int32_t get_offset_of_m_SubjFillType_25() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_SubjFillType_25)); }
	inline int32_t get_m_SubjFillType_25() const { return ___m_SubjFillType_25; }
	inline int32_t* get_address_of_m_SubjFillType_25() { return &___m_SubjFillType_25; }
	inline void set_m_SubjFillType_25(int32_t value)
	{
		___m_SubjFillType_25 = value;
	}

	inline static int32_t get_offset_of_m_Joins_26() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_Joins_26)); }
	inline List_1_t2155551216 * get_m_Joins_26() const { return ___m_Joins_26; }
	inline List_1_t2155551216 ** get_address_of_m_Joins_26() { return &___m_Joins_26; }
	inline void set_m_Joins_26(List_1_t2155551216 * value)
	{
		___m_Joins_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_Joins_26, value);
	}

	inline static int32_t get_offset_of_m_GhostJoins_27() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_GhostJoins_27)); }
	inline List_1_t2155551216 * get_m_GhostJoins_27() const { return ___m_GhostJoins_27; }
	inline List_1_t2155551216 ** get_address_of_m_GhostJoins_27() { return &___m_GhostJoins_27; }
	inline void set_m_GhostJoins_27(List_1_t2155551216 * value)
	{
		___m_GhostJoins_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_GhostJoins_27, value);
	}

	inline static int32_t get_offset_of_m_UsingPolyTree_28() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___m_UsingPolyTree_28)); }
	inline bool get_m_UsingPolyTree_28() const { return ___m_UsingPolyTree_28; }
	inline bool* get_address_of_m_UsingPolyTree_28() { return &___m_UsingPolyTree_28; }
	inline void set_m_UsingPolyTree_28(bool value)
	{
		___m_UsingPolyTree_28 = value;
	}

	inline static int32_t get_offset_of_U3CReverseSolutionU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___U3CReverseSolutionU3Ek__BackingField_29)); }
	inline bool get_U3CReverseSolutionU3Ek__BackingField_29() const { return ___U3CReverseSolutionU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CReverseSolutionU3Ek__BackingField_29() { return &___U3CReverseSolutionU3Ek__BackingField_29; }
	inline void set_U3CReverseSolutionU3Ek__BackingField_29(bool value)
	{
		___U3CReverseSolutionU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CStrictlySimpleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Clipper_t2198513455, ___U3CStrictlySimpleU3Ek__BackingField_30)); }
	inline bool get_U3CStrictlySimpleU3Ek__BackingField_30() const { return ___U3CStrictlySimpleU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CStrictlySimpleU3Ek__BackingField_30() { return &___U3CStrictlySimpleU3Ek__BackingField_30; }
	inline void set_U3CStrictlySimpleU3Ek__BackingField_30(bool value)
	{
		___U3CStrictlySimpleU3Ek__BackingField_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
