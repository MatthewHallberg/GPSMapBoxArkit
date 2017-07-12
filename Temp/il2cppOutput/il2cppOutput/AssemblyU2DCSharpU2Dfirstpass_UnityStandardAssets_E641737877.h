#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t2090656575;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.Explosive
struct  Explosive_t641737877  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityStandardAssets.Effects.Explosive::explosionPrefab
	Transform_t3275118058 * ___explosionPrefab_2;
	// System.Single UnityStandardAssets.Effects.Explosive::detonationImpactVelocity
	float ___detonationImpactVelocity_3;
	// System.Single UnityStandardAssets.Effects.Explosive::sizeMultiplier
	float ___sizeMultiplier_4;
	// System.Boolean UnityStandardAssets.Effects.Explosive::reset
	bool ___reset_5;
	// System.Single UnityStandardAssets.Effects.Explosive::resetTimeDelay
	float ___resetTimeDelay_6;
	// System.Boolean UnityStandardAssets.Effects.Explosive::m_Exploded
	bool ___m_Exploded_7;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Effects.Explosive::m_ObjectResetter
	ObjectResetter_t2090656575 * ___m_ObjectResetter_8;

public:
	inline static int32_t get_offset_of_explosionPrefab_2() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___explosionPrefab_2)); }
	inline Transform_t3275118058 * get_explosionPrefab_2() const { return ___explosionPrefab_2; }
	inline Transform_t3275118058 ** get_address_of_explosionPrefab_2() { return &___explosionPrefab_2; }
	inline void set_explosionPrefab_2(Transform_t3275118058 * value)
	{
		___explosionPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_2, value);
	}

	inline static int32_t get_offset_of_detonationImpactVelocity_3() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___detonationImpactVelocity_3)); }
	inline float get_detonationImpactVelocity_3() const { return ___detonationImpactVelocity_3; }
	inline float* get_address_of_detonationImpactVelocity_3() { return &___detonationImpactVelocity_3; }
	inline void set_detonationImpactVelocity_3(float value)
	{
		___detonationImpactVelocity_3 = value;
	}

	inline static int32_t get_offset_of_sizeMultiplier_4() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___sizeMultiplier_4)); }
	inline float get_sizeMultiplier_4() const { return ___sizeMultiplier_4; }
	inline float* get_address_of_sizeMultiplier_4() { return &___sizeMultiplier_4; }
	inline void set_sizeMultiplier_4(float value)
	{
		___sizeMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_reset_5() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___reset_5)); }
	inline bool get_reset_5() const { return ___reset_5; }
	inline bool* get_address_of_reset_5() { return &___reset_5; }
	inline void set_reset_5(bool value)
	{
		___reset_5 = value;
	}

	inline static int32_t get_offset_of_resetTimeDelay_6() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___resetTimeDelay_6)); }
	inline float get_resetTimeDelay_6() const { return ___resetTimeDelay_6; }
	inline float* get_address_of_resetTimeDelay_6() { return &___resetTimeDelay_6; }
	inline void set_resetTimeDelay_6(float value)
	{
		___resetTimeDelay_6 = value;
	}

	inline static int32_t get_offset_of_m_Exploded_7() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___m_Exploded_7)); }
	inline bool get_m_Exploded_7() const { return ___m_Exploded_7; }
	inline bool* get_address_of_m_Exploded_7() { return &___m_Exploded_7; }
	inline void set_m_Exploded_7(bool value)
	{
		___m_Exploded_7 = value;
	}

	inline static int32_t get_offset_of_m_ObjectResetter_8() { return static_cast<int32_t>(offsetof(Explosive_t641737877, ___m_ObjectResetter_8)); }
	inline ObjectResetter_t2090656575 * get_m_ObjectResetter_8() const { return ___m_ObjectResetter_8; }
	inline ObjectResetter_t2090656575 ** get_address_of_m_ObjectResetter_8() { return &___m_ObjectResetter_8; }
	inline void set_m_ObjectResetter_8(ObjectResetter_t2090656575 * value)
	{
		___m_ObjectResetter_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjectResetter_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
