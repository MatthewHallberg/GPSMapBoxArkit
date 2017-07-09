#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_t894930024;
// PokeObjectManager
struct PokeObjectManager_t529979189;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PokeObjectManager
struct  PokeObjectManager_t529979189  : public MonoBehaviour_t1158329972
{
public:
	// System.String PokeObjectManager::currentPokemon
	String_t* ___currentPokemon_2;
	// UnityEngine.Transform PokeObjectManager::player
	Transform_t3275118058 * ___player_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform> PokeObjectManager::pokeObjects
	Dictionary_2_t894930024 * ___pokeObjects_4;

public:
	inline static int32_t get_offset_of_currentPokemon_2() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189, ___currentPokemon_2)); }
	inline String_t* get_currentPokemon_2() const { return ___currentPokemon_2; }
	inline String_t** get_address_of_currentPokemon_2() { return &___currentPokemon_2; }
	inline void set_currentPokemon_2(String_t* value)
	{
		___currentPokemon_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentPokemon_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189, ___player_3)); }
	inline Transform_t3275118058 * get_player_3() const { return ___player_3; }
	inline Transform_t3275118058 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t3275118058 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_pokeObjects_4() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189, ___pokeObjects_4)); }
	inline Dictionary_2_t894930024 * get_pokeObjects_4() const { return ___pokeObjects_4; }
	inline Dictionary_2_t894930024 ** get_address_of_pokeObjects_4() { return &___pokeObjects_4; }
	inline void set_pokeObjects_4(Dictionary_2_t894930024 * value)
	{
		___pokeObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___pokeObjects_4, value);
	}
};

struct PokeObjectManager_t529979189_StaticFields
{
public:
	// PokeObjectManager PokeObjectManager::instance
	PokeObjectManager_t529979189 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189_StaticFields, ___instance_5)); }
	inline PokeObjectManager_t529979189 * get_instance_5() const { return ___instance_5; }
	inline PokeObjectManager_t529979189 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(PokeObjectManager_t529979189 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
