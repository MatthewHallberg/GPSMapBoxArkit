#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PikachuBehavior
struct  PikachuBehavior_t740355727  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationClip PikachuBehavior::idle
	AnimationClip_t3510324950 * ___idle_2;
	// UnityEngine.AnimationClip PikachuBehavior::walk
	AnimationClip_t3510324950 * ___walk_3;
	// UnityEngine.GameObject PikachuBehavior::electric
	GameObject_t1756533147 * ___electric_4;

public:
	inline static int32_t get_offset_of_idle_2() { return static_cast<int32_t>(offsetof(PikachuBehavior_t740355727, ___idle_2)); }
	inline AnimationClip_t3510324950 * get_idle_2() const { return ___idle_2; }
	inline AnimationClip_t3510324950 ** get_address_of_idle_2() { return &___idle_2; }
	inline void set_idle_2(AnimationClip_t3510324950 * value)
	{
		___idle_2 = value;
		Il2CppCodeGenWriteBarrier(&___idle_2, value);
	}

	inline static int32_t get_offset_of_walk_3() { return static_cast<int32_t>(offsetof(PikachuBehavior_t740355727, ___walk_3)); }
	inline AnimationClip_t3510324950 * get_walk_3() const { return ___walk_3; }
	inline AnimationClip_t3510324950 ** get_address_of_walk_3() { return &___walk_3; }
	inline void set_walk_3(AnimationClip_t3510324950 * value)
	{
		___walk_3 = value;
		Il2CppCodeGenWriteBarrier(&___walk_3, value);
	}

	inline static int32_t get_offset_of_electric_4() { return static_cast<int32_t>(offsetof(PikachuBehavior_t740355727, ___electric_4)); }
	inline GameObject_t1756533147 * get_electric_4() const { return ___electric_4; }
	inline GameObject_t1756533147 ** get_address_of_electric_4() { return &___electric_4; }
	inline void set_electric_4(GameObject_t1756533147 * value)
	{
		___electric_4 = value;
		Il2CppCodeGenWriteBarrier(&___electric_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
