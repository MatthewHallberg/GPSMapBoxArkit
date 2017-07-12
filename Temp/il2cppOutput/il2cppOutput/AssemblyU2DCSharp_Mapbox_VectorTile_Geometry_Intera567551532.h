#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct LocalMinima_t1268459690;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>>
struct List_1_t1572123825;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct Scanbeam_t737766598;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec>
struct List_1_t620670390;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t2833881561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase
struct  ClipperBase_t567551532  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_MinimaList
	LocalMinima_t1268459690 * ___m_MinimaList_6;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_CurrentLM
	LocalMinima_t1268459690 * ___m_CurrentLM_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge>> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_edges
	List_1_t1572123825 * ___m_edges_8;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_Scanbeam
	Scanbeam_t737766598 * ___m_Scanbeam_9;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_PolyOuts
	List_1_t620670390 * ___m_PolyOuts_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_ActiveEdges
	TEdge_t2833881561 * ___m_ActiveEdges_11;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_UseFullRange
	bool ___m_UseFullRange_12;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::m_HasOpenPaths
	bool ___m_HasOpenPaths_13;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperBase::<PreserveCollinear>k__BackingField
	bool ___U3CPreserveCollinearU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_m_MinimaList_6() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_MinimaList_6)); }
	inline LocalMinima_t1268459690 * get_m_MinimaList_6() const { return ___m_MinimaList_6; }
	inline LocalMinima_t1268459690 ** get_address_of_m_MinimaList_6() { return &___m_MinimaList_6; }
	inline void set_m_MinimaList_6(LocalMinima_t1268459690 * value)
	{
		___m_MinimaList_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_MinimaList_6, value);
	}

	inline static int32_t get_offset_of_m_CurrentLM_7() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_CurrentLM_7)); }
	inline LocalMinima_t1268459690 * get_m_CurrentLM_7() const { return ___m_CurrentLM_7; }
	inline LocalMinima_t1268459690 ** get_address_of_m_CurrentLM_7() { return &___m_CurrentLM_7; }
	inline void set_m_CurrentLM_7(LocalMinima_t1268459690 * value)
	{
		___m_CurrentLM_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentLM_7, value);
	}

	inline static int32_t get_offset_of_m_edges_8() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_edges_8)); }
	inline List_1_t1572123825 * get_m_edges_8() const { return ___m_edges_8; }
	inline List_1_t1572123825 ** get_address_of_m_edges_8() { return &___m_edges_8; }
	inline void set_m_edges_8(List_1_t1572123825 * value)
	{
		___m_edges_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_edges_8, value);
	}

	inline static int32_t get_offset_of_m_Scanbeam_9() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_Scanbeam_9)); }
	inline Scanbeam_t737766598 * get_m_Scanbeam_9() const { return ___m_Scanbeam_9; }
	inline Scanbeam_t737766598 ** get_address_of_m_Scanbeam_9() { return &___m_Scanbeam_9; }
	inline void set_m_Scanbeam_9(Scanbeam_t737766598 * value)
	{
		___m_Scanbeam_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Scanbeam_9, value);
	}

	inline static int32_t get_offset_of_m_PolyOuts_10() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_PolyOuts_10)); }
	inline List_1_t620670390 * get_m_PolyOuts_10() const { return ___m_PolyOuts_10; }
	inline List_1_t620670390 ** get_address_of_m_PolyOuts_10() { return &___m_PolyOuts_10; }
	inline void set_m_PolyOuts_10(List_1_t620670390 * value)
	{
		___m_PolyOuts_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_PolyOuts_10, value);
	}

	inline static int32_t get_offset_of_m_ActiveEdges_11() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_ActiveEdges_11)); }
	inline TEdge_t2833881561 * get_m_ActiveEdges_11() const { return ___m_ActiveEdges_11; }
	inline TEdge_t2833881561 ** get_address_of_m_ActiveEdges_11() { return &___m_ActiveEdges_11; }
	inline void set_m_ActiveEdges_11(TEdge_t2833881561 * value)
	{
		___m_ActiveEdges_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActiveEdges_11, value);
	}

	inline static int32_t get_offset_of_m_UseFullRange_12() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_UseFullRange_12)); }
	inline bool get_m_UseFullRange_12() const { return ___m_UseFullRange_12; }
	inline bool* get_address_of_m_UseFullRange_12() { return &___m_UseFullRange_12; }
	inline void set_m_UseFullRange_12(bool value)
	{
		___m_UseFullRange_12 = value;
	}

	inline static int32_t get_offset_of_m_HasOpenPaths_13() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___m_HasOpenPaths_13)); }
	inline bool get_m_HasOpenPaths_13() const { return ___m_HasOpenPaths_13; }
	inline bool* get_address_of_m_HasOpenPaths_13() { return &___m_HasOpenPaths_13; }
	inline void set_m_HasOpenPaths_13(bool value)
	{
		___m_HasOpenPaths_13 = value;
	}

	inline static int32_t get_offset_of_U3CPreserveCollinearU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ClipperBase_t567551532, ___U3CPreserveCollinearU3Ek__BackingField_14)); }
	inline bool get_U3CPreserveCollinearU3Ek__BackingField_14() const { return ___U3CPreserveCollinearU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreserveCollinearU3Ek__BackingField_14() { return &___U3CPreserveCollinearU3Ek__BackingField_14; }
	inline void set_U3CPreserveCollinearU3Ek__BackingField_14(bool value)
	{
		___U3CPreserveCollinearU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
