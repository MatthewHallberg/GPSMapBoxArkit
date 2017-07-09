#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_t1382569190;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.LocationProvider.PokemonFactory
struct  PokemonFactory_t711136535  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Map.AbstractMap Mapbox.Examples.LocationProvider.PokemonFactory::_map
	AbstractMap_t1382569190 * ____map_2;
	// UnityEngine.Transform Mapbox.Examples.LocationProvider.PokemonFactory::player
	Transform_t3275118058 * ___player_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mapbox.Examples.LocationProvider.PokemonFactory::pokemonMapObjects
	List_1_t1125654279 * ___pokemonMapObjects_4;

public:
	inline static int32_t get_offset_of__map_2() { return static_cast<int32_t>(offsetof(PokemonFactory_t711136535, ____map_2)); }
	inline AbstractMap_t1382569190 * get__map_2() const { return ____map_2; }
	inline AbstractMap_t1382569190 ** get_address_of__map_2() { return &____map_2; }
	inline void set__map_2(AbstractMap_t1382569190 * value)
	{
		____map_2 = value;
		Il2CppCodeGenWriteBarrier(&____map_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(PokemonFactory_t711136535, ___player_3)); }
	inline Transform_t3275118058 * get_player_3() const { return ___player_3; }
	inline Transform_t3275118058 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t3275118058 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_pokemonMapObjects_4() { return static_cast<int32_t>(offsetof(PokemonFactory_t711136535, ___pokemonMapObjects_4)); }
	inline List_1_t1125654279 * get_pokemonMapObjects_4() const { return ___pokemonMapObjects_4; }
	inline List_1_t1125654279 ** get_address_of_pokemonMapObjects_4() { return &___pokemonMapObjects_4; }
	inline void set_pokemonMapObjects_4(List_1_t1125654279 * value)
	{
		___pokemonMapObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___pokemonMapObjects_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
