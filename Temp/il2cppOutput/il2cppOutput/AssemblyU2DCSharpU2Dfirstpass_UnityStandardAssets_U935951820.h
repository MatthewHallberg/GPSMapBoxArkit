#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1911586150.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t3035069757;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent
struct  PlatformSpecificContent_t935951820  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup UnityStandardAssets.Utility.PlatformSpecificContent::m_BuildTargetGroup
	int32_t ___m_BuildTargetGroup_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.PlatformSpecificContent::m_Content
	GameObjectU5BU5D_t3057952154* ___m_Content_3;
	// UnityEngine.MonoBehaviour[] UnityStandardAssets.Utility.PlatformSpecificContent::m_MonoBehaviours
	MonoBehaviourU5BU5D_t3035069757* ___m_MonoBehaviours_4;
	// System.Boolean UnityStandardAssets.Utility.PlatformSpecificContent::m_ChildrenOfThisObject
	bool ___m_ChildrenOfThisObject_5;

public:
	inline static int32_t get_offset_of_m_BuildTargetGroup_2() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t935951820, ___m_BuildTargetGroup_2)); }
	inline int32_t get_m_BuildTargetGroup_2() const { return ___m_BuildTargetGroup_2; }
	inline int32_t* get_address_of_m_BuildTargetGroup_2() { return &___m_BuildTargetGroup_2; }
	inline void set_m_BuildTargetGroup_2(int32_t value)
	{
		___m_BuildTargetGroup_2 = value;
	}

	inline static int32_t get_offset_of_m_Content_3() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t935951820, ___m_Content_3)); }
	inline GameObjectU5BU5D_t3057952154* get_m_Content_3() const { return ___m_Content_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_Content_3() { return &___m_Content_3; }
	inline void set_m_Content_3(GameObjectU5BU5D_t3057952154* value)
	{
		___m_Content_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_3, value);
	}

	inline static int32_t get_offset_of_m_MonoBehaviours_4() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t935951820, ___m_MonoBehaviours_4)); }
	inline MonoBehaviourU5BU5D_t3035069757* get_m_MonoBehaviours_4() const { return ___m_MonoBehaviours_4; }
	inline MonoBehaviourU5BU5D_t3035069757** get_address_of_m_MonoBehaviours_4() { return &___m_MonoBehaviours_4; }
	inline void set_m_MonoBehaviours_4(MonoBehaviourU5BU5D_t3035069757* value)
	{
		___m_MonoBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MonoBehaviours_4, value);
	}

	inline static int32_t get_offset_of_m_ChildrenOfThisObject_5() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t935951820, ___m_ChildrenOfThisObject_5)); }
	inline bool get_m_ChildrenOfThisObject_5() const { return ___m_ChildrenOfThisObject_5; }
	inline bool* get_address_of_m_ChildrenOfThisObject_5() { return &___m_ChildrenOfThisObject_5; }
	inline void set_m_ChildrenOfThisObject_5(bool value)
	{
		___m_ChildrenOfThisObject_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
