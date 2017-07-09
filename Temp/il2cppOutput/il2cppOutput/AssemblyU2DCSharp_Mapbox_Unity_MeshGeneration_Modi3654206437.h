#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi2178605430.h"

// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier>
struct List_1_t2463477758;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier>
struct List_1_t855658078;
// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean>
struct Func_2_t2366681589;
// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier,System.Boolean>
struct Func_2_t3011440149;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.ModifierStack
struct  ModifierStack_t3654206437  : public ModifierStackBase_t2178605430
{
public:
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier> Mapbox.Unity.MeshGeneration.Modifiers.ModifierStack::MeshModifiers
	List_1_t2463477758 * ___MeshModifiers_2;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier> Mapbox.Unity.MeshGeneration.Modifiers.ModifierStack::GoModifiers
	List_1_t855658078 * ___GoModifiers_3;

public:
	inline static int32_t get_offset_of_MeshModifiers_2() { return static_cast<int32_t>(offsetof(ModifierStack_t3654206437, ___MeshModifiers_2)); }
	inline List_1_t2463477758 * get_MeshModifiers_2() const { return ___MeshModifiers_2; }
	inline List_1_t2463477758 ** get_address_of_MeshModifiers_2() { return &___MeshModifiers_2; }
	inline void set_MeshModifiers_2(List_1_t2463477758 * value)
	{
		___MeshModifiers_2 = value;
		Il2CppCodeGenWriteBarrier(&___MeshModifiers_2, value);
	}

	inline static int32_t get_offset_of_GoModifiers_3() { return static_cast<int32_t>(offsetof(ModifierStack_t3654206437, ___GoModifiers_3)); }
	inline List_1_t855658078 * get_GoModifiers_3() const { return ___GoModifiers_3; }
	inline List_1_t855658078 ** get_address_of_GoModifiers_3() { return &___GoModifiers_3; }
	inline void set_GoModifiers_3(List_1_t855658078 * value)
	{
		___GoModifiers_3 = value;
		Il2CppCodeGenWriteBarrier(&___GoModifiers_3, value);
	}
};

struct ModifierStack_t3654206437_StaticFields
{
public:
	// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean> Mapbox.Unity.MeshGeneration.Modifiers.ModifierStack::<>f__am$cache0
	Func_2_t2366681589 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier,System.Boolean> Mapbox.Unity.MeshGeneration.Modifiers.ModifierStack::<>f__am$cache1
	Func_2_t3011440149 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ModifierStack_t3654206437_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t2366681589 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t2366681589 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t2366681589 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ModifierStack_t3654206437_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t3011440149 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t3011440149 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t3011440149 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
