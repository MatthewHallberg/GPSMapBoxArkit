#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1659392090.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_U318924311.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t2375210762;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t2206407592  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t2375210762 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t318924311  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t318924311  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t318924311  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t3275118058 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t2243707580  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___circuit_2)); }
	inline WaypointCircuit_t2375210762 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t2375210762 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t2375210762 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier(&___circuit_2, value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t318924311  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t318924311 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t318924311  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t318924311  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t318924311 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t318924311  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t318924311  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t318924311 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t318924311  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___target_12)); }
	inline Transform_t3275118058 * get_target_12() const { return ___target_12; }
	inline Transform_t3275118058 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t3275118058 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier(&___target_12, value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lastPosition_15)); }
	inline Vector3_t2243707580  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t2243707580  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
