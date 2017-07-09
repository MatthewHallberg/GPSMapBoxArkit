#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec
struct OutRec_t1251549258;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt
struct OutPt_t87825268;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct PolyNode_t1431547530;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec
struct  OutRec_t1251549258  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::Idx
	int32_t ___Idx_0;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::IsHole
	bool ___IsHole_1;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::IsOpen
	bool ___IsOpen_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::FirstLeft
	OutRec_t1251549258 * ___FirstLeft_3;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::Pts
	OutPt_t87825268 * ___Pts_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutPt Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::BottomPt
	OutPt_t87825268 * ___BottomPt_5;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/OutRec::PolyNode
	PolyNode_t1431547530 * ___PolyNode_6;

public:
	inline static int32_t get_offset_of_Idx_0() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___Idx_0)); }
	inline int32_t get_Idx_0() const { return ___Idx_0; }
	inline int32_t* get_address_of_Idx_0() { return &___Idx_0; }
	inline void set_Idx_0(int32_t value)
	{
		___Idx_0 = value;
	}

	inline static int32_t get_offset_of_IsHole_1() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___IsHole_1)); }
	inline bool get_IsHole_1() const { return ___IsHole_1; }
	inline bool* get_address_of_IsHole_1() { return &___IsHole_1; }
	inline void set_IsHole_1(bool value)
	{
		___IsHole_1 = value;
	}

	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}

	inline static int32_t get_offset_of_FirstLeft_3() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___FirstLeft_3)); }
	inline OutRec_t1251549258 * get_FirstLeft_3() const { return ___FirstLeft_3; }
	inline OutRec_t1251549258 ** get_address_of_FirstLeft_3() { return &___FirstLeft_3; }
	inline void set_FirstLeft_3(OutRec_t1251549258 * value)
	{
		___FirstLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___FirstLeft_3, value);
	}

	inline static int32_t get_offset_of_Pts_4() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___Pts_4)); }
	inline OutPt_t87825268 * get_Pts_4() const { return ___Pts_4; }
	inline OutPt_t87825268 ** get_address_of_Pts_4() { return &___Pts_4; }
	inline void set_Pts_4(OutPt_t87825268 * value)
	{
		___Pts_4 = value;
		Il2CppCodeGenWriteBarrier(&___Pts_4, value);
	}

	inline static int32_t get_offset_of_BottomPt_5() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___BottomPt_5)); }
	inline OutPt_t87825268 * get_BottomPt_5() const { return ___BottomPt_5; }
	inline OutPt_t87825268 ** get_address_of_BottomPt_5() { return &___BottomPt_5; }
	inline void set_BottomPt_5(OutPt_t87825268 * value)
	{
		___BottomPt_5 = value;
		Il2CppCodeGenWriteBarrier(&___BottomPt_5, value);
	}

	inline static int32_t get_offset_of_PolyNode_6() { return static_cast<int32_t>(offsetof(OutRec_t1251549258, ___PolyNode_6)); }
	inline PolyNode_t1431547530 * get_PolyNode_6() const { return ___PolyNode_6; }
	inline PolyNode_t1431547530 ** get_address_of_PolyNode_6() { return &___PolyNode_6; }
	inline void set_PolyNode_6(PolyNode_t1431547530 * value)
	{
		___PolyNode_6 = value;
		Il2CppCodeGenWriteBarrier(&___PolyNode_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
