#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t2985503331;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t2375210762  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t2985503331 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t1172311765* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t577127397* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_12;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t2243707580  ___P0_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t2243707580  ___P1_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t2243707580  ___P2_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t2243707580  ___P3_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___waypointList_2)); }
	inline WaypointList_t2985503331 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t2985503331 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t2985503331 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier(&___waypointList_2, value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___points_5)); }
	inline Vector3U5BU5D_t1172311765* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t1172311765* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier(&___points_5, value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___distances_6)); }
	inline SingleU5BU5D_t577127397* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t577127397** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t577127397* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier(&___distances_6, value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___U3CLengthU3Ek__BackingField_8)); }
	inline float get_U3CLengthU3Ek__BackingField_8() const { return ___U3CLengthU3Ek__BackingField_8; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_8() { return &___U3CLengthU3Ek__BackingField_8; }
	inline void set_U3CLengthU3Ek__BackingField_8(float value)
	{
		___U3CLengthU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_p0n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___p0n_9)); }
	inline int32_t get_p0n_9() const { return ___p0n_9; }
	inline int32_t* get_address_of_p0n_9() { return &___p0n_9; }
	inline void set_p0n_9(int32_t value)
	{
		___p0n_9 = value;
	}

	inline static int32_t get_offset_of_p1n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___p1n_10)); }
	inline int32_t get_p1n_10() const { return ___p1n_10; }
	inline int32_t* get_address_of_p1n_10() { return &___p1n_10; }
	inline void set_p1n_10(int32_t value)
	{
		___p1n_10 = value;
	}

	inline static int32_t get_offset_of_p2n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___p2n_11)); }
	inline int32_t get_p2n_11() const { return ___p2n_11; }
	inline int32_t* get_address_of_p2n_11() { return &___p2n_11; }
	inline void set_p2n_11(int32_t value)
	{
		___p2n_11 = value;
	}

	inline static int32_t get_offset_of_p3n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___p3n_12)); }
	inline int32_t get_p3n_12() const { return ___p3n_12; }
	inline int32_t* get_address_of_p3n_12() { return &___p3n_12; }
	inline void set_p3n_12(int32_t value)
	{
		___p3n_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___i_13)); }
	inline float get_i_13() const { return ___i_13; }
	inline float* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(float value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_P0_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___P0_14)); }
	inline Vector3_t2243707580  get_P0_14() const { return ___P0_14; }
	inline Vector3_t2243707580 * get_address_of_P0_14() { return &___P0_14; }
	inline void set_P0_14(Vector3_t2243707580  value)
	{
		___P0_14 = value;
	}

	inline static int32_t get_offset_of_P1_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___P1_15)); }
	inline Vector3_t2243707580  get_P1_15() const { return ___P1_15; }
	inline Vector3_t2243707580 * get_address_of_P1_15() { return &___P1_15; }
	inline void set_P1_15(Vector3_t2243707580  value)
	{
		___P1_15 = value;
	}

	inline static int32_t get_offset_of_P2_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___P2_16)); }
	inline Vector3_t2243707580  get_P2_16() const { return ___P2_16; }
	inline Vector3_t2243707580 * get_address_of_P2_16() { return &___P2_16; }
	inline void set_P2_16(Vector3_t2243707580  value)
	{
		___P2_16 = value;
	}

	inline static int32_t get_offset_of_P3_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2375210762, ___P3_17)); }
	inline Vector3_t2243707580  get_P3_17() const { return ___P3_17; }
	inline Vector3_t2243707580 * get_address_of_P3_17() { return &___P3_17; }
	inline void set_P3_17(Vector3_t2243707580  value)
	{
		___P3_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
