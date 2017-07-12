#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_ParticleSystemCurveMode1659312557.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
struct AnimationCurve_t3306541151_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_t122563058 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t3306541151 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t3306541151 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_CurveMin_2)); }
	inline AnimationCurve_t3306541151 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t3306541151 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurveMin_2, value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_CurveMax_3)); }
	inline AnimationCurve_t3306541151 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t3306541151 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurveMax_3, value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_t122563058, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t122563058_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t3306541151_marshaled_pinvoke ___m_CurveMin_2;
	AnimationCurve_t3306541151_marshaled_pinvoke ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t122563058_marshaled_com
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t3306541151_marshaled_com* ___m_CurveMin_2;
	AnimationCurve_t3306541151_marshaled_com* ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
