#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick
struct  FOVKick_t1823436477  : public Il2CppObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_t189460977 * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t3306541151 * ___IncreaseCurve_5;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___Camera_0)); }
	inline Camera_t189460977 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t189460977 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t189460977 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_0, value);
	}

	inline static int32_t get_offset_of_originalFov_1() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___originalFov_1)); }
	inline float get_originalFov_1() const { return ___originalFov_1; }
	inline float* get_address_of_originalFov_1() { return &___originalFov_1; }
	inline void set_originalFov_1(float value)
	{
		___originalFov_1 = value;
	}

	inline static int32_t get_offset_of_FOVIncrease_2() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___FOVIncrease_2)); }
	inline float get_FOVIncrease_2() const { return ___FOVIncrease_2; }
	inline float* get_address_of_FOVIncrease_2() { return &___FOVIncrease_2; }
	inline void set_FOVIncrease_2(float value)
	{
		___FOVIncrease_2 = value;
	}

	inline static int32_t get_offset_of_TimeToIncrease_3() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___TimeToIncrease_3)); }
	inline float get_TimeToIncrease_3() const { return ___TimeToIncrease_3; }
	inline float* get_address_of_TimeToIncrease_3() { return &___TimeToIncrease_3; }
	inline void set_TimeToIncrease_3(float value)
	{
		___TimeToIncrease_3 = value;
	}

	inline static int32_t get_offset_of_TimeToDecrease_4() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___TimeToDecrease_4)); }
	inline float get_TimeToDecrease_4() const { return ___TimeToDecrease_4; }
	inline float* get_address_of_TimeToDecrease_4() { return &___TimeToDecrease_4; }
	inline void set_TimeToDecrease_4(float value)
	{
		___TimeToDecrease_4 = value;
	}

	inline static int32_t get_offset_of_IncreaseCurve_5() { return static_cast<int32_t>(offsetof(FOVKick_t1823436477, ___IncreaseCurve_5)); }
	inline AnimationCurve_t3306541151 * get_IncreaseCurve_5() const { return ___IncreaseCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_IncreaseCurve_5() { return &___IncreaseCurve_5; }
	inline void set_IncreaseCurve_5(AnimationCurve_t3306541151 * value)
	{
		___IncreaseCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___IncreaseCurve_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
