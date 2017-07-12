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
// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Int32>
struct Dictionary_2_t2047050788;
// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Data.MeshData>>
struct Dictionary_2_t979960661;
// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean>
struct Func_2_t2366681589;
// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier,System.Boolean>
struct Func_2_t3011440149;
// System.Func`2<Mapbox.Unity.MeshGeneration.Data.MeshData,System.Boolean>
struct Func_2_t681800494;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack
struct  MergedModifierStack_t2612880665  : public ModifierStackBase_t2178605430
{
public:
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::MeshModifiers
	List_1_t2463477758 * ___MeshModifiers_2;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::GoModifiers
	List_1_t855658078 * ___GoModifiers_3;
	// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Int32> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::_cacheVertexCount
	Dictionary_2_t2047050788 * ____cacheVertexCount_4;
	// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Data.MeshData>> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::_cached
	Dictionary_2_t979960661 * ____cached_5;
	// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Int32> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::_buildingCount
	Dictionary_2_t2047050788 * ____buildingCount_6;

public:
	inline static int32_t get_offset_of_MeshModifiers_2() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665, ___MeshModifiers_2)); }
	inline List_1_t2463477758 * get_MeshModifiers_2() const { return ___MeshModifiers_2; }
	inline List_1_t2463477758 ** get_address_of_MeshModifiers_2() { return &___MeshModifiers_2; }
	inline void set_MeshModifiers_2(List_1_t2463477758 * value)
	{
		___MeshModifiers_2 = value;
		Il2CppCodeGenWriteBarrier(&___MeshModifiers_2, value);
	}

	inline static int32_t get_offset_of_GoModifiers_3() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665, ___GoModifiers_3)); }
	inline List_1_t855658078 * get_GoModifiers_3() const { return ___GoModifiers_3; }
	inline List_1_t855658078 ** get_address_of_GoModifiers_3() { return &___GoModifiers_3; }
	inline void set_GoModifiers_3(List_1_t855658078 * value)
	{
		___GoModifiers_3 = value;
		Il2CppCodeGenWriteBarrier(&___GoModifiers_3, value);
	}

	inline static int32_t get_offset_of__cacheVertexCount_4() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665, ____cacheVertexCount_4)); }
	inline Dictionary_2_t2047050788 * get__cacheVertexCount_4() const { return ____cacheVertexCount_4; }
	inline Dictionary_2_t2047050788 ** get_address_of__cacheVertexCount_4() { return &____cacheVertexCount_4; }
	inline void set__cacheVertexCount_4(Dictionary_2_t2047050788 * value)
	{
		____cacheVertexCount_4 = value;
		Il2CppCodeGenWriteBarrier(&____cacheVertexCount_4, value);
	}

	inline static int32_t get_offset_of__cached_5() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665, ____cached_5)); }
	inline Dictionary_2_t979960661 * get__cached_5() const { return ____cached_5; }
	inline Dictionary_2_t979960661 ** get_address_of__cached_5() { return &____cached_5; }
	inline void set__cached_5(Dictionary_2_t979960661 * value)
	{
		____cached_5 = value;
		Il2CppCodeGenWriteBarrier(&____cached_5, value);
	}

	inline static int32_t get_offset_of__buildingCount_6() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665, ____buildingCount_6)); }
	inline Dictionary_2_t2047050788 * get__buildingCount_6() const { return ____buildingCount_6; }
	inline Dictionary_2_t2047050788 ** get_address_of__buildingCount_6() { return &____buildingCount_6; }
	inline void set__buildingCount_6(Dictionary_2_t2047050788 * value)
	{
		____buildingCount_6 = value;
		Il2CppCodeGenWriteBarrier(&____buildingCount_6, value);
	}
};

struct MergedModifierStack_t2612880665_StaticFields
{
public:
	// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier,System.Boolean> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::<>f__am$cache0
	Func_2_t2366681589 * ___U3CU3Ef__amU24cache0_7;
	// System.Func`2<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier,System.Boolean> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::<>f__am$cache1
	Func_2_t3011440149 * ___U3CU3Ef__amU24cache1_8;
	// System.Func`2<Mapbox.Unity.MeshGeneration.Data.MeshData,System.Boolean> Mapbox.Unity.MeshGeneration.Modifiers.MergedModifierStack::<>f__am$cache2
	Func_2_t681800494 * ___U3CU3Ef__amU24cache2_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t2366681589 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t2366681589 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t2366681589 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Func_2_t3011440149 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Func_2_t3011440149 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Func_2_t3011440149 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(MergedModifierStack_t2612880665_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline Func_2_t681800494 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline Func_2_t681800494 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(Func_2_t681800494 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
