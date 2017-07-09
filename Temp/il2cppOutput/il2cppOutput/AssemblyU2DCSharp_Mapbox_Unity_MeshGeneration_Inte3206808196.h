#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Inter623377336.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Filters.FilterBase>
struct List_1_t2762929583;
// Mapbox.Unity.MeshGeneration.Modifiers.ModifierStackBase
struct ModifierStackBase_t2178605430;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.TypeVisualizerTuple>
struct List_1_t489940714;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer
struct  VectorLayerVisualizer_t3206808196  : public LayerVisualizerBase_t623377336
{
public:
	// System.Boolean Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_subdivideLongEdges
	bool ____subdivideLongEdges_3;
	// System.Int32 Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_maxEdgeSectionCount
	int32_t ____maxEdgeSectionCount_4;
	// System.Int32 Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_preferredEdgeSectionLength
	int32_t ____preferredEdgeSectionLength_5;
	// System.String Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_classificationKey
	String_t* ____classificationKey_6;
	// System.String Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_key
	String_t* ____key_7;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Filters.FilterBase> Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::Filters
	List_1_t2762929583 * ___Filters_8;
	// Mapbox.Unity.MeshGeneration.Modifiers.ModifierStackBase Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_defaultStack
	ModifierStackBase_t2178605430 * ____defaultStack_9;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.TypeVisualizerTuple> Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::Stacks
	List_1_t489940714 * ___Stacks_10;
	// UnityEngine.GameObject Mapbox.Unity.MeshGeneration.Interfaces.VectorLayerVisualizer::_container
	GameObject_t1756533147 * ____container_11;

public:
	inline static int32_t get_offset_of__subdivideLongEdges_3() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____subdivideLongEdges_3)); }
	inline bool get__subdivideLongEdges_3() const { return ____subdivideLongEdges_3; }
	inline bool* get_address_of__subdivideLongEdges_3() { return &____subdivideLongEdges_3; }
	inline void set__subdivideLongEdges_3(bool value)
	{
		____subdivideLongEdges_3 = value;
	}

	inline static int32_t get_offset_of__maxEdgeSectionCount_4() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____maxEdgeSectionCount_4)); }
	inline int32_t get__maxEdgeSectionCount_4() const { return ____maxEdgeSectionCount_4; }
	inline int32_t* get_address_of__maxEdgeSectionCount_4() { return &____maxEdgeSectionCount_4; }
	inline void set__maxEdgeSectionCount_4(int32_t value)
	{
		____maxEdgeSectionCount_4 = value;
	}

	inline static int32_t get_offset_of__preferredEdgeSectionLength_5() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____preferredEdgeSectionLength_5)); }
	inline int32_t get__preferredEdgeSectionLength_5() const { return ____preferredEdgeSectionLength_5; }
	inline int32_t* get_address_of__preferredEdgeSectionLength_5() { return &____preferredEdgeSectionLength_5; }
	inline void set__preferredEdgeSectionLength_5(int32_t value)
	{
		____preferredEdgeSectionLength_5 = value;
	}

	inline static int32_t get_offset_of__classificationKey_6() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____classificationKey_6)); }
	inline String_t* get__classificationKey_6() const { return ____classificationKey_6; }
	inline String_t** get_address_of__classificationKey_6() { return &____classificationKey_6; }
	inline void set__classificationKey_6(String_t* value)
	{
		____classificationKey_6 = value;
		Il2CppCodeGenWriteBarrier(&____classificationKey_6, value);
	}

	inline static int32_t get_offset_of__key_7() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____key_7)); }
	inline String_t* get__key_7() const { return ____key_7; }
	inline String_t** get_address_of__key_7() { return &____key_7; }
	inline void set__key_7(String_t* value)
	{
		____key_7 = value;
		Il2CppCodeGenWriteBarrier(&____key_7, value);
	}

	inline static int32_t get_offset_of_Filters_8() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ___Filters_8)); }
	inline List_1_t2762929583 * get_Filters_8() const { return ___Filters_8; }
	inline List_1_t2762929583 ** get_address_of_Filters_8() { return &___Filters_8; }
	inline void set_Filters_8(List_1_t2762929583 * value)
	{
		___Filters_8 = value;
		Il2CppCodeGenWriteBarrier(&___Filters_8, value);
	}

	inline static int32_t get_offset_of__defaultStack_9() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____defaultStack_9)); }
	inline ModifierStackBase_t2178605430 * get__defaultStack_9() const { return ____defaultStack_9; }
	inline ModifierStackBase_t2178605430 ** get_address_of__defaultStack_9() { return &____defaultStack_9; }
	inline void set__defaultStack_9(ModifierStackBase_t2178605430 * value)
	{
		____defaultStack_9 = value;
		Il2CppCodeGenWriteBarrier(&____defaultStack_9, value);
	}

	inline static int32_t get_offset_of_Stacks_10() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ___Stacks_10)); }
	inline List_1_t489940714 * get_Stacks_10() const { return ___Stacks_10; }
	inline List_1_t489940714 ** get_address_of_Stacks_10() { return &___Stacks_10; }
	inline void set_Stacks_10(List_1_t489940714 * value)
	{
		___Stacks_10 = value;
		Il2CppCodeGenWriteBarrier(&___Stacks_10, value);
	}

	inline static int32_t get_offset_of__container_11() { return static_cast<int32_t>(offsetof(VectorLayerVisualizer_t3206808196, ____container_11)); }
	inline GameObject_t1756533147 * get__container_11() const { return ____container_11; }
	inline GameObject_t1756533147 ** get_address_of__container_11() { return &____container_11; }
	inline void set__container_11(GameObject_t1756533147 * value)
	{
		____container_11 = value;
		Il2CppCodeGenWriteBarrier(&____container_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
