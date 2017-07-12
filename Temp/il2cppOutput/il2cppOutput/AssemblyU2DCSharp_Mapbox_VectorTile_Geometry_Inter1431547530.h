#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter1181879188.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Geometry_Inter2757989145.h"

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct PolyNode_t1431547530;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct List_1_t1851480849;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct List_1_t800668662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct  PolyNode_t1431547530  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Parent
	PolyNode_t1431547530 * ___m_Parent_0;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_polygon
	List_1_t1851480849 * ___m_polygon_1;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Index
	int32_t ___m_Index_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/JoinType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_jointype
	int32_t ___m_jointype_3;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EndType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_endtype
	int32_t ___m_endtype_4;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Childs
	List_1_t800668662 * ___m_Childs_5;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Parent_0() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_Parent_0)); }
	inline PolyNode_t1431547530 * get_m_Parent_0() const { return ___m_Parent_0; }
	inline PolyNode_t1431547530 ** get_address_of_m_Parent_0() { return &___m_Parent_0; }
	inline void set_m_Parent_0(PolyNode_t1431547530 * value)
	{
		___m_Parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Parent_0, value);
	}

	inline static int32_t get_offset_of_m_polygon_1() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_polygon_1)); }
	inline List_1_t1851480849 * get_m_polygon_1() const { return ___m_polygon_1; }
	inline List_1_t1851480849 ** get_address_of_m_polygon_1() { return &___m_polygon_1; }
	inline void set_m_polygon_1(List_1_t1851480849 * value)
	{
		___m_polygon_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_polygon_1, value);
	}

	inline static int32_t get_offset_of_m_Index_2() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_Index_2)); }
	inline int32_t get_m_Index_2() const { return ___m_Index_2; }
	inline int32_t* get_address_of_m_Index_2() { return &___m_Index_2; }
	inline void set_m_Index_2(int32_t value)
	{
		___m_Index_2 = value;
	}

	inline static int32_t get_offset_of_m_jointype_3() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_jointype_3)); }
	inline int32_t get_m_jointype_3() const { return ___m_jointype_3; }
	inline int32_t* get_address_of_m_jointype_3() { return &___m_jointype_3; }
	inline void set_m_jointype_3(int32_t value)
	{
		___m_jointype_3 = value;
	}

	inline static int32_t get_offset_of_m_endtype_4() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_endtype_4)); }
	inline int32_t get_m_endtype_4() const { return ___m_endtype_4; }
	inline int32_t* get_address_of_m_endtype_4() { return &___m_endtype_4; }
	inline void set_m_endtype_4(int32_t value)
	{
		___m_endtype_4 = value;
	}

	inline static int32_t get_offset_of_m_Childs_5() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___m_Childs_5)); }
	inline List_1_t800668662 * get_m_Childs_5() const { return ___m_Childs_5; }
	inline List_1_t800668662 ** get_address_of_m_Childs_5() { return &___m_Childs_5; }
	inline void set_m_Childs_5(List_1_t800668662 * value)
	{
		___m_Childs_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Childs_5, value);
	}

	inline static int32_t get_offset_of_U3CIsOpenU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PolyNode_t1431547530, ___U3CIsOpenU3Ek__BackingField_6)); }
	inline bool get_U3CIsOpenU3Ek__BackingField_6() const { return ___U3CIsOpenU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsOpenU3Ek__BackingField_6() { return &___U3CIsOpenU3Ek__BackingField_6; }
	inline void set_U3CIsOpenU3Ek__BackingField_6(bool value)
	{
		___U3CIsOpenU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
