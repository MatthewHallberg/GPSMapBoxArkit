#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_U769078069.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t420114983  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t1756533147 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t420114983, ___target_0)); }
	inline GameObject_t1756533147 * get_target_0() const { return ___target_0; }
	inline GameObject_t1756533147 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1756533147 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t420114983, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t420114983, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
