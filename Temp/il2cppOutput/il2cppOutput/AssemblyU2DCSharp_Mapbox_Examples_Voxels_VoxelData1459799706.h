#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.Voxels.VoxelData
struct  VoxelData_t1459799706  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Mapbox.Examples.Voxels.VoxelData::Position
	Vector3_t2243707580  ___Position_0;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelData::Prefab
	GameObject_t1756533147 * ___Prefab_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(VoxelData_t1459799706, ___Position_0)); }
	inline Vector3_t2243707580  get_Position_0() const { return ___Position_0; }
	inline Vector3_t2243707580 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t2243707580  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Prefab_1() { return static_cast<int32_t>(offsetof(VoxelData_t1459799706, ___Prefab_1)); }
	inline GameObject_t1756533147 * get_Prefab_1() const { return ___Prefab_1; }
	inline GameObject_t1756533147 ** get_address_of_Prefab_1() { return &___Prefab_1; }
	inline void set_Prefab_1(GameObject_t1756533147 * value)
	{
		___Prefab_1 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
