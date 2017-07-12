#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Light
struct Light_t494725636;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.FireLight
struct  FireLight_t2590751060  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Effects.FireLight::m_Rnd
	float ___m_Rnd_2;
	// System.Boolean UnityStandardAssets.Effects.FireLight::m_Burning
	bool ___m_Burning_3;
	// UnityEngine.Light UnityStandardAssets.Effects.FireLight::m_Light
	Light_t494725636 * ___m_Light_4;

public:
	inline static int32_t get_offset_of_m_Rnd_2() { return static_cast<int32_t>(offsetof(FireLight_t2590751060, ___m_Rnd_2)); }
	inline float get_m_Rnd_2() const { return ___m_Rnd_2; }
	inline float* get_address_of_m_Rnd_2() { return &___m_Rnd_2; }
	inline void set_m_Rnd_2(float value)
	{
		___m_Rnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Burning_3() { return static_cast<int32_t>(offsetof(FireLight_t2590751060, ___m_Burning_3)); }
	inline bool get_m_Burning_3() const { return ___m_Burning_3; }
	inline bool* get_address_of_m_Burning_3() { return &___m_Burning_3; }
	inline void set_m_Burning_3(bool value)
	{
		___m_Burning_3 = value;
	}

	inline static int32_t get_offset_of_m_Light_4() { return static_cast<int32_t>(offsetof(FireLight_t2590751060, ___m_Light_4)); }
	inline Light_t494725636 * get_m_Light_4() const { return ___m_Light_4; }
	inline Light_t494725636 ** get_address_of_m_Light_4() { return &___m_Light_4; }
	inline void set_m_Light_4(Light_t494725636 * value)
	{
		___m_Light_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Light_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
