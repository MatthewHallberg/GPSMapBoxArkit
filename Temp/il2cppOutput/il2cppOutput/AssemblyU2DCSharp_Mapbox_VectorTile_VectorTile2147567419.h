#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.VectorTile.VectorTileReader
struct VectorTileReader_t3775647326;
// System.Collections.Generic.List`1<Mapbox.VectorTile.VectorTileLayer>
struct List_1_t2485696722;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.VectorTile
struct  VectorTile_t2147567419  : public Il2CppObject
{
public:
	// Mapbox.VectorTile.VectorTileReader Mapbox.VectorTile.VectorTile::_VTR
	VectorTileReader_t3775647326 * ____VTR_0;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.VectorTileLayer> Mapbox.VectorTile.VectorTile::_Layers
	List_1_t2485696722 * ____Layers_1;

public:
	inline static int32_t get_offset_of__VTR_0() { return static_cast<int32_t>(offsetof(VectorTile_t2147567419, ____VTR_0)); }
	inline VectorTileReader_t3775647326 * get__VTR_0() const { return ____VTR_0; }
	inline VectorTileReader_t3775647326 ** get_address_of__VTR_0() { return &____VTR_0; }
	inline void set__VTR_0(VectorTileReader_t3775647326 * value)
	{
		____VTR_0 = value;
		Il2CppCodeGenWriteBarrier(&____VTR_0, value);
	}

	inline static int32_t get_offset_of__Layers_1() { return static_cast<int32_t>(offsetof(VectorTile_t2147567419, ____Layers_1)); }
	inline List_1_t2485696722 * get__Layers_1() const { return ____Layers_1; }
	inline List_1_t2485696722 ** get_address_of__Layers_1() { return &____Layers_1; }
	inline void set__Layers_1(List_1_t2485696722 * value)
	{
		____Layers_1 = value;
		Il2CppCodeGenWriteBarrier(&____Layers_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
