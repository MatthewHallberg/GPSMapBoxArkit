#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PokemonMapBehavior
struct  PokemonMapBehavior_t655041251  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 PokemonMapBehavior::mapScale
	Vector3_t2243707580  ___mapScale_2;
	// UnityEngine.Transform PokemonMapBehavior::player
	Transform_t3275118058 * ___player_3;
	// UnityEngine.Transform PokemonMapBehavior::logo
	Transform_t3275118058 * ___logo_4;

public:
	inline static int32_t get_offset_of_mapScale_2() { return static_cast<int32_t>(offsetof(PokemonMapBehavior_t655041251, ___mapScale_2)); }
	inline Vector3_t2243707580  get_mapScale_2() const { return ___mapScale_2; }
	inline Vector3_t2243707580 * get_address_of_mapScale_2() { return &___mapScale_2; }
	inline void set_mapScale_2(Vector3_t2243707580  value)
	{
		___mapScale_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(PokemonMapBehavior_t655041251, ___player_3)); }
	inline Transform_t3275118058 * get_player_3() const { return ___player_3; }
	inline Transform_t3275118058 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t3275118058 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_logo_4() { return static_cast<int32_t>(offsetof(PokemonMapBehavior_t655041251, ___logo_4)); }
	inline Transform_t3275118058 * get_logo_4() const { return ___logo_4; }
	inline Transform_t3275118058 ** get_address_of_logo_4() { return &___logo_4; }
	inline void set_logo_4(Transform_t3275118058 * value)
	{
		___logo_4 = value;
		Il2CppCodeGenWriteBarrier(&___logo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
