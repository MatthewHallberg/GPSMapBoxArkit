#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Examples.Voxels.VoxelColorMapper[]
struct VoxelColorMapperU5BU5D_t3814923225;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Voxels.VoxelFetcher
struct  VoxelFetcher_t1248037101  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Examples.Voxels.VoxelColorMapper[] Mapbox.Examples.Voxels.VoxelFetcher::_voxels
	VoxelColorMapperU5BU5D_t3814923225* ____voxels_2;

public:
	inline static int32_t get_offset_of__voxels_2() { return static_cast<int32_t>(offsetof(VoxelFetcher_t1248037101, ____voxels_2)); }
	inline VoxelColorMapperU5BU5D_t3814923225* get__voxels_2() const { return ____voxels_2; }
	inline VoxelColorMapperU5BU5D_t3814923225** get_address_of__voxels_2() { return &____voxels_2; }
	inline void set__voxels_2(VoxelColorMapperU5BU5D_t3814923225* value)
	{
		____voxels_2 = value;
		Il2CppCodeGenWriteBarrier(&____voxels_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
