#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct  ExplosionFireAndDebris_t1174895067  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] UnityStandardAssets.Effects.ExplosionFireAndDebris::debrisPrefabs
	TransformU5BU5D_t3764228911* ___debrisPrefabs_2;
	// UnityEngine.Transform UnityStandardAssets.Effects.ExplosionFireAndDebris::firePrefab
	Transform_t3275118058 * ___firePrefab_3;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numDebrisPieces
	int32_t ___numDebrisPieces_4;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numFires
	int32_t ___numFires_5;

public:
	inline static int32_t get_offset_of_debrisPrefabs_2() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1174895067, ___debrisPrefabs_2)); }
	inline TransformU5BU5D_t3764228911* get_debrisPrefabs_2() const { return ___debrisPrefabs_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_debrisPrefabs_2() { return &___debrisPrefabs_2; }
	inline void set_debrisPrefabs_2(TransformU5BU5D_t3764228911* value)
	{
		___debrisPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___debrisPrefabs_2, value);
	}

	inline static int32_t get_offset_of_firePrefab_3() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1174895067, ___firePrefab_3)); }
	inline Transform_t3275118058 * get_firePrefab_3() const { return ___firePrefab_3; }
	inline Transform_t3275118058 ** get_address_of_firePrefab_3() { return &___firePrefab_3; }
	inline void set_firePrefab_3(Transform_t3275118058 * value)
	{
		___firePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___firePrefab_3, value);
	}

	inline static int32_t get_offset_of_numDebrisPieces_4() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1174895067, ___numDebrisPieces_4)); }
	inline int32_t get_numDebrisPieces_4() const { return ___numDebrisPieces_4; }
	inline int32_t* get_address_of_numDebrisPieces_4() { return &___numDebrisPieces_4; }
	inline void set_numDebrisPieces_4(int32_t value)
	{
		___numDebrisPieces_4 = value;
	}

	inline static int32_t get_offset_of_numFires_5() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1174895067, ___numFires_5)); }
	inline int32_t get_numFires_5() const { return ___numFires_5; }
	inline int32_t* get_address_of_numFires_5() { return &___numFires_5; }
	inline void set_numFires_5(int32_t value)
	{
		___numFires_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
