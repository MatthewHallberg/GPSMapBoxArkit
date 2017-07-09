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
// TriangleNet.TriangleLocator
struct TriangleLocator_t236619704;
// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle>
struct List_1_t3334734750;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_t846826848;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.ConstraintMesher
struct  ConstraintMesher_t647801575  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Meshing.ConstraintMesher::predicates
	Il2CppObject * ___predicates_0;
	// TriangleNet.Mesh TriangleNet.Meshing.ConstraintMesher::mesh
	Mesh_t1414352559 * ___mesh_1;
	// TriangleNet.Behavior TriangleNet.Meshing.ConstraintMesher::behavior
	Behavior_t3353801546 * ___behavior_2;
	// TriangleNet.TriangleLocator TriangleNet.Meshing.ConstraintMesher::locator
	TriangleLocator_t236619704 * ___locator_3;
	// System.Collections.Generic.List`1<TriangleNet.Topology.Triangle> TriangleNet.Meshing.ConstraintMesher::viri
	List_1_t3334734750 * ___viri_4;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Meshing.ConstraintMesher::logger
	Il2CppObject* ___logger_5;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___predicates_0)); }
	inline Il2CppObject * get_predicates_0() const { return ___predicates_0; }
	inline Il2CppObject ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(Il2CppObject * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}

	inline static int32_t get_offset_of_mesh_1() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___mesh_1)); }
	inline Mesh_t1414352559 * get_mesh_1() const { return ___mesh_1; }
	inline Mesh_t1414352559 ** get_address_of_mesh_1() { return &___mesh_1; }
	inline void set_mesh_1(Mesh_t1414352559 * value)
	{
		___mesh_1 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_1, value);
	}

	inline static int32_t get_offset_of_behavior_2() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___behavior_2)); }
	inline Behavior_t3353801546 * get_behavior_2() const { return ___behavior_2; }
	inline Behavior_t3353801546 ** get_address_of_behavior_2() { return &___behavior_2; }
	inline void set_behavior_2(Behavior_t3353801546 * value)
	{
		___behavior_2 = value;
		Il2CppCodeGenWriteBarrier(&___behavior_2, value);
	}

	inline static int32_t get_offset_of_locator_3() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___locator_3)); }
	inline TriangleLocator_t236619704 * get_locator_3() const { return ___locator_3; }
	inline TriangleLocator_t236619704 ** get_address_of_locator_3() { return &___locator_3; }
	inline void set_locator_3(TriangleLocator_t236619704 * value)
	{
		___locator_3 = value;
		Il2CppCodeGenWriteBarrier(&___locator_3, value);
	}

	inline static int32_t get_offset_of_viri_4() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___viri_4)); }
	inline List_1_t3334734750 * get_viri_4() const { return ___viri_4; }
	inline List_1_t3334734750 ** get_address_of_viri_4() { return &___viri_4; }
	inline void set_viri_4(List_1_t3334734750 * value)
	{
		___viri_4 = value;
		Il2CppCodeGenWriteBarrier(&___viri_4, value);
	}

	inline static int32_t get_offset_of_logger_5() { return static_cast<int32_t>(offsetof(ConstraintMesher_t647801575, ___logger_5)); }
	inline Il2CppObject* get_logger_5() const { return ___logger_5; }
	inline Il2CppObject** get_address_of_logger_5() { return &___logger_5; }
	inline void set_logger_5(Il2CppObject* value)
	{
		___logger_5 = value;
		Il2CppCodeGenWriteBarrier(&___logger_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
