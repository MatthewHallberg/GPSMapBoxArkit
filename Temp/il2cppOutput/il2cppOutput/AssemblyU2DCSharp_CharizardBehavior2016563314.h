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
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharizardBehavior
struct  CharizardBehavior_t2016563314  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationClip CharizardBehavior::idle
	AnimationClip_t3510324950 * ___idle_2;
	// UnityEngine.AnimationClip CharizardBehavior::attack
	AnimationClip_t3510324950 * ___attack_3;
	// UnityEngine.ParticleSystem CharizardBehavior::ps
	ParticleSystem_t3394631041 * ___ps_4;

public:
	inline static int32_t get_offset_of_idle_2() { return static_cast<int32_t>(offsetof(CharizardBehavior_t2016563314, ___idle_2)); }
	inline AnimationClip_t3510324950 * get_idle_2() const { return ___idle_2; }
	inline AnimationClip_t3510324950 ** get_address_of_idle_2() { return &___idle_2; }
	inline void set_idle_2(AnimationClip_t3510324950 * value)
	{
		___idle_2 = value;
		Il2CppCodeGenWriteBarrier(&___idle_2, value);
	}

	inline static int32_t get_offset_of_attack_3() { return static_cast<int32_t>(offsetof(CharizardBehavior_t2016563314, ___attack_3)); }
	inline AnimationClip_t3510324950 * get_attack_3() const { return ___attack_3; }
	inline AnimationClip_t3510324950 ** get_address_of_attack_3() { return &___attack_3; }
	inline void set_attack_3(AnimationClip_t3510324950 * value)
	{
		___attack_3 = value;
		Il2CppCodeGenWriteBarrier(&___attack_3, value);
	}

	inline static int32_t get_offset_of_ps_4() { return static_cast<int32_t>(offsetof(CharizardBehavior_t2016563314, ___ps_4)); }
	inline ParticleSystem_t3394631041 * get_ps_4() const { return ___ps_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_ps_4() { return &___ps_4; }
	inline void set_ps_4(ParticleSystem_t3394631041 * value)
	{
		___ps_4 = value;
		Il2CppCodeGenWriteBarrier(&___ps_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
