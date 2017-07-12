#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t1135469853;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator
struct  TimedObjectActivator_t2871423837  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entries UnityStandardAssets.Utility.TimedObjectActivator::entries
	Entries_t1135469853 * ___entries_2;

public:
	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(TimedObjectActivator_t2871423837, ___entries_2)); }
	inline Entries_t1135469853 * get_entries_2() const { return ___entries_2; }
	inline Entries_t1135469853 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(Entries_t1135469853 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier(&___entries_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
