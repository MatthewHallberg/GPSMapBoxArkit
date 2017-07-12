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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t584591591  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_3;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_4;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_5;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t356221433 * ___m_Text_7;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_3() { return static_cast<int32_t>(offsetof(FPSCounter_t584591591, ___m_FpsAccumulator_3)); }
	inline int32_t get_m_FpsAccumulator_3() const { return ___m_FpsAccumulator_3; }
	inline int32_t* get_address_of_m_FpsAccumulator_3() { return &___m_FpsAccumulator_3; }
	inline void set_m_FpsAccumulator_3(int32_t value)
	{
		___m_FpsAccumulator_3 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_4() { return static_cast<int32_t>(offsetof(FPSCounter_t584591591, ___m_FpsNextPeriod_4)); }
	inline float get_m_FpsNextPeriod_4() const { return ___m_FpsNextPeriod_4; }
	inline float* get_address_of_m_FpsNextPeriod_4() { return &___m_FpsNextPeriod_4; }
	inline void set_m_FpsNextPeriod_4(float value)
	{
		___m_FpsNextPeriod_4 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_5() { return static_cast<int32_t>(offsetof(FPSCounter_t584591591, ___m_CurrentFps_5)); }
	inline int32_t get_m_CurrentFps_5() const { return ___m_CurrentFps_5; }
	inline int32_t* get_address_of_m_CurrentFps_5() { return &___m_CurrentFps_5; }
	inline void set_m_CurrentFps_5(int32_t value)
	{
		___m_CurrentFps_5 = value;
	}

	inline static int32_t get_offset_of_m_Text_7() { return static_cast<int32_t>(offsetof(FPSCounter_t584591591, ___m_Text_7)); }
	inline Text_t356221433 * get_m_Text_7() const { return ___m_Text_7; }
	inline Text_t356221433 ** get_address_of_m_Text_7() { return &___m_Text_7; }
	inline void set_m_Text_7(Text_t356221433 * value)
	{
		___m_Text_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
