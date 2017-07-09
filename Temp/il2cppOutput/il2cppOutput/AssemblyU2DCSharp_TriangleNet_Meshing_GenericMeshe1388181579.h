#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Configuration
struct Configuration_t3096111654;
// TriangleNet.Meshing.ITriangulator
struct ITriangulator_t3740062205;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.GenericMesher
struct  GenericMesher_t1388181579  : public Il2CppObject
{
public:
	// TriangleNet.Configuration TriangleNet.Meshing.GenericMesher::config
	Configuration_t3096111654 * ___config_0;
	// TriangleNet.Meshing.ITriangulator TriangleNet.Meshing.GenericMesher::triangulator
	Il2CppObject * ___triangulator_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(GenericMesher_t1388181579, ___config_0)); }
	inline Configuration_t3096111654 * get_config_0() const { return ___config_0; }
	inline Configuration_t3096111654 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(Configuration_t3096111654 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier(&___config_0, value);
	}

	inline static int32_t get_offset_of_triangulator_1() { return static_cast<int32_t>(offsetof(GenericMesher_t1388181579, ___triangulator_1)); }
	inline Il2CppObject * get_triangulator_1() const { return ___triangulator_1; }
	inline Il2CppObject ** get_address_of_triangulator_1() { return &___triangulator_1; }
	inline void set_triangulator_1(Il2CppObject * value)
	{
		___triangulator_1 = value;
		Il2CppCodeGenWriteBarrier(&___triangulator_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
