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
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter4167079442.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Intera290854666.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t2833881561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct  TEdge_t2833881561  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Bot
	IntPoint_t2482359717  ___Bot_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Curr
	IntPoint_t2482359717  ___Curr_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Top
	IntPoint_t2482359717  ___Top_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Delta
	IntPoint_t2482359717  ___Delta_3;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Dx
	double ___Dx_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PolyTyp
	int32_t ___PolyTyp_5;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Side
	int32_t ___Side_6;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindDelta
	int32_t ___WindDelta_7;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt
	int32_t ___WindCnt_8;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt2
	int32_t ___WindCnt2_9;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::OutIdx
	int32_t ___OutIdx_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Next
	TEdge_t2833881561 * ___Next_11;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Prev
	TEdge_t2833881561 * ___Prev_12;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInLML
	TEdge_t2833881561 * ___NextInLML_13;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInAEL
	TEdge_t2833881561 * ___NextInAEL_14;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInAEL
	TEdge_t2833881561 * ___PrevInAEL_15;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInSEL
	TEdge_t2833881561 * ___NextInSEL_16;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInSEL
	TEdge_t2833881561 * ___PrevInSEL_17;

public:
	inline static int32_t get_offset_of_Bot_0() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Bot_0)); }
	inline IntPoint_t2482359717  get_Bot_0() const { return ___Bot_0; }
	inline IntPoint_t2482359717 * get_address_of_Bot_0() { return &___Bot_0; }
	inline void set_Bot_0(IntPoint_t2482359717  value)
	{
		___Bot_0 = value;
	}

	inline static int32_t get_offset_of_Curr_1() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Curr_1)); }
	inline IntPoint_t2482359717  get_Curr_1() const { return ___Curr_1; }
	inline IntPoint_t2482359717 * get_address_of_Curr_1() { return &___Curr_1; }
	inline void set_Curr_1(IntPoint_t2482359717  value)
	{
		___Curr_1 = value;
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Top_2)); }
	inline IntPoint_t2482359717  get_Top_2() const { return ___Top_2; }
	inline IntPoint_t2482359717 * get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(IntPoint_t2482359717  value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Delta_3() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Delta_3)); }
	inline IntPoint_t2482359717  get_Delta_3() const { return ___Delta_3; }
	inline IntPoint_t2482359717 * get_address_of_Delta_3() { return &___Delta_3; }
	inline void set_Delta_3(IntPoint_t2482359717  value)
	{
		___Delta_3 = value;
	}

	inline static int32_t get_offset_of_Dx_4() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Dx_4)); }
	inline double get_Dx_4() const { return ___Dx_4; }
	inline double* get_address_of_Dx_4() { return &___Dx_4; }
	inline void set_Dx_4(double value)
	{
		___Dx_4 = value;
	}

	inline static int32_t get_offset_of_PolyTyp_5() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___PolyTyp_5)); }
	inline int32_t get_PolyTyp_5() const { return ___PolyTyp_5; }
	inline int32_t* get_address_of_PolyTyp_5() { return &___PolyTyp_5; }
	inline void set_PolyTyp_5(int32_t value)
	{
		___PolyTyp_5 = value;
	}

	inline static int32_t get_offset_of_Side_6() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Side_6)); }
	inline int32_t get_Side_6() const { return ___Side_6; }
	inline int32_t* get_address_of_Side_6() { return &___Side_6; }
	inline void set_Side_6(int32_t value)
	{
		___Side_6 = value;
	}

	inline static int32_t get_offset_of_WindDelta_7() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___WindDelta_7)); }
	inline int32_t get_WindDelta_7() const { return ___WindDelta_7; }
	inline int32_t* get_address_of_WindDelta_7() { return &___WindDelta_7; }
	inline void set_WindDelta_7(int32_t value)
	{
		___WindDelta_7 = value;
	}

	inline static int32_t get_offset_of_WindCnt_8() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___WindCnt_8)); }
	inline int32_t get_WindCnt_8() const { return ___WindCnt_8; }
	inline int32_t* get_address_of_WindCnt_8() { return &___WindCnt_8; }
	inline void set_WindCnt_8(int32_t value)
	{
		___WindCnt_8 = value;
	}

	inline static int32_t get_offset_of_WindCnt2_9() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___WindCnt2_9)); }
	inline int32_t get_WindCnt2_9() const { return ___WindCnt2_9; }
	inline int32_t* get_address_of_WindCnt2_9() { return &___WindCnt2_9; }
	inline void set_WindCnt2_9(int32_t value)
	{
		___WindCnt2_9 = value;
	}

	inline static int32_t get_offset_of_OutIdx_10() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___OutIdx_10)); }
	inline int32_t get_OutIdx_10() const { return ___OutIdx_10; }
	inline int32_t* get_address_of_OutIdx_10() { return &___OutIdx_10; }
	inline void set_OutIdx_10(int32_t value)
	{
		___OutIdx_10 = value;
	}

	inline static int32_t get_offset_of_Next_11() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Next_11)); }
	inline TEdge_t2833881561 * get_Next_11() const { return ___Next_11; }
	inline TEdge_t2833881561 ** get_address_of_Next_11() { return &___Next_11; }
	inline void set_Next_11(TEdge_t2833881561 * value)
	{
		___Next_11 = value;
		Il2CppCodeGenWriteBarrier(&___Next_11, value);
	}

	inline static int32_t get_offset_of_Prev_12() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___Prev_12)); }
	inline TEdge_t2833881561 * get_Prev_12() const { return ___Prev_12; }
	inline TEdge_t2833881561 ** get_address_of_Prev_12() { return &___Prev_12; }
	inline void set_Prev_12(TEdge_t2833881561 * value)
	{
		___Prev_12 = value;
		Il2CppCodeGenWriteBarrier(&___Prev_12, value);
	}

	inline static int32_t get_offset_of_NextInLML_13() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___NextInLML_13)); }
	inline TEdge_t2833881561 * get_NextInLML_13() const { return ___NextInLML_13; }
	inline TEdge_t2833881561 ** get_address_of_NextInLML_13() { return &___NextInLML_13; }
	inline void set_NextInLML_13(TEdge_t2833881561 * value)
	{
		___NextInLML_13 = value;
		Il2CppCodeGenWriteBarrier(&___NextInLML_13, value);
	}

	inline static int32_t get_offset_of_NextInAEL_14() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___NextInAEL_14)); }
	inline TEdge_t2833881561 * get_NextInAEL_14() const { return ___NextInAEL_14; }
	inline TEdge_t2833881561 ** get_address_of_NextInAEL_14() { return &___NextInAEL_14; }
	inline void set_NextInAEL_14(TEdge_t2833881561 * value)
	{
		___NextInAEL_14 = value;
		Il2CppCodeGenWriteBarrier(&___NextInAEL_14, value);
	}

	inline static int32_t get_offset_of_PrevInAEL_15() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___PrevInAEL_15)); }
	inline TEdge_t2833881561 * get_PrevInAEL_15() const { return ___PrevInAEL_15; }
	inline TEdge_t2833881561 ** get_address_of_PrevInAEL_15() { return &___PrevInAEL_15; }
	inline void set_PrevInAEL_15(TEdge_t2833881561 * value)
	{
		___PrevInAEL_15 = value;
		Il2CppCodeGenWriteBarrier(&___PrevInAEL_15, value);
	}

	inline static int32_t get_offset_of_NextInSEL_16() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___NextInSEL_16)); }
	inline TEdge_t2833881561 * get_NextInSEL_16() const { return ___NextInSEL_16; }
	inline TEdge_t2833881561 ** get_address_of_NextInSEL_16() { return &___NextInSEL_16; }
	inline void set_NextInSEL_16(TEdge_t2833881561 * value)
	{
		___NextInSEL_16 = value;
		Il2CppCodeGenWriteBarrier(&___NextInSEL_16, value);
	}

	inline static int32_t get_offset_of_PrevInSEL_17() { return static_cast<int32_t>(offsetof(TEdge_t2833881561, ___PrevInSEL_17)); }
	inline TEdge_t2833881561 * get_PrevInSEL_17() const { return ___PrevInSEL_17; }
	inline TEdge_t2833881561 ** get_address_of_PrevInSEL_17() { return &___PrevInSEL_17; }
	inline void set_PrevInSEL_17(TEdge_t2833881561 * value)
	{
		___PrevInSEL_17 = value;
		Il2CppCodeGenWriteBarrier(&___PrevInSEL_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
