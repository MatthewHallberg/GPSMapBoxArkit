#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Mapbox.Unity.MeshGeneration.Modifiers.ModifierStackBase
struct ModifierStackBase_t2178605430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Interfaces.TypeVisualizerTuple
struct  TypeVisualizerTuple_t1120819582  : public Il2CppObject
{
public:
	// System.String Mapbox.Unity.MeshGeneration.Interfaces.TypeVisualizerTuple::Type
	String_t* ___Type_0;
	// Mapbox.Unity.MeshGeneration.Modifiers.ModifierStackBase Mapbox.Unity.MeshGeneration.Interfaces.TypeVisualizerTuple::Stack
	ModifierStackBase_t2178605430 * ___Stack_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeVisualizerTuple_t1120819582, ___Type_0)); }
	inline String_t* get_Type_0() const { return ___Type_0; }
	inline String_t** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(String_t* value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier(&___Type_0, value);
	}

	inline static int32_t get_offset_of_Stack_1() { return static_cast<int32_t>(offsetof(TypeVisualizerTuple_t1120819582, ___Stack_1)); }
	inline ModifierStackBase_t2178605430 * get_Stack_1() const { return ___Stack_1; }
	inline ModifierStackBase_t2178605430 ** get_address_of_Stack_1() { return &___Stack_1; }
	inline void set_Stack_1(ModifierStackBase_t2178605430 * value)
	{
		___Stack_1 = value;
		Il2CppCodeGenWriteBarrier(&___Stack_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
