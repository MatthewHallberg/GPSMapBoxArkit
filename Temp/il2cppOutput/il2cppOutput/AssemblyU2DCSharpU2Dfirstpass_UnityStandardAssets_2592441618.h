#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t245510835;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate
struct  AutoMoveAndRotate_t2592441618  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_t245510835 * ___moveUnitsPerSecond_2;
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_t245510835 * ___rotateDegreesPerSecond_3;
	// System.Boolean UnityStandardAssets.Utility.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_4;
	// System.Single UnityStandardAssets.Utility.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_5;

public:
	inline static int32_t get_offset_of_moveUnitsPerSecond_2() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2592441618, ___moveUnitsPerSecond_2)); }
	inline Vector3andSpace_t245510835 * get_moveUnitsPerSecond_2() const { return ___moveUnitsPerSecond_2; }
	inline Vector3andSpace_t245510835 ** get_address_of_moveUnitsPerSecond_2() { return &___moveUnitsPerSecond_2; }
	inline void set_moveUnitsPerSecond_2(Vector3andSpace_t245510835 * value)
	{
		___moveUnitsPerSecond_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveUnitsPerSecond_2, value);
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_3() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2592441618, ___rotateDegreesPerSecond_3)); }
	inline Vector3andSpace_t245510835 * get_rotateDegreesPerSecond_3() const { return ___rotateDegreesPerSecond_3; }
	inline Vector3andSpace_t245510835 ** get_address_of_rotateDegreesPerSecond_3() { return &___rotateDegreesPerSecond_3; }
	inline void set_rotateDegreesPerSecond_3(Vector3andSpace_t245510835 * value)
	{
		___rotateDegreesPerSecond_3 = value;
		Il2CppCodeGenWriteBarrier(&___rotateDegreesPerSecond_3, value);
	}

	inline static int32_t get_offset_of_ignoreTimescale_4() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2592441618, ___ignoreTimescale_4)); }
	inline bool get_ignoreTimescale_4() const { return ___ignoreTimescale_4; }
	inline bool* get_address_of_ignoreTimescale_4() { return &___ignoreTimescale_4; }
	inline void set_ignoreTimescale_4(bool value)
	{
		___ignoreTimescale_4 = value;
	}

	inline static int32_t get_offset_of_m_LastRealTime_5() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2592441618, ___m_LastRealTime_5)); }
	inline float get_m_LastRealTime_5() const { return ___m_LastRealTime_5; }
	inline float* get_address_of_m_LastRealTime_5() { return &___m_LastRealTime_5; }
	inline void set_m_LastRealTime_5(float value)
	{
		___m_LastRealTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
