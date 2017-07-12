#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact1211905786.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Fact2114905737.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.MapImageFactory
struct  MapImageFactory_t2158287103  : public AbstractTileFactory_t1211905786
{
public:
	// Mapbox.Unity.MeshGeneration.Factories.MapImageType Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_mapIdType
	int32_t ____mapIdType_7;
	// System.String Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_customMapId
	String_t* ____customMapId_8;
	// System.String Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_mapId
	String_t* ____mapId_9;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_useCompression
	bool ____useCompression_10;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_useMipMap
	bool ____useMipMap_11;
	// System.Boolean Mapbox.Unity.MeshGeneration.Factories.MapImageFactory::_useRetina
	bool ____useRetina_12;

public:
	inline static int32_t get_offset_of__mapIdType_7() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____mapIdType_7)); }
	inline int32_t get__mapIdType_7() const { return ____mapIdType_7; }
	inline int32_t* get_address_of__mapIdType_7() { return &____mapIdType_7; }
	inline void set__mapIdType_7(int32_t value)
	{
		____mapIdType_7 = value;
	}

	inline static int32_t get_offset_of__customMapId_8() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____customMapId_8)); }
	inline String_t* get__customMapId_8() const { return ____customMapId_8; }
	inline String_t** get_address_of__customMapId_8() { return &____customMapId_8; }
	inline void set__customMapId_8(String_t* value)
	{
		____customMapId_8 = value;
		Il2CppCodeGenWriteBarrier(&____customMapId_8, value);
	}

	inline static int32_t get_offset_of__mapId_9() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____mapId_9)); }
	inline String_t* get__mapId_9() const { return ____mapId_9; }
	inline String_t** get_address_of__mapId_9() { return &____mapId_9; }
	inline void set__mapId_9(String_t* value)
	{
		____mapId_9 = value;
		Il2CppCodeGenWriteBarrier(&____mapId_9, value);
	}

	inline static int32_t get_offset_of__useCompression_10() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____useCompression_10)); }
	inline bool get__useCompression_10() const { return ____useCompression_10; }
	inline bool* get_address_of__useCompression_10() { return &____useCompression_10; }
	inline void set__useCompression_10(bool value)
	{
		____useCompression_10 = value;
	}

	inline static int32_t get_offset_of__useMipMap_11() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____useMipMap_11)); }
	inline bool get__useMipMap_11() const { return ____useMipMap_11; }
	inline bool* get_address_of__useMipMap_11() { return &____useMipMap_11; }
	inline void set__useMipMap_11(bool value)
	{
		____useMipMap_11 = value;
	}

	inline static int32_t get_offset_of__useRetina_12() { return static_cast<int32_t>(offsetof(MapImageFactory_t2158287103, ____useRetina_12)); }
	inline bool get__useRetina_12() const { return ____useRetina_12; }
	inline bool* get_address_of__useRetina_12() { return &____useRetina_12; }
	inline void set__useRetina_12(bool value)
	{
		____useRetina_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
