#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen1031602313.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Mapbox.Geocoding.Geometry
struct Geometry_t3071474686;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t3313120627;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.Feature
struct  Feature_t190893904  : public Il2CppObject
{
public:
	// System.String Mapbox.Geocoding.Feature::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Mapbox.Geocoding.Feature::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.String Mapbox.Geocoding.Feature::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.String Mapbox.Geocoding.Feature::<PlaceName>k__BackingField
	String_t* ___U3CPlaceNameU3Ek__BackingField_3;
	// System.Double Mapbox.Geocoding.Feature::<Relevance>k__BackingField
	double ___U3CRelevanceU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Mapbox.Geocoding.Feature::<Properties>k__BackingField
	Dictionary_2_t309261261 * ___U3CPropertiesU3Ek__BackingField_5;
	// System.Nullable`1<Mapbox.Utils.Vector2dBounds> Mapbox.Geocoding.Feature::<Bbox>k__BackingField
	Nullable_1_t1031602313  ___U3CBboxU3Ek__BackingField_6;
	// Mapbox.Utils.Vector2d Mapbox.Geocoding.Feature::<Center>k__BackingField
	Vector2d_t3730485367  ___U3CCenterU3Ek__BackingField_7;
	// Mapbox.Geocoding.Geometry Mapbox.Geocoding.Feature::<Geometry>k__BackingField
	Geometry_t3071474686 * ___U3CGeometryU3Ek__BackingField_8;
	// System.String Mapbox.Geocoding.Feature::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Mapbox.Geocoding.Feature::<Context>k__BackingField
	List_1_t3313120627 * ___U3CContextU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTextU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CPlaceNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CPlaceNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPlaceNameU3Ek__BackingField_3() const { return ___U3CPlaceNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPlaceNameU3Ek__BackingField_3() { return &___U3CPlaceNameU3Ek__BackingField_3; }
	inline void set_U3CPlaceNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPlaceNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlaceNameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CRelevanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CRelevanceU3Ek__BackingField_4)); }
	inline double get_U3CRelevanceU3Ek__BackingField_4() const { return ___U3CRelevanceU3Ek__BackingField_4; }
	inline double* get_address_of_U3CRelevanceU3Ek__BackingField_4() { return &___U3CRelevanceU3Ek__BackingField_4; }
	inline void set_U3CRelevanceU3Ek__BackingField_4(double value)
	{
		___U3CRelevanceU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CPropertiesU3Ek__BackingField_5)); }
	inline Dictionary_2_t309261261 * get_U3CPropertiesU3Ek__BackingField_5() const { return ___U3CPropertiesU3Ek__BackingField_5; }
	inline Dictionary_2_t309261261 ** get_address_of_U3CPropertiesU3Ek__BackingField_5() { return &___U3CPropertiesU3Ek__BackingField_5; }
	inline void set_U3CPropertiesU3Ek__BackingField_5(Dictionary_2_t309261261 * value)
	{
		___U3CPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertiesU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CBboxU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CBboxU3Ek__BackingField_6)); }
	inline Nullable_1_t1031602313  get_U3CBboxU3Ek__BackingField_6() const { return ___U3CBboxU3Ek__BackingField_6; }
	inline Nullable_1_t1031602313 * get_address_of_U3CBboxU3Ek__BackingField_6() { return &___U3CBboxU3Ek__BackingField_6; }
	inline void set_U3CBboxU3Ek__BackingField_6(Nullable_1_t1031602313  value)
	{
		___U3CBboxU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CCenterU3Ek__BackingField_7)); }
	inline Vector2d_t3730485367  get_U3CCenterU3Ek__BackingField_7() const { return ___U3CCenterU3Ek__BackingField_7; }
	inline Vector2d_t3730485367 * get_address_of_U3CCenterU3Ek__BackingField_7() { return &___U3CCenterU3Ek__BackingField_7; }
	inline void set_U3CCenterU3Ek__BackingField_7(Vector2d_t3730485367  value)
	{
		___U3CCenterU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CGeometryU3Ek__BackingField_8)); }
	inline Geometry_t3071474686 * get_U3CGeometryU3Ek__BackingField_8() const { return ___U3CGeometryU3Ek__BackingField_8; }
	inline Geometry_t3071474686 ** get_address_of_U3CGeometryU3Ek__BackingField_8() { return &___U3CGeometryU3Ek__BackingField_8; }
	inline void set_U3CGeometryU3Ek__BackingField_8(Geometry_t3071474686 * value)
	{
		___U3CGeometryU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGeometryU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CAddressU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CAddressU3Ek__BackingField_9)); }
	inline String_t* get_U3CAddressU3Ek__BackingField_9() const { return ___U3CAddressU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CAddressU3Ek__BackingField_9() { return &___U3CAddressU3Ek__BackingField_9; }
	inline void set_U3CAddressU3Ek__BackingField_9(String_t* value)
	{
		___U3CAddressU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAddressU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Feature_t190893904, ___U3CContextU3Ek__BackingField_10)); }
	inline List_1_t3313120627 * get_U3CContextU3Ek__BackingField_10() const { return ___U3CContextU3Ek__BackingField_10; }
	inline List_1_t3313120627 ** get_address_of_U3CContextU3Ek__BackingField_10() { return &___U3CContextU3Ek__BackingField_10; }
	inline void set_U3CContextU3Ek__BackingField_10(List_1_t3313120627 * value)
	{
		___U3CContextU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContextU3Ek__BackingField_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
