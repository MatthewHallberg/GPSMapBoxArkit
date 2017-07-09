#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Map_Tile1819912606.h"

// Mapbox.VectorTile.VectorTile
struct VectorTile_t2147567419;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.VectorTile
struct  VectorTile_t1808184891  : public Tile_t1819912606
{
public:
	// Mapbox.VectorTile.VectorTile Mapbox.Map.VectorTile::data
	VectorTile_t2147567419 * ___data_6;
	// System.Boolean Mapbox.Map.VectorTile::isDisposed
	bool ___isDisposed_7;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(VectorTile_t1808184891, ___data_6)); }
	inline VectorTile_t2147567419 * get_data_6() const { return ___data_6; }
	inline VectorTile_t2147567419 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(VectorTile_t2147567419 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_6, value);
	}

	inline static int32_t get_offset_of_isDisposed_7() { return static_cast<int32_t>(offsetof(VectorTile_t1808184891, ___isDisposed_7)); }
	inline bool get_isDisposed_7() const { return ___isDisposed_7; }
	inline bool* get_address_of_isDisposed_7() { return &___isDisposed_7; }
	inline void set_isDisposed_7(bool value)
	{
		___isDisposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
