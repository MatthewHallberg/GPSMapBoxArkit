#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Filt3393808451.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Filt1310109609.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Filters.TypeFilter
struct  TypeFilter_t4018508360  : public FilterBase_t3393808451
{
public:
	// System.String Mapbox.Unity.MeshGeneration.Filters.TypeFilter::_type
	String_t* ____type_2;
	// Mapbox.Unity.MeshGeneration.Filters.TypeFilter/TypeFilterType Mapbox.Unity.MeshGeneration.Filters.TypeFilter::_behaviour
	int32_t ____behaviour_3;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(TypeFilter_t4018508360, ____type_2)); }
	inline String_t* get__type_2() const { return ____type_2; }
	inline String_t** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(String_t* value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier(&____type_2, value);
	}

	inline static int32_t get_offset_of__behaviour_3() { return static_cast<int32_t>(offsetof(TypeFilter_t4018508360, ____behaviour_3)); }
	inline int32_t get__behaviour_3() const { return ____behaviour_3; }
	inline int32_t* get_address_of__behaviour_3() { return &____behaviour_3; }
	inline void set__behaviour_3(int32_t value)
	{
		____behaviour_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
