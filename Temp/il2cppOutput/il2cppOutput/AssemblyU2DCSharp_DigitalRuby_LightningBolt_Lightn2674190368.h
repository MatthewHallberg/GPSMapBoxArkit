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
#include "AssemblyU2DCSharp_DigitalRuby_LightningBolt_Lightni187157646.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Random
struct Random_t1044426839;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_t814878989;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.LightningBolt.LightningBoltScript
struct  LightningBoltScript_t2674190368  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::StartObject
	GameObject_t1756533147 * ___StartObject_2;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::StartPosition
	Vector3_t2243707580  ___StartPosition_3;
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::EndObject
	GameObject_t1756533147 * ___EndObject_4;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::EndPosition
	Vector3_t2243707580  ___EndPosition_5;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Generations
	int32_t ___Generations_6;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::Duration
	float ___Duration_7;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::timer
	float ___timer_8;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::ChaosFactor
	float ___ChaosFactor_9;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::ManualMode
	bool ___ManualMode_10;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Rows
	int32_t ___Rows_11;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Columns
	int32_t ___Columns_12;
	// DigitalRuby.LightningBolt.LightningBoltAnimationMode DigitalRuby.LightningBolt.LightningBoltScript::AnimationMode
	int32_t ___AnimationMode_13;
	// System.Random DigitalRuby.LightningBolt.LightningBoltScript::RandomGenerator
	Random_t1044426839 * ___RandomGenerator_14;
	// UnityEngine.LineRenderer DigitalRuby.LightningBolt.LightningBoltScript::lineRenderer
	LineRenderer_t849157671 * ___lineRenderer_15;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>> DigitalRuby.LightningBolt.LightningBoltScript::segments
	List_1_t814878989 * ___segments_16;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::startIndex
	int32_t ___startIndex_17;
	// UnityEngine.Vector2 DigitalRuby.LightningBolt.LightningBoltScript::size
	Vector2_t2243707579  ___size_18;
	// UnityEngine.Vector2[] DigitalRuby.LightningBolt.LightningBoltScript::offsets
	Vector2U5BU5D_t686124026* ___offsets_19;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationOffsetIndex
	int32_t ___animationOffsetIndex_20;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationPingPongDirection
	int32_t ___animationPingPongDirection_21;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::orthographic
	bool ___orthographic_22;

public:
	inline static int32_t get_offset_of_StartObject_2() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___StartObject_2)); }
	inline GameObject_t1756533147 * get_StartObject_2() const { return ___StartObject_2; }
	inline GameObject_t1756533147 ** get_address_of_StartObject_2() { return &___StartObject_2; }
	inline void set_StartObject_2(GameObject_t1756533147 * value)
	{
		___StartObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___StartObject_2, value);
	}

	inline static int32_t get_offset_of_StartPosition_3() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___StartPosition_3)); }
	inline Vector3_t2243707580  get_StartPosition_3() const { return ___StartPosition_3; }
	inline Vector3_t2243707580 * get_address_of_StartPosition_3() { return &___StartPosition_3; }
	inline void set_StartPosition_3(Vector3_t2243707580  value)
	{
		___StartPosition_3 = value;
	}

	inline static int32_t get_offset_of_EndObject_4() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___EndObject_4)); }
	inline GameObject_t1756533147 * get_EndObject_4() const { return ___EndObject_4; }
	inline GameObject_t1756533147 ** get_address_of_EndObject_4() { return &___EndObject_4; }
	inline void set_EndObject_4(GameObject_t1756533147 * value)
	{
		___EndObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___EndObject_4, value);
	}

	inline static int32_t get_offset_of_EndPosition_5() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___EndPosition_5)); }
	inline Vector3_t2243707580  get_EndPosition_5() const { return ___EndPosition_5; }
	inline Vector3_t2243707580 * get_address_of_EndPosition_5() { return &___EndPosition_5; }
	inline void set_EndPosition_5(Vector3_t2243707580  value)
	{
		___EndPosition_5 = value;
	}

	inline static int32_t get_offset_of_Generations_6() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___Generations_6)); }
	inline int32_t get_Generations_6() const { return ___Generations_6; }
	inline int32_t* get_address_of_Generations_6() { return &___Generations_6; }
	inline void set_Generations_6(int32_t value)
	{
		___Generations_6 = value;
	}

	inline static int32_t get_offset_of_Duration_7() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___Duration_7)); }
	inline float get_Duration_7() const { return ___Duration_7; }
	inline float* get_address_of_Duration_7() { return &___Duration_7; }
	inline void set_Duration_7(float value)
	{
		___Duration_7 = value;
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}

	inline static int32_t get_offset_of_ChaosFactor_9() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___ChaosFactor_9)); }
	inline float get_ChaosFactor_9() const { return ___ChaosFactor_9; }
	inline float* get_address_of_ChaosFactor_9() { return &___ChaosFactor_9; }
	inline void set_ChaosFactor_9(float value)
	{
		___ChaosFactor_9 = value;
	}

	inline static int32_t get_offset_of_ManualMode_10() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___ManualMode_10)); }
	inline bool get_ManualMode_10() const { return ___ManualMode_10; }
	inline bool* get_address_of_ManualMode_10() { return &___ManualMode_10; }
	inline void set_ManualMode_10(bool value)
	{
		___ManualMode_10 = value;
	}

	inline static int32_t get_offset_of_Rows_11() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___Rows_11)); }
	inline int32_t get_Rows_11() const { return ___Rows_11; }
	inline int32_t* get_address_of_Rows_11() { return &___Rows_11; }
	inline void set_Rows_11(int32_t value)
	{
		___Rows_11 = value;
	}

	inline static int32_t get_offset_of_Columns_12() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___Columns_12)); }
	inline int32_t get_Columns_12() const { return ___Columns_12; }
	inline int32_t* get_address_of_Columns_12() { return &___Columns_12; }
	inline void set_Columns_12(int32_t value)
	{
		___Columns_12 = value;
	}

	inline static int32_t get_offset_of_AnimationMode_13() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___AnimationMode_13)); }
	inline int32_t get_AnimationMode_13() const { return ___AnimationMode_13; }
	inline int32_t* get_address_of_AnimationMode_13() { return &___AnimationMode_13; }
	inline void set_AnimationMode_13(int32_t value)
	{
		___AnimationMode_13 = value;
	}

	inline static int32_t get_offset_of_RandomGenerator_14() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___RandomGenerator_14)); }
	inline Random_t1044426839 * get_RandomGenerator_14() const { return ___RandomGenerator_14; }
	inline Random_t1044426839 ** get_address_of_RandomGenerator_14() { return &___RandomGenerator_14; }
	inline void set_RandomGenerator_14(Random_t1044426839 * value)
	{
		___RandomGenerator_14 = value;
		Il2CppCodeGenWriteBarrier(&___RandomGenerator_14, value);
	}

	inline static int32_t get_offset_of_lineRenderer_15() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___lineRenderer_15)); }
	inline LineRenderer_t849157671 * get_lineRenderer_15() const { return ___lineRenderer_15; }
	inline LineRenderer_t849157671 ** get_address_of_lineRenderer_15() { return &___lineRenderer_15; }
	inline void set_lineRenderer_15(LineRenderer_t849157671 * value)
	{
		___lineRenderer_15 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_15, value);
	}

	inline static int32_t get_offset_of_segments_16() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___segments_16)); }
	inline List_1_t814878989 * get_segments_16() const { return ___segments_16; }
	inline List_1_t814878989 ** get_address_of_segments_16() { return &___segments_16; }
	inline void set_segments_16(List_1_t814878989 * value)
	{
		___segments_16 = value;
		Il2CppCodeGenWriteBarrier(&___segments_16, value);
	}

	inline static int32_t get_offset_of_startIndex_17() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___startIndex_17)); }
	inline int32_t get_startIndex_17() const { return ___startIndex_17; }
	inline int32_t* get_address_of_startIndex_17() { return &___startIndex_17; }
	inline void set_startIndex_17(int32_t value)
	{
		___startIndex_17 = value;
	}

	inline static int32_t get_offset_of_size_18() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___size_18)); }
	inline Vector2_t2243707579  get_size_18() const { return ___size_18; }
	inline Vector2_t2243707579 * get_address_of_size_18() { return &___size_18; }
	inline void set_size_18(Vector2_t2243707579  value)
	{
		___size_18 = value;
	}

	inline static int32_t get_offset_of_offsets_19() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___offsets_19)); }
	inline Vector2U5BU5D_t686124026* get_offsets_19() const { return ___offsets_19; }
	inline Vector2U5BU5D_t686124026** get_address_of_offsets_19() { return &___offsets_19; }
	inline void set_offsets_19(Vector2U5BU5D_t686124026* value)
	{
		___offsets_19 = value;
		Il2CppCodeGenWriteBarrier(&___offsets_19, value);
	}

	inline static int32_t get_offset_of_animationOffsetIndex_20() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___animationOffsetIndex_20)); }
	inline int32_t get_animationOffsetIndex_20() const { return ___animationOffsetIndex_20; }
	inline int32_t* get_address_of_animationOffsetIndex_20() { return &___animationOffsetIndex_20; }
	inline void set_animationOffsetIndex_20(int32_t value)
	{
		___animationOffsetIndex_20 = value;
	}

	inline static int32_t get_offset_of_animationPingPongDirection_21() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___animationPingPongDirection_21)); }
	inline int32_t get_animationPingPongDirection_21() const { return ___animationPingPongDirection_21; }
	inline int32_t* get_address_of_animationPingPongDirection_21() { return &___animationPingPongDirection_21; }
	inline void set_animationPingPongDirection_21(int32_t value)
	{
		___animationPingPongDirection_21 = value;
	}

	inline static int32_t get_offset_of_orthographic_22() { return static_cast<int32_t>(offsetof(LightningBoltScript_t2674190368, ___orthographic_22)); }
	inline bool get_orthographic_22() const { return ___orthographic_22; }
	inline bool* get_address_of_orthographic_22() { return &___orthographic_22; }
	inline void set_orthographic_22(bool value)
	{
		___orthographic_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
