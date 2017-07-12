#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MakiHelper
struct  MakiHelper_t3313634430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MakiHelper::_uiObject
	GameObject_t1756533147 * ____uiObject_4;

public:
	inline static int32_t get_offset_of__uiObject_4() { return static_cast<int32_t>(offsetof(MakiHelper_t3313634430, ____uiObject_4)); }
	inline GameObject_t1756533147 * get__uiObject_4() const { return ____uiObject_4; }
	inline GameObject_t1756533147 ** get_address_of__uiObject_4() { return &____uiObject_4; }
	inline void set__uiObject_4(GameObject_t1756533147 * value)
	{
		____uiObject_4 = value;
		Il2CppCodeGenWriteBarrier(&____uiObject_4, value);
	}
};

struct MakiHelper_t3313634430_StaticFields
{
public:
	// UnityEngine.RectTransform MakiHelper::Parent
	RectTransform_t3349966182 * ___Parent_2;
	// UnityEngine.GameObject MakiHelper::UiPrefab
	GameObject_t1756533147 * ___UiPrefab_3;

public:
	inline static int32_t get_offset_of_Parent_2() { return static_cast<int32_t>(offsetof(MakiHelper_t3313634430_StaticFields, ___Parent_2)); }
	inline RectTransform_t3349966182 * get_Parent_2() const { return ___Parent_2; }
	inline RectTransform_t3349966182 ** get_address_of_Parent_2() { return &___Parent_2; }
	inline void set_Parent_2(RectTransform_t3349966182 * value)
	{
		___Parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_2, value);
	}

	inline static int32_t get_offset_of_UiPrefab_3() { return static_cast<int32_t>(offsetof(MakiHelper_t3313634430_StaticFields, ___UiPrefab_3)); }
	inline GameObject_t1756533147 * get_UiPrefab_3() const { return ___UiPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_UiPrefab_3() { return &___UiPrefab_3; }
	inline void set_UiPrefab_3(GameObject_t1756533147 * value)
	{
		___UiPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___UiPrefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
