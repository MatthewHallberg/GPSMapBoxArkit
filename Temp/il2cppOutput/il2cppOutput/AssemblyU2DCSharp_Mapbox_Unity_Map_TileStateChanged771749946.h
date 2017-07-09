#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_Mapbox_Map_UnwrappedTileId2874398135.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.TileStateChangedEventArgs
struct  TileStateChangedEventArgs_t771749946  : public EventArgs_t3289624707
{
public:
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.Map.TileStateChangedEventArgs::TileId
	UnwrappedTileId_t2874398135  ___TileId_1;

public:
	inline static int32_t get_offset_of_TileId_1() { return static_cast<int32_t>(offsetof(TileStateChangedEventArgs_t771749946, ___TileId_1)); }
	inline UnwrappedTileId_t2874398135  get_TileId_1() const { return ___TileId_1; }
	inline UnwrappedTileId_t2874398135 * get_address_of_TileId_1() { return &___TileId_1; }
	inline void set_TileId_1(UnwrappedTileId_t2874398135  value)
	{
		___TileId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
