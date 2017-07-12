#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CurveControlledBob
struct  CurveControlledBob_t2107922160  : public Il2CppObject
{
public:
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_t3306541151 * ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t2243707580  ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;

public:
	inline static int32_t get_offset_of_HorizontalBobRange_0() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___HorizontalBobRange_0)); }
	inline float get_HorizontalBobRange_0() const { return ___HorizontalBobRange_0; }
	inline float* get_address_of_HorizontalBobRange_0() { return &___HorizontalBobRange_0; }
	inline void set_HorizontalBobRange_0(float value)
	{
		___HorizontalBobRange_0 = value;
	}

	inline static int32_t get_offset_of_VerticalBobRange_1() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___VerticalBobRange_1)); }
	inline float get_VerticalBobRange_1() const { return ___VerticalBobRange_1; }
	inline float* get_address_of_VerticalBobRange_1() { return &___VerticalBobRange_1; }
	inline void set_VerticalBobRange_1(float value)
	{
		___VerticalBobRange_1 = value;
	}

	inline static int32_t get_offset_of_Bobcurve_2() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___Bobcurve_2)); }
	inline AnimationCurve_t3306541151 * get_Bobcurve_2() const { return ___Bobcurve_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_Bobcurve_2() { return &___Bobcurve_2; }
	inline void set_Bobcurve_2(AnimationCurve_t3306541151 * value)
	{
		___Bobcurve_2 = value;
		Il2CppCodeGenWriteBarrier(&___Bobcurve_2, value);
	}

	inline static int32_t get_offset_of_VerticaltoHorizontalRatio_3() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___VerticaltoHorizontalRatio_3)); }
	inline float get_VerticaltoHorizontalRatio_3() const { return ___VerticaltoHorizontalRatio_3; }
	inline float* get_address_of_VerticaltoHorizontalRatio_3() { return &___VerticaltoHorizontalRatio_3; }
	inline void set_VerticaltoHorizontalRatio_3(float value)
	{
		___VerticaltoHorizontalRatio_3 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionX_4() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___m_CyclePositionX_4)); }
	inline float get_m_CyclePositionX_4() const { return ___m_CyclePositionX_4; }
	inline float* get_address_of_m_CyclePositionX_4() { return &___m_CyclePositionX_4; }
	inline void set_m_CyclePositionX_4(float value)
	{
		___m_CyclePositionX_4 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionY_5() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___m_CyclePositionY_5)); }
	inline float get_m_CyclePositionY_5() const { return ___m_CyclePositionY_5; }
	inline float* get_address_of_m_CyclePositionY_5() { return &___m_CyclePositionY_5; }
	inline void set_m_CyclePositionY_5(float value)
	{
		___m_CyclePositionY_5 = value;
	}

	inline static int32_t get_offset_of_m_BobBaseInterval_6() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___m_BobBaseInterval_6)); }
	inline float get_m_BobBaseInterval_6() const { return ___m_BobBaseInterval_6; }
	inline float* get_address_of_m_BobBaseInterval_6() { return &___m_BobBaseInterval_6; }
	inline void set_m_BobBaseInterval_6(float value)
	{
		___m_BobBaseInterval_6 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_7() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___m_OriginalCameraPosition_7)); }
	inline Vector3_t2243707580  get_m_OriginalCameraPosition_7() const { return ___m_OriginalCameraPosition_7; }
	inline Vector3_t2243707580 * get_address_of_m_OriginalCameraPosition_7() { return &___m_OriginalCameraPosition_7; }
	inline void set_m_OriginalCameraPosition_7(Vector3_t2243707580  value)
	{
		___m_OriginalCameraPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_Time_8() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2107922160, ___m_Time_8)); }
	inline float get_m_Time_8() const { return ___m_Time_8; }
	inline float* get_address_of_m_Time_8() { return &___m_Time_8; }
	inline void set_m_Time_8(float value)
	{
		___m_Time_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
