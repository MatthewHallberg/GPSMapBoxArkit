#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact1211905786.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase>
struct List_1_t4287465764;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase>>
struct Dictionary_2_t1907277730;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.MeshFactory
struct  MeshFactory_t3300610413  : public AbstractTileFactory_t1211905786
{
public:
	// System.String Mapbox.Unity.MeshGeneration.Factories.MeshFactory::_mapId
	String_t* ____mapId_7;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase> Mapbox.Unity.MeshGeneration.Factories.MeshFactory::Visualizers
	List_1_t4287465764 * ___Visualizers_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase>> Mapbox.Unity.MeshGeneration.Factories.MeshFactory::_layerBuilder
	Dictionary_2_t1907277730 * ____layerBuilder_9;

public:
	inline static int32_t get_offset_of__mapId_7() { return static_cast<int32_t>(offsetof(MeshFactory_t3300610413, ____mapId_7)); }
	inline String_t* get__mapId_7() const { return ____mapId_7; }
	inline String_t** get_address_of__mapId_7() { return &____mapId_7; }
	inline void set__mapId_7(String_t* value)
	{
		____mapId_7 = value;
		Il2CppCodeGenWriteBarrier(&____mapId_7, value);
	}

	inline static int32_t get_offset_of_Visualizers_8() { return static_cast<int32_t>(offsetof(MeshFactory_t3300610413, ___Visualizers_8)); }
	inline List_1_t4287465764 * get_Visualizers_8() const { return ___Visualizers_8; }
	inline List_1_t4287465764 ** get_address_of_Visualizers_8() { return &___Visualizers_8; }
	inline void set_Visualizers_8(List_1_t4287465764 * value)
	{
		___Visualizers_8 = value;
		Il2CppCodeGenWriteBarrier(&___Visualizers_8, value);
	}

	inline static int32_t get_offset_of__layerBuilder_9() { return static_cast<int32_t>(offsetof(MeshFactory_t3300610413, ____layerBuilder_9)); }
	inline Dictionary_2_t1907277730 * get__layerBuilder_9() const { return ____layerBuilder_9; }
	inline Dictionary_2_t1907277730 ** get_address_of__layerBuilder_9() { return &____layerBuilder_9; }
	inline void set__layerBuilder_9(Dictionary_2_t1907277730 * value)
	{
		____layerBuilder_9 = value;
		Il2CppCodeGenWriteBarrier(&____layerBuilder_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
