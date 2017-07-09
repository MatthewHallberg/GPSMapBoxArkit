#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Mapbox.Unity.Utilities.Runnable/Routine>
struct Dictionary_2_t583035717;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.Runnable
struct  Runnable_t3925483335  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Mapbox.Unity.Utilities.Runnable/Routine> Mapbox.Unity.Utilities.Runnable::m_Routines
	Dictionary_2_t583035717 * ___m_Routines_2;
	// System.Int32 Mapbox.Unity.Utilities.Runnable::m_NextRoutineId
	int32_t ___m_NextRoutineId_3;

public:
	inline static int32_t get_offset_of_m_Routines_2() { return static_cast<int32_t>(offsetof(Runnable_t3925483335, ___m_Routines_2)); }
	inline Dictionary_2_t583035717 * get_m_Routines_2() const { return ___m_Routines_2; }
	inline Dictionary_2_t583035717 ** get_address_of_m_Routines_2() { return &___m_Routines_2; }
	inline void set_m_Routines_2(Dictionary_2_t583035717 * value)
	{
		___m_Routines_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Routines_2, value);
	}

	inline static int32_t get_offset_of_m_NextRoutineId_3() { return static_cast<int32_t>(offsetof(Runnable_t3925483335, ___m_NextRoutineId_3)); }
	inline int32_t get_m_NextRoutineId_3() const { return ___m_NextRoutineId_3; }
	inline int32_t* get_address_of_m_NextRoutineId_3() { return &___m_NextRoutineId_3; }
	inline void set_m_NextRoutineId_3(int32_t value)
	{
		___m_NextRoutineId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
