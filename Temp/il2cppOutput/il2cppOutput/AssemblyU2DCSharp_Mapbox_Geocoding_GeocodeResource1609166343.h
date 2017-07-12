#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Mapbox_Platform_Resource2839633034.h"

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

// Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>
struct  GeocodeResource_1_t1609166343  : public Resource_t2839633034
{
public:
	// System.String Mapbox.Geocoding.GeocodeResource`1::apiEndpoint
	String_t* ___apiEndpoint_5;
	// System.String Mapbox.Geocoding.GeocodeResource`1::mode
	String_t* ___mode_6;
	// System.String[] Mapbox.Geocoding.GeocodeResource`1::types
	StringU5BU5D_t1642385972* ___types_7;

public:
	inline static int32_t get_offset_of_apiEndpoint_5() { return static_cast<int32_t>(offsetof(GeocodeResource_1_t1609166343, ___apiEndpoint_5)); }
	inline String_t* get_apiEndpoint_5() const { return ___apiEndpoint_5; }
	inline String_t** get_address_of_apiEndpoint_5() { return &___apiEndpoint_5; }
	inline void set_apiEndpoint_5(String_t* value)
	{
		___apiEndpoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___apiEndpoint_5, value);
	}

	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(GeocodeResource_1_t1609166343, ___mode_6)); }
	inline String_t* get_mode_6() const { return ___mode_6; }
	inline String_t** get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(String_t* value)
	{
		___mode_6 = value;
		Il2CppCodeGenWriteBarrier(&___mode_6, value);
	}

	inline static int32_t get_offset_of_types_7() { return static_cast<int32_t>(offsetof(GeocodeResource_1_t1609166343, ___types_7)); }
	inline StringU5BU5D_t1642385972* get_types_7() const { return ___types_7; }
	inline StringU5BU5D_t1642385972** get_address_of_types_7() { return &___types_7; }
	inline void set_types_7(StringU5BU5D_t1642385972* value)
	{
		___types_7 = value;
		Il2CppCodeGenWriteBarrier(&___types_7, value);
	}
};

struct GeocodeResource_1_t1609166343_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> Mapbox.Geocoding.GeocodeResource`1::FeatureTypes
	List_1_t1398341365 * ___FeatureTypes_4;

public:
	inline static int32_t get_offset_of_FeatureTypes_4() { return static_cast<int32_t>(offsetof(GeocodeResource_1_t1609166343_StaticFields, ___FeatureTypes_4)); }
	inline List_1_t1398341365 * get_FeatureTypes_4() const { return ___FeatureTypes_4; }
	inline List_1_t1398341365 ** get_address_of_FeatureTypes_4() { return &___FeatureTypes_4; }
	inline void set_FeatureTypes_4(List_1_t1398341365 * value)
	{
		___FeatureTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___FeatureTypes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
