#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Map_Tile1819912606.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.RasterTile
struct  RasterTile_t2968865301  : public Tile_t1819912606
{
public:
	// System.Byte[] Mapbox.Map.RasterTile::data
	ByteU5BU5D_t3397334013* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(RasterTile_t2968865301, ___data_6)); }
	inline ByteU5BU5D_t3397334013* get_data_6() const { return ___data_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(ByteU5BU5D_t3397334013* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
