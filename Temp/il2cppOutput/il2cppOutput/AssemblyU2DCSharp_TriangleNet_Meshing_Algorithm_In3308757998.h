#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Mesh
struct Mesh_t1414352559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.Incremental
struct  Incremental_t3308757998  : public Il2CppObject
{
public:
	// TriangleNet.Mesh TriangleNet.Meshing.Algorithm.Incremental::mesh
	Mesh_t1414352559 * ___mesh_0;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(Incremental_t3308757998, ___mesh_0)); }
	inline Mesh_t1414352559 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t1414352559 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t1414352559 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
