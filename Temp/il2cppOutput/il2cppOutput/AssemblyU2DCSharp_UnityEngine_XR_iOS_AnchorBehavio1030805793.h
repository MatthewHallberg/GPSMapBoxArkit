#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.XR.iOS.ARPokemonControl
struct ARPokemonControl_t1183290133;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.AnchorBehavior
struct  AnchorBehavior_t1030805793  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.XR.iOS.ARPokemonControl UnityEngine.XR.iOS.AnchorBehavior::pokemonControl
	ARPokemonControl_t1183290133 * ___pokemonControl_2;

public:
	inline static int32_t get_offset_of_pokemonControl_2() { return static_cast<int32_t>(offsetof(AnchorBehavior_t1030805793, ___pokemonControl_2)); }
	inline ARPokemonControl_t1183290133 * get_pokemonControl_2() const { return ___pokemonControl_2; }
	inline ARPokemonControl_t1183290133 ** get_address_of_pokemonControl_2() { return &___pokemonControl_2; }
	inline void set_pokemonControl_2(ARPokemonControl_t1183290133 * value)
	{
		___pokemonControl_2 = value;
		Il2CppCodeGenWriteBarrier(&___pokemonControl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
