#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Geocoding_GeocodeResource4202868505.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen1993551682.h"
#include "mscorlib_System_Nullable_1_gen1031602313.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.ForwardGeocodeResource
struct  ForwardGeocodeResource_t949712485  : public GeocodeResource_1_t4202868505
{
public:
	// System.String Mapbox.Geocoding.ForwardGeocodeResource::query
	String_t* ___query_9;
	// System.Nullable`1<System.Boolean> Mapbox.Geocoding.ForwardGeocodeResource::autocomplete
	Nullable_1_t2088641033  ___autocomplete_10;
	// System.String[] Mapbox.Geocoding.ForwardGeocodeResource::country
	StringU5BU5D_t1642385972* ___country_11;
	// System.Nullable`1<Mapbox.Utils.Vector2d> Mapbox.Geocoding.ForwardGeocodeResource::proximity
	Nullable_1_t1993551682  ___proximity_12;
	// System.Nullable`1<Mapbox.Utils.Vector2dBounds> Mapbox.Geocoding.ForwardGeocodeResource::bbox
	Nullable_1_t1031602313  ___bbox_13;

public:
	inline static int32_t get_offset_of_query_9() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485, ___query_9)); }
	inline String_t* get_query_9() const { return ___query_9; }
	inline String_t** get_address_of_query_9() { return &___query_9; }
	inline void set_query_9(String_t* value)
	{
		___query_9 = value;
		Il2CppCodeGenWriteBarrier(&___query_9, value);
	}

	inline static int32_t get_offset_of_autocomplete_10() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485, ___autocomplete_10)); }
	inline Nullable_1_t2088641033  get_autocomplete_10() const { return ___autocomplete_10; }
	inline Nullable_1_t2088641033 * get_address_of_autocomplete_10() { return &___autocomplete_10; }
	inline void set_autocomplete_10(Nullable_1_t2088641033  value)
	{
		___autocomplete_10 = value;
	}

	inline static int32_t get_offset_of_country_11() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485, ___country_11)); }
	inline StringU5BU5D_t1642385972* get_country_11() const { return ___country_11; }
	inline StringU5BU5D_t1642385972** get_address_of_country_11() { return &___country_11; }
	inline void set_country_11(StringU5BU5D_t1642385972* value)
	{
		___country_11 = value;
		Il2CppCodeGenWriteBarrier(&___country_11, value);
	}

	inline static int32_t get_offset_of_proximity_12() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485, ___proximity_12)); }
	inline Nullable_1_t1993551682  get_proximity_12() const { return ___proximity_12; }
	inline Nullable_1_t1993551682 * get_address_of_proximity_12() { return &___proximity_12; }
	inline void set_proximity_12(Nullable_1_t1993551682  value)
	{
		___proximity_12 = value;
	}

	inline static int32_t get_offset_of_bbox_13() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485, ___bbox_13)); }
	inline Nullable_1_t1031602313  get_bbox_13() const { return ___bbox_13; }
	inline Nullable_1_t1031602313 * get_address_of_bbox_13() { return &___bbox_13; }
	inline void set_bbox_13(Nullable_1_t1031602313  value)
	{
		___bbox_13 = value;
	}
};

struct ForwardGeocodeResource_t949712485_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> Mapbox.Geocoding.ForwardGeocodeResource::CountryCodes
	List_1_t1398341365 * ___CountryCodes_8;

public:
	inline static int32_t get_offset_of_CountryCodes_8() { return static_cast<int32_t>(offsetof(ForwardGeocodeResource_t949712485_StaticFields, ___CountryCodes_8)); }
	inline List_1_t1398341365 * get_CountryCodes_8() const { return ___CountryCodes_8; }
	inline List_1_t1398341365 ** get_address_of_CountryCodes_8() { return &___CountryCodes_8; }
	inline void set_CountryCodes_8(List_1_t1398341365 * value)
	{
		___CountryCodes_8 = value;
		Il2CppCodeGenWriteBarrier(&___CountryCodes_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
