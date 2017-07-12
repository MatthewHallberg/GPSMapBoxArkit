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
// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>
struct Queue_1_t2383214309;
// TriangleNet.Meshing.Data.BadTriQueue
struct BadTriQueue_t1888802243;
// TriangleNet.Mesh
struct Mesh_t1414352559;
// TriangleNet.Behavior
struct Behavior_t3353801546;
// TriangleNet.NewLocation
struct NewLocation_t2036413805;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_t846826848;
// TriangleNet.Topology.Triangle
struct Triangle_t3965613618;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.QualityMesher
struct  QualityMesher_t265812823  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Meshing.QualityMesher::predicates
	Il2CppObject * ___predicates_0;
	// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg> TriangleNet.Meshing.QualityMesher::badsubsegs
	Queue_1_t2383214309 * ___badsubsegs_1;
	// TriangleNet.Meshing.Data.BadTriQueue TriangleNet.Meshing.QualityMesher::queue
	BadTriQueue_t1888802243 * ___queue_2;
	// TriangleNet.Mesh TriangleNet.Meshing.QualityMesher::mesh
	Mesh_t1414352559 * ___mesh_3;
	// TriangleNet.Behavior TriangleNet.Meshing.QualityMesher::behavior
	Behavior_t3353801546 * ___behavior_4;
	// TriangleNet.NewLocation TriangleNet.Meshing.QualityMesher::newLocation
	NewLocation_t2036413805 * ___newLocation_5;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Meshing.QualityMesher::logger
	Il2CppObject* ___logger_6;
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.QualityMesher::newvertex_tri
	Triangle_t3965613618 * ___newvertex_tri_7;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___predicates_0)); }
	inline Il2CppObject * get_predicates_0() const { return ___predicates_0; }
	inline Il2CppObject ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(Il2CppObject * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}

	inline static int32_t get_offset_of_badsubsegs_1() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___badsubsegs_1)); }
	inline Queue_1_t2383214309 * get_badsubsegs_1() const { return ___badsubsegs_1; }
	inline Queue_1_t2383214309 ** get_address_of_badsubsegs_1() { return &___badsubsegs_1; }
	inline void set_badsubsegs_1(Queue_1_t2383214309 * value)
	{
		___badsubsegs_1 = value;
		Il2CppCodeGenWriteBarrier(&___badsubsegs_1, value);
	}

	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___queue_2)); }
	inline BadTriQueue_t1888802243 * get_queue_2() const { return ___queue_2; }
	inline BadTriQueue_t1888802243 ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(BadTriQueue_t1888802243 * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier(&___queue_2, value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___mesh_3)); }
	inline Mesh_t1414352559 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1414352559 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1414352559 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}

	inline static int32_t get_offset_of_behavior_4() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___behavior_4)); }
	inline Behavior_t3353801546 * get_behavior_4() const { return ___behavior_4; }
	inline Behavior_t3353801546 ** get_address_of_behavior_4() { return &___behavior_4; }
	inline void set_behavior_4(Behavior_t3353801546 * value)
	{
		___behavior_4 = value;
		Il2CppCodeGenWriteBarrier(&___behavior_4, value);
	}

	inline static int32_t get_offset_of_newLocation_5() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___newLocation_5)); }
	inline NewLocation_t2036413805 * get_newLocation_5() const { return ___newLocation_5; }
	inline NewLocation_t2036413805 ** get_address_of_newLocation_5() { return &___newLocation_5; }
	inline void set_newLocation_5(NewLocation_t2036413805 * value)
	{
		___newLocation_5 = value;
		Il2CppCodeGenWriteBarrier(&___newLocation_5, value);
	}

	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___logger_6)); }
	inline Il2CppObject* get_logger_6() const { return ___logger_6; }
	inline Il2CppObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(Il2CppObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier(&___logger_6, value);
	}

	inline static int32_t get_offset_of_newvertex_tri_7() { return static_cast<int32_t>(offsetof(QualityMesher_t265812823, ___newvertex_tri_7)); }
	inline Triangle_t3965613618 * get_newvertex_tri_7() const { return ___newvertex_tri_7; }
	inline Triangle_t3965613618 ** get_address_of_newvertex_tri_7() { return &___newvertex_tri_7; }
	inline void set_newvertex_tri_7(Triangle_t3965613618 * value)
	{
		___newvertex_tri_7 = value;
		Il2CppCodeGenWriteBarrier(&___newvertex_tri_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
