#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.TrianglePool
struct TrianglePool_t3592645624;
// TriangleNet.Configuration
struct Configuration_t3096111654;
// TriangleNet.Voronoi.IVoronoiFactory
struct IVoronoiFactory_t3613463993;
// TriangleNet.Meshing.ConstraintOptions
struct ConstraintOptions_t2163317251;
// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t760488959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Smoothing.SimpleSmoother
struct  SimpleSmoother_t3471556365  : public Il2CppObject
{
public:
	// TriangleNet.TrianglePool TriangleNet.Smoothing.SimpleSmoother::pool
	TrianglePool_t3592645624 * ___pool_0;
	// TriangleNet.Configuration TriangleNet.Smoothing.SimpleSmoother::config
	Configuration_t3096111654 * ___config_1;
	// TriangleNet.Voronoi.IVoronoiFactory TriangleNet.Smoothing.SimpleSmoother::factory
	Il2CppObject * ___factory_2;
	// TriangleNet.Meshing.ConstraintOptions TriangleNet.Smoothing.SimpleSmoother::options
	ConstraintOptions_t2163317251 * ___options_3;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(SimpleSmoother_t3471556365, ___pool_0)); }
	inline TrianglePool_t3592645624 * get_pool_0() const { return ___pool_0; }
	inline TrianglePool_t3592645624 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TrianglePool_t3592645624 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}

	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(SimpleSmoother_t3471556365, ___config_1)); }
	inline Configuration_t3096111654 * get_config_1() const { return ___config_1; }
	inline Configuration_t3096111654 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(Configuration_t3096111654 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier(&___config_1, value);
	}

	inline static int32_t get_offset_of_factory_2() { return static_cast<int32_t>(offsetof(SimpleSmoother_t3471556365, ___factory_2)); }
	inline Il2CppObject * get_factory_2() const { return ___factory_2; }
	inline Il2CppObject ** get_address_of_factory_2() { return &___factory_2; }
	inline void set_factory_2(Il2CppObject * value)
	{
		___factory_2 = value;
		Il2CppCodeGenWriteBarrier(&___factory_2, value);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(SimpleSmoother_t3471556365, ___options_3)); }
	inline ConstraintOptions_t2163317251 * get_options_3() const { return ___options_3; }
	inline ConstraintOptions_t2163317251 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(ConstraintOptions_t2163317251 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier(&___options_3, value);
	}
};

struct SimpleSmoother_t3471556365_StaticFields
{
public:
	// System.Func`1<TriangleNet.IPredicates> TriangleNet.Smoothing.SimpleSmoother::<>f__mg$cache0
	Func_1_t760488959 * ___U3CU3Ef__mgU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(SimpleSmoother_t3471556365_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline Func_1_t760488959 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline Func_1_t760488959 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(Func_1_t760488959 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
