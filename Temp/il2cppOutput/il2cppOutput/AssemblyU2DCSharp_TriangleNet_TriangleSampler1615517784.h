#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Random
struct Random_t1044426839;
// TriangleNet.Mesh
struct Mesh_t1414352559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.TriangleSampler
struct  TriangleSampler_t1615517784  : public Il2CppObject
{
public:
	// System.Random TriangleNet.TriangleSampler::random
	Random_t1044426839 * ___random_2;
	// TriangleNet.Mesh TriangleNet.TriangleSampler::mesh
	Mesh_t1414352559 * ___mesh_3;
	// System.Int32 TriangleNet.TriangleSampler::samples
	int32_t ___samples_4;
	// System.Int32 TriangleNet.TriangleSampler::triangleCount
	int32_t ___triangleCount_5;

public:
	inline static int32_t get_offset_of_random_2() { return static_cast<int32_t>(offsetof(TriangleSampler_t1615517784, ___random_2)); }
	inline Random_t1044426839 * get_random_2() const { return ___random_2; }
	inline Random_t1044426839 ** get_address_of_random_2() { return &___random_2; }
	inline void set_random_2(Random_t1044426839 * value)
	{
		___random_2 = value;
		Il2CppCodeGenWriteBarrier(&___random_2, value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(TriangleSampler_t1615517784, ___mesh_3)); }
	inline Mesh_t1414352559 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1414352559 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1414352559 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}

	inline static int32_t get_offset_of_samples_4() { return static_cast<int32_t>(offsetof(TriangleSampler_t1615517784, ___samples_4)); }
	inline int32_t get_samples_4() const { return ___samples_4; }
	inline int32_t* get_address_of_samples_4() { return &___samples_4; }
	inline void set_samples_4(int32_t value)
	{
		___samples_4 = value;
	}

	inline static int32_t get_offset_of_triangleCount_5() { return static_cast<int32_t>(offsetof(TriangleSampler_t1615517784, ___triangleCount_5)); }
	inline int32_t get_triangleCount_5() const { return ___triangleCount_5; }
	inline int32_t* get_address_of_triangleCount_5() { return &___triangleCount_5; }
	inline void set_triangleCount_5(int32_t value)
	{
		___triangleCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
