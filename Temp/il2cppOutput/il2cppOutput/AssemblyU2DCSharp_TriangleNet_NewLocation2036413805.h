#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.IPredicates
struct IPredicates_t3101063573;
// TriangleNet.Mesh
struct Mesh_t1414352559;
// TriangleNet.Behavior
struct Behavior_t3353801546;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Double[][]
struct DoubleU5BU5DU5BU5D_t2187755765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.NewLocation
struct  NewLocation_t2036413805  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.NewLocation::predicates
	Il2CppObject * ___predicates_1;
	// TriangleNet.Mesh TriangleNet.NewLocation::mesh
	Mesh_t1414352559 * ___mesh_2;
	// TriangleNet.Behavior TriangleNet.NewLocation::behavior
	Behavior_t3353801546 * ___behavior_3;
	// System.Double[] TriangleNet.NewLocation::petalx
	DoubleU5BU5D_t1889952540* ___petalx_4;
	// System.Double[] TriangleNet.NewLocation::petaly
	DoubleU5BU5D_t1889952540* ___petaly_5;
	// System.Double[] TriangleNet.NewLocation::petalr
	DoubleU5BU5D_t1889952540* ___petalr_6;
	// System.Double[] TriangleNet.NewLocation::wedges
	DoubleU5BU5D_t1889952540* ___wedges_7;
	// System.Double[] TriangleNet.NewLocation::initialConvexPoly
	DoubleU5BU5D_t1889952540* ___initialConvexPoly_8;
	// System.Double[] TriangleNet.NewLocation::points_p
	DoubleU5BU5D_t1889952540* ___points_p_9;
	// System.Double[] TriangleNet.NewLocation::points_q
	DoubleU5BU5D_t1889952540* ___points_q_10;
	// System.Double[] TriangleNet.NewLocation::points_r
	DoubleU5BU5D_t1889952540* ___points_r_11;
	// System.Double[] TriangleNet.NewLocation::poly1
	DoubleU5BU5D_t1889952540* ___poly1_12;
	// System.Double[] TriangleNet.NewLocation::poly2
	DoubleU5BU5D_t1889952540* ___poly2_13;
	// System.Double[][] TriangleNet.NewLocation::polys
	DoubleU5BU5DU5BU5D_t2187755765* ___polys_14;

public:
	inline static int32_t get_offset_of_predicates_1() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___predicates_1)); }
	inline Il2CppObject * get_predicates_1() const { return ___predicates_1; }
	inline Il2CppObject ** get_address_of_predicates_1() { return &___predicates_1; }
	inline void set_predicates_1(Il2CppObject * value)
	{
		___predicates_1 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_1, value);
	}

	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___mesh_2)); }
	inline Mesh_t1414352559 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t1414352559 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t1414352559 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_2, value);
	}

	inline static int32_t get_offset_of_behavior_3() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___behavior_3)); }
	inline Behavior_t3353801546 * get_behavior_3() const { return ___behavior_3; }
	inline Behavior_t3353801546 ** get_address_of_behavior_3() { return &___behavior_3; }
	inline void set_behavior_3(Behavior_t3353801546 * value)
	{
		___behavior_3 = value;
		Il2CppCodeGenWriteBarrier(&___behavior_3, value);
	}

	inline static int32_t get_offset_of_petalx_4() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___petalx_4)); }
	inline DoubleU5BU5D_t1889952540* get_petalx_4() const { return ___petalx_4; }
	inline DoubleU5BU5D_t1889952540** get_address_of_petalx_4() { return &___petalx_4; }
	inline void set_petalx_4(DoubleU5BU5D_t1889952540* value)
	{
		___petalx_4 = value;
		Il2CppCodeGenWriteBarrier(&___petalx_4, value);
	}

	inline static int32_t get_offset_of_petaly_5() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___petaly_5)); }
	inline DoubleU5BU5D_t1889952540* get_petaly_5() const { return ___petaly_5; }
	inline DoubleU5BU5D_t1889952540** get_address_of_petaly_5() { return &___petaly_5; }
	inline void set_petaly_5(DoubleU5BU5D_t1889952540* value)
	{
		___petaly_5 = value;
		Il2CppCodeGenWriteBarrier(&___petaly_5, value);
	}

	inline static int32_t get_offset_of_petalr_6() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___petalr_6)); }
	inline DoubleU5BU5D_t1889952540* get_petalr_6() const { return ___petalr_6; }
	inline DoubleU5BU5D_t1889952540** get_address_of_petalr_6() { return &___petalr_6; }
	inline void set_petalr_6(DoubleU5BU5D_t1889952540* value)
	{
		___petalr_6 = value;
		Il2CppCodeGenWriteBarrier(&___petalr_6, value);
	}

	inline static int32_t get_offset_of_wedges_7() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___wedges_7)); }
	inline DoubleU5BU5D_t1889952540* get_wedges_7() const { return ___wedges_7; }
	inline DoubleU5BU5D_t1889952540** get_address_of_wedges_7() { return &___wedges_7; }
	inline void set_wedges_7(DoubleU5BU5D_t1889952540* value)
	{
		___wedges_7 = value;
		Il2CppCodeGenWriteBarrier(&___wedges_7, value);
	}

	inline static int32_t get_offset_of_initialConvexPoly_8() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___initialConvexPoly_8)); }
	inline DoubleU5BU5D_t1889952540* get_initialConvexPoly_8() const { return ___initialConvexPoly_8; }
	inline DoubleU5BU5D_t1889952540** get_address_of_initialConvexPoly_8() { return &___initialConvexPoly_8; }
	inline void set_initialConvexPoly_8(DoubleU5BU5D_t1889952540* value)
	{
		___initialConvexPoly_8 = value;
		Il2CppCodeGenWriteBarrier(&___initialConvexPoly_8, value);
	}

	inline static int32_t get_offset_of_points_p_9() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___points_p_9)); }
	inline DoubleU5BU5D_t1889952540* get_points_p_9() const { return ___points_p_9; }
	inline DoubleU5BU5D_t1889952540** get_address_of_points_p_9() { return &___points_p_9; }
	inline void set_points_p_9(DoubleU5BU5D_t1889952540* value)
	{
		___points_p_9 = value;
		Il2CppCodeGenWriteBarrier(&___points_p_9, value);
	}

	inline static int32_t get_offset_of_points_q_10() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___points_q_10)); }
	inline DoubleU5BU5D_t1889952540* get_points_q_10() const { return ___points_q_10; }
	inline DoubleU5BU5D_t1889952540** get_address_of_points_q_10() { return &___points_q_10; }
	inline void set_points_q_10(DoubleU5BU5D_t1889952540* value)
	{
		___points_q_10 = value;
		Il2CppCodeGenWriteBarrier(&___points_q_10, value);
	}

	inline static int32_t get_offset_of_points_r_11() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___points_r_11)); }
	inline DoubleU5BU5D_t1889952540* get_points_r_11() const { return ___points_r_11; }
	inline DoubleU5BU5D_t1889952540** get_address_of_points_r_11() { return &___points_r_11; }
	inline void set_points_r_11(DoubleU5BU5D_t1889952540* value)
	{
		___points_r_11 = value;
		Il2CppCodeGenWriteBarrier(&___points_r_11, value);
	}

	inline static int32_t get_offset_of_poly1_12() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___poly1_12)); }
	inline DoubleU5BU5D_t1889952540* get_poly1_12() const { return ___poly1_12; }
	inline DoubleU5BU5D_t1889952540** get_address_of_poly1_12() { return &___poly1_12; }
	inline void set_poly1_12(DoubleU5BU5D_t1889952540* value)
	{
		___poly1_12 = value;
		Il2CppCodeGenWriteBarrier(&___poly1_12, value);
	}

	inline static int32_t get_offset_of_poly2_13() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___poly2_13)); }
	inline DoubleU5BU5D_t1889952540* get_poly2_13() const { return ___poly2_13; }
	inline DoubleU5BU5D_t1889952540** get_address_of_poly2_13() { return &___poly2_13; }
	inline void set_poly2_13(DoubleU5BU5D_t1889952540* value)
	{
		___poly2_13 = value;
		Il2CppCodeGenWriteBarrier(&___poly2_13, value);
	}

	inline static int32_t get_offset_of_polys_14() { return static_cast<int32_t>(offsetof(NewLocation_t2036413805, ___polys_14)); }
	inline DoubleU5BU5DU5BU5D_t2187755765* get_polys_14() const { return ___polys_14; }
	inline DoubleU5BU5DU5BU5D_t2187755765** get_address_of_polys_14() { return &___polys_14; }
	inline void set_polys_14(DoubleU5BU5DU5BU5D_t2187755765* value)
	{
		___polys_14 = value;
		Il2CppCodeGenWriteBarrier(&___polys_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
