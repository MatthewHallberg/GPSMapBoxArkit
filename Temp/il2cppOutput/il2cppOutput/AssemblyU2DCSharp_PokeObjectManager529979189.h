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

public:
	inline static int32_t get_offset_of_currentPokemon_2() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189, ___currentPokemon_2)); }
	inline String_t* get_currentPokemon_2() const { return ___currentPokemon_2; }
	inline String_t** get_address_of_currentPokemon_2() { return &___currentPokemon_2; }
	inline void set_currentPokemon_2(String_t* value)
	{
		___currentPokemon_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentPokemon_2, value);
	}
};

struct PokeObjectManager_t529979189_StaticFields
{
public:
	// PokeObjectManager PokeObjectManager::instance
	PokeObjectManager_t529979189 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(PokeObjectManager_t529979189_StaticFields, ___instance_3)); }
	inline PokeObjectManager_t529979189 * get_instance_3() const { return ___instance_3; }
	inline PokeObjectManager_t529979189 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(PokeObjectManager_t529979189 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
