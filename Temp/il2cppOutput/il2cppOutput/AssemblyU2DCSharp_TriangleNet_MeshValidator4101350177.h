#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.RobustPredicates
struct RobustPredicates_t4209269857;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.MeshValidator
struct  MeshValidator_t4101350177  : public Il2CppObject
{
public:

public:
};

struct MeshValidator_t4101350177_StaticFields
{
public:
	// TriangleNet.RobustPredicates TriangleNet.MeshValidator::predicates
	RobustPredicates_t4209269857 * ___predicates_0;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(MeshValidator_t4101350177_StaticFields, ___predicates_0)); }
	inline RobustPredicates_t4209269857 * get_predicates_0() const { return ___predicates_0; }
	inline RobustPredicates_t4209269857 ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RobustPredicates_t4209269857 * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
