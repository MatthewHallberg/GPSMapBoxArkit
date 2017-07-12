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

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t2688848816  : public Il2CppObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t189460977 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t2243707580  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t3275118058 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t2243707580  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(CameraRefocus_t2688848816, ___Camera_0)); }
	inline Camera_t189460977 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t189460977 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t189460977 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_0, value);
	}

	inline static int32_t get_offset_of_Lookatpoint_1() { return static_cast<int32_t>(offsetof(CameraRefocus_t2688848816, ___Lookatpoint_1)); }
	inline Vector3_t2243707580  get_Lookatpoint_1() const { return ___Lookatpoint_1; }
	inline Vector3_t2243707580 * get_address_of_Lookatpoint_1() { return &___Lookatpoint_1; }
	inline void set_Lookatpoint_1(Vector3_t2243707580  value)
	{
		___Lookatpoint_1 = value;
	}

	inline static int32_t get_offset_of_Parent_2() { return static_cast<int32_t>(offsetof(CameraRefocus_t2688848816, ___Parent_2)); }
	inline Transform_t3275118058 * get_Parent_2() const { return ___Parent_2; }
	inline Transform_t3275118058 ** get_address_of_Parent_2() { return &___Parent_2; }
	inline void set_Parent_2(Transform_t3275118058 * value)
	{
		___Parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_2, value);
	}

	inline static int32_t get_offset_of_m_OrigCameraPos_3() { return static_cast<int32_t>(offsetof(CameraRefocus_t2688848816, ___m_OrigCameraPos_3)); }
	inline Vector3_t2243707580  get_m_OrigCameraPos_3() const { return ___m_OrigCameraPos_3; }
	inline Vector3_t2243707580 * get_address_of_m_OrigCameraPos_3() { return &___m_OrigCameraPos_3; }
	inline void set_m_OrigCameraPos_3(Vector3_t2243707580  value)
	{
		___m_OrigCameraPos_3 = value;
	}

	inline static int32_t get_offset_of_m_Refocus_4() { return static_cast<int32_t>(offsetof(CameraRefocus_t2688848816, ___m_Refocus_4)); }
	inline bool get_m_Refocus_4() const { return ___m_Refocus_4; }
	inline bool* get_address_of_m_Refocus_4() { return &___m_Refocus_4; }
	inline void set_m_Refocus_4(bool value)
	{
		___m_Refocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
