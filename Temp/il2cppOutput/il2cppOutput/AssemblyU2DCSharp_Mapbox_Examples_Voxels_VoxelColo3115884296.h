#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Voxels.VoxelColorMapper
struct  VoxelColorMapper_t3115884296  : public Il2CppObject
{
public:
	// UnityEngine.Color Mapbox.Examples.Voxels.VoxelColorMapper::Color
	Color_t2020392075  ___Color_0;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelColorMapper::Voxel
	GameObject_t1756533147 * ___Voxel_1;

public:
	inline static int32_t get_offset_of_Color_0() { return static_cast<int32_t>(offsetof(VoxelColorMapper_t3115884296, ___Color_0)); }
	inline Color_t2020392075  get_Color_0() const { return ___Color_0; }
	inline Color_t2020392075 * get_address_of_Color_0() { return &___Color_0; }
	inline void set_Color_0(Color_t2020392075  value)
	{
		___Color_0 = value;
	}

	inline static int32_t get_offset_of_Voxel_1() { return static_cast<int32_t>(offsetof(VoxelColorMapper_t3115884296, ___Voxel_1)); }
	inline GameObject_t1756533147 * get_Voxel_1() const { return ___Voxel_1; }
	inline GameObject_t1756533147 ** get_address_of_Voxel_1() { return &___Voxel_1; }
	inline void set_Voxel_1(GameObject_t1756533147 * value)
	{
		___Voxel_1 = value;
		Il2CppCodeGenWriteBarrier(&___Voxel_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
