#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Gyroscope
struct Gyroscope_t1705362817;
// UnityEngine.LocationService
struct LocationService_t1617852714;
// UnityEngine.Compass
struct Compass_t2500694222;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1785128008  : public Il2CppObject
{
public:

public:
};

struct Input_t1785128008_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t1705362817 * ___m_MainGyro_0;
	// UnityEngine.LocationService UnityEngine.Input::locationServiceInstance
	LocationService_t1617852714 * ___locationServiceInstance_1;
	// UnityEngine.Compass UnityEngine.Input::compassInstance
	Compass_t2500694222 * ___compassInstance_2;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1785128008_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t1705362817 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t1705362817 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t1705362817 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_MainGyro_0, value);
	}

	inline static int32_t get_offset_of_locationServiceInstance_1() { return static_cast<int32_t>(offsetof(Input_t1785128008_StaticFields, ___locationServiceInstance_1)); }
	inline LocationService_t1617852714 * get_locationServiceInstance_1() const { return ___locationServiceInstance_1; }
	inline LocationService_t1617852714 ** get_address_of_locationServiceInstance_1() { return &___locationServiceInstance_1; }
	inline void set_locationServiceInstance_1(LocationService_t1617852714 * value)
	{
		___locationServiceInstance_1 = value;
		Il2CppCodeGenWriteBarrier(&___locationServiceInstance_1, value);
	}

	inline static int32_t get_offset_of_compassInstance_2() { return static_cast<int32_t>(offsetof(Input_t1785128008_StaticFields, ___compassInstance_2)); }
	inline Compass_t2500694222 * get_compassInstance_2() const { return ___compassInstance_2; }
	inline Compass_t2500694222 ** get_address_of_compassInstance_2() { return &___compassInstance_2; }
	inline void set_compassInstance_2(Compass_t2500694222 * value)
	{
		___compassInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___compassInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
