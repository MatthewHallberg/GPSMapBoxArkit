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
// System.Collections.Generic.List`1<TriangleNet.Meshing.Algorithm.SweepLine/SplayNode>
struct List_1_t943825107;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.SweepLine
struct  SweepLine_t4107186588  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Meshing.Algorithm.SweepLine::predicates
	Il2CppObject * ___predicates_2;
	// TriangleNet.Mesh TriangleNet.Meshing.Algorithm.SweepLine::mesh
	Mesh_t1414352559 * ___mesh_3;
	// System.Double TriangleNet.Meshing.Algorithm.SweepLine::xminextreme
	double ___xminextreme_4;
	// System.Collections.Generic.List`1<TriangleNet.Meshing.Algorithm.SweepLine/SplayNode> TriangleNet.Meshing.Algorithm.SweepLine::splaynodes
	List_1_t943825107 * ___splaynodes_5;

public:
	inline static int32_t get_offset_of_predicates_2() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588, ___predicates_2)); }
	inline Il2CppObject * get_predicates_2() const { return ___predicates_2; }
	inline Il2CppObject ** get_address_of_predicates_2() { return &___predicates_2; }
	inline void set_predicates_2(Il2CppObject * value)
	{
		___predicates_2 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_2, value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588, ___mesh_3)); }
	inline Mesh_t1414352559 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1414352559 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1414352559 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}

	inline static int32_t get_offset_of_xminextreme_4() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588, ___xminextreme_4)); }
	inline double get_xminextreme_4() const { return ___xminextreme_4; }
	inline double* get_address_of_xminextreme_4() { return &___xminextreme_4; }
	inline void set_xminextreme_4(double value)
	{
		___xminextreme_4 = value;
	}

	inline static int32_t get_offset_of_splaynodes_5() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588, ___splaynodes_5)); }
	inline List_1_t943825107 * get_splaynodes_5() const { return ___splaynodes_5; }
	inline List_1_t943825107 ** get_address_of_splaynodes_5() { return &___splaynodes_5; }
	inline void set_splaynodes_5(List_1_t943825107 * value)
	{
		___splaynodes_5 = value;
		Il2CppCodeGenWriteBarrier(&___splaynodes_5, value);
	}
};

struct SweepLine_t4107186588_StaticFields
{
public:
	// System.Int32 TriangleNet.Meshing.Algorithm.SweepLine::randomseed
	int32_t ___randomseed_0;
	// System.Int32 TriangleNet.Meshing.Algorithm.SweepLine::SAMPLERATE
	int32_t ___SAMPLERATE_1;

public:
	inline static int32_t get_offset_of_randomseed_0() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588_StaticFields, ___randomseed_0)); }
	inline int32_t get_randomseed_0() const { return ___randomseed_0; }
	inline int32_t* get_address_of_randomseed_0() { return &___randomseed_0; }
	inline void set_randomseed_0(int32_t value)
	{
		___randomseed_0 = value;
	}

	inline static int32_t get_offset_of_SAMPLERATE_1() { return static_cast<int32_t>(offsetof(SweepLine_t4107186588_StaticFields, ___SAMPLERATE_1)); }
	inline int32_t get_SAMPLERATE_1() const { return ___SAMPLERATE_1; }
	inline int32_t* get_address_of_SAMPLERATE_1() { return &___SAMPLERATE_1; }
	inline void set_SAMPLERATE_1(int32_t value)
	{
		___SAMPLERATE_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
