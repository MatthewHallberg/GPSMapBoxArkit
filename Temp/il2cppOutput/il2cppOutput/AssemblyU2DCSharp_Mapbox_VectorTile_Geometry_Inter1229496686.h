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

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>>
struct List_1_t1220601981;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct List_1_t1851480849;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/DoublePoint>
struct List_1_t4267344339;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct PolyNode_t1431547530;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset
struct  ClipperOffset_t1229496686  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_destPolys
	List_1_t1220601981 * ___m_destPolys_0;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_srcPoly
	List_1_t1851480849 * ___m_srcPoly_1;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_destPoly
	List_1_t1851480849 * ___m_destPoly_2;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/DoublePoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_normals
	List_1_t4267344339 * ___m_normals_3;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_delta
	double ___m_delta_4;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_sinA
	double ___m_sinA_5;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_sin
	double ___m_sin_6;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_cos
	double ___m_cos_7;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_miterLim
	double ___m_miterLim_8;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_StepsPerRad
	double ___m_StepsPerRad_9;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_lowest
	IntPoint_t2482359717  ___m_lowest_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::m_polyNodes
	PolyNode_t1431547530 * ___m_polyNodes_11;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::<ArcTolerance>k__BackingField
	double ___U3CArcToleranceU3Ek__BackingField_12;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipperOffset::<MiterLimit>k__BackingField
	double ___U3CMiterLimitU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_destPolys_0() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_destPolys_0)); }
	inline List_1_t1220601981 * get_m_destPolys_0() const { return ___m_destPolys_0; }
	inline List_1_t1220601981 ** get_address_of_m_destPolys_0() { return &___m_destPolys_0; }
	inline void set_m_destPolys_0(List_1_t1220601981 * value)
	{
		___m_destPolys_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_destPolys_0, value);
	}

	inline static int32_t get_offset_of_m_srcPoly_1() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_srcPoly_1)); }
	inline List_1_t1851480849 * get_m_srcPoly_1() const { return ___m_srcPoly_1; }
	inline List_1_t1851480849 ** get_address_of_m_srcPoly_1() { return &___m_srcPoly_1; }
	inline void set_m_srcPoly_1(List_1_t1851480849 * value)
	{
		___m_srcPoly_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_srcPoly_1, value);
	}

	inline static int32_t get_offset_of_m_destPoly_2() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_destPoly_2)); }
	inline List_1_t1851480849 * get_m_destPoly_2() const { return ___m_destPoly_2; }
	inline List_1_t1851480849 ** get_address_of_m_destPoly_2() { return &___m_destPoly_2; }
	inline void set_m_destPoly_2(List_1_t1851480849 * value)
	{
		___m_destPoly_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_destPoly_2, value);
	}

	inline static int32_t get_offset_of_m_normals_3() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_normals_3)); }
	inline List_1_t4267344339 * get_m_normals_3() const { return ___m_normals_3; }
	inline List_1_t4267344339 ** get_address_of_m_normals_3() { return &___m_normals_3; }
	inline void set_m_normals_3(List_1_t4267344339 * value)
	{
		___m_normals_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_normals_3, value);
	}

	inline static int32_t get_offset_of_m_delta_4() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_delta_4)); }
	inline double get_m_delta_4() const { return ___m_delta_4; }
	inline double* get_address_of_m_delta_4() { return &___m_delta_4; }
	inline void set_m_delta_4(double value)
	{
		___m_delta_4 = value;
	}

	inline static int32_t get_offset_of_m_sinA_5() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_sinA_5)); }
	inline double get_m_sinA_5() const { return ___m_sinA_5; }
	inline double* get_address_of_m_sinA_5() { return &___m_sinA_5; }
	inline void set_m_sinA_5(double value)
	{
		___m_sinA_5 = value;
	}

	inline static int32_t get_offset_of_m_sin_6() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_sin_6)); }
	inline double get_m_sin_6() const { return ___m_sin_6; }
	inline double* get_address_of_m_sin_6() { return &___m_sin_6; }
	inline void set_m_sin_6(double value)
	{
		___m_sin_6 = value;
	}

	inline static int32_t get_offset_of_m_cos_7() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_cos_7)); }
	inline double get_m_cos_7() const { return ___m_cos_7; }
	inline double* get_address_of_m_cos_7() { return &___m_cos_7; }
	inline void set_m_cos_7(double value)
	{
		___m_cos_7 = value;
	}

	inline static int32_t get_offset_of_m_miterLim_8() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_miterLim_8)); }
	inline double get_m_miterLim_8() const { return ___m_miterLim_8; }
	inline double* get_address_of_m_miterLim_8() { return &___m_miterLim_8; }
	inline void set_m_miterLim_8(double value)
	{
		___m_miterLim_8 = value;
	}

	inline static int32_t get_offset_of_m_StepsPerRad_9() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_StepsPerRad_9)); }
	inline double get_m_StepsPerRad_9() const { return ___m_StepsPerRad_9; }
	inline double* get_address_of_m_StepsPerRad_9() { return &___m_StepsPerRad_9; }
	inline void set_m_StepsPerRad_9(double value)
	{
		___m_StepsPerRad_9 = value;
	}

	inline static int32_t get_offset_of_m_lowest_10() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_lowest_10)); }
	inline IntPoint_t2482359717  get_m_lowest_10() const { return ___m_lowest_10; }
	inline IntPoint_t2482359717 * get_address_of_m_lowest_10() { return &___m_lowest_10; }
	inline void set_m_lowest_10(IntPoint_t2482359717  value)
	{
		___m_lowest_10 = value;
	}

	inline static int32_t get_offset_of_m_polyNodes_11() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___m_polyNodes_11)); }
	inline PolyNode_t1431547530 * get_m_polyNodes_11() const { return ___m_polyNodes_11; }
	inline PolyNode_t1431547530 ** get_address_of_m_polyNodes_11() { return &___m_polyNodes_11; }
	inline void set_m_polyNodes_11(PolyNode_t1431547530 * value)
	{
		___m_polyNodes_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_polyNodes_11, value);
	}

	inline static int32_t get_offset_of_U3CArcToleranceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___U3CArcToleranceU3Ek__BackingField_12)); }
	inline double get_U3CArcToleranceU3Ek__BackingField_12() const { return ___U3CArcToleranceU3Ek__BackingField_12; }
	inline double* get_address_of_U3CArcToleranceU3Ek__BackingField_12() { return &___U3CArcToleranceU3Ek__BackingField_12; }
	inline void set_U3CArcToleranceU3Ek__BackingField_12(double value)
	{
		___U3CArcToleranceU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMiterLimitU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ClipperOffset_t1229496686, ___U3CMiterLimitU3Ek__BackingField_13)); }
	inline double get_U3CMiterLimitU3Ek__BackingField_13() const { return ___U3CMiterLimitU3Ek__BackingField_13; }
	inline double* get_address_of_U3CMiterLimitU3Ek__BackingField_13() { return &___U3CMiterLimitU3Ek__BackingField_13; }
	inline void set_U3CMiterLimitU3Ek__BackingField_13(double value)
	{
		___U3CMiterLimitU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
