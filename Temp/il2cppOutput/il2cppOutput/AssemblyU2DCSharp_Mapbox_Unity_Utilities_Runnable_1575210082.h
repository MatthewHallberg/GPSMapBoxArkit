#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.Runnable/Routine
struct  Routine_t1575210082  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.Unity.Utilities.Runnable/Routine::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_0;
	// System.Boolean Mapbox.Unity.Utilities.Runnable/Routine::<Stop>k__BackingField
	bool ___U3CStopU3Ek__BackingField_1;
	// System.Boolean Mapbox.Unity.Utilities.Runnable/Routine::m_bMoveNext
	bool ___m_bMoveNext_2;
	// System.Collections.IEnumerator Mapbox.Unity.Utilities.Runnable/Routine::m_Enumerator
	Il2CppObject * ___m_Enumerator_3;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Routine_t1575210082, ___U3CIDU3Ek__BackingField_0)); }
	inline int32_t get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(int32_t value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStopU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Routine_t1575210082, ___U3CStopU3Ek__BackingField_1)); }
	inline bool get_U3CStopU3Ek__BackingField_1() const { return ___U3CStopU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CStopU3Ek__BackingField_1() { return &___U3CStopU3Ek__BackingField_1; }
	inline void set_U3CStopU3Ek__BackingField_1(bool value)
	{
		___U3CStopU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_bMoveNext_2() { return static_cast<int32_t>(offsetof(Routine_t1575210082, ___m_bMoveNext_2)); }
	inline bool get_m_bMoveNext_2() const { return ___m_bMoveNext_2; }
	inline bool* get_address_of_m_bMoveNext_2() { return &___m_bMoveNext_2; }
	inline void set_m_bMoveNext_2(bool value)
	{
		___m_bMoveNext_2 = value;
	}

	inline static int32_t get_offset_of_m_Enumerator_3() { return static_cast<int32_t>(offsetof(Routine_t1575210082, ___m_Enumerator_3)); }
	inline Il2CppObject * get_m_Enumerator_3() const { return ___m_Enumerator_3; }
	inline Il2CppObject ** get_address_of_m_Enumerator_3() { return &___m_Enumerator_3; }
	inline void set_m_Enumerator_3(Il2CppObject * value)
	{
		___m_Enumerator_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Enumerator_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
