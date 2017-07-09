#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3258436990.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen4256230642.h"
#include "mscorlib_System_Nullable_1_gen2828207672.h"
#include "mscorlib_System_Nullable_1_gen670699445.h"
#include "mscorlib_System_Nullable_1_gen1181254828.h"
#include "mscorlib_System_Nullable_1_gen952719577.h"

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Mapbox.Json.Serialization.JsonContract
struct JsonContract_t3987907316;
// Mapbox.Json.Serialization.IValueProvider
struct IValueProvider_t3084354733;
// Mapbox.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t2197572266;
// Mapbox.Json.JsonConverter
struct JsonConverter_t320544374;
// System.Predicate`1<System.Object>
struct Predicate_1_t1132419410;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Serialization.JsonProperty
struct  JsonProperty_t33522267  : public Il2CppObject
{
public:
	// System.Nullable`1<Mapbox.Json.Required> Mapbox.Json.Serialization.JsonProperty::_required
	Nullable_1_t3258436990  ____required_0;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Mapbox.Json.Serialization.JsonProperty::_defaultValue
	Il2CppObject * ____defaultValue_2;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Mapbox.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Mapbox.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Mapbox.Json.Serialization.JsonContract Mapbox.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_t3987907316 * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Mapbox.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Mapbox.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t334943763  ___U3COrderU3Ek__BackingField_9;
	// System.String Mapbox.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Mapbox.Json.Serialization.IValueProvider Mapbox.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	Il2CppObject * ___U3CValueProviderU3Ek__BackingField_11;
	// Mapbox.Json.Serialization.IAttributeProvider Mapbox.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	Il2CppObject * ___U3CAttributeProviderU3Ek__BackingField_12;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t320544374 * ___U3CConverterU3Ek__BackingField_13;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<MemberConverter>k__BackingField
	JsonConverter_t320544374 * ___U3CMemberConverterU3Ek__BackingField_14;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_15;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_16;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_17;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_18;
	// System.Nullable`1<System.Boolean> Mapbox.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t2088641033  ___U3CIsReferenceU3Ek__BackingField_19;
	// System.Nullable`1<Mapbox.Json.NullValueHandling> Mapbox.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t4256230642  ___U3CNullValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Mapbox.Json.DefaultValueHandling> Mapbox.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t2828207672  ___U3CDefaultValueHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling> Mapbox.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t670699445  ___U3CReferenceLoopHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Mapbox.Json.ObjectCreationHandling> Mapbox.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t1181254828  ___U3CObjectCreationHandlingU3Ek__BackingField_23;
	// System.Nullable`1<Mapbox.Json.TypeNameHandling> Mapbox.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t952719577  ___U3CTypeNameHandlingU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t1132419410 * ___U3CShouldSerializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t1132419410 * ___U3CShouldDeserializeU3Ek__BackingField_26;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t1132419410 * ___U3CGetIsSpecifiedU3Ek__BackingField_27;
	// System.Action`2<System.Object,System.Object> Mapbox.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t2572051853 * ___U3CSetIsSpecifiedU3Ek__BackingField_28;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t320544374 * ___U3CItemConverterU3Ek__BackingField_29;
	// System.Nullable`1<System.Boolean> Mapbox.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t2088641033  ___U3CItemIsReferenceU3Ek__BackingField_30;
	// System.Nullable`1<Mapbox.Json.TypeNameHandling> Mapbox.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t952719577  ___U3CItemTypeNameHandlingU3Ek__BackingField_31;
	// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling> Mapbox.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t670699445  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____required_0)); }
	inline Nullable_1_t3258436990  get__required_0() const { return ____required_0; }
	inline Nullable_1_t3258436990 * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_t3258436990  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____defaultValue_2)); }
	inline Il2CppObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline Il2CppObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(Il2CppObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier(&____defaultValue_2, value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier(&____propertyName_4, value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier(&____propertyType_6, value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_t3987907316 * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_t3987907316 ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_t3987907316 * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertyContractU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeclaringTypeU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t334943763  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t334943763 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t334943763  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnderlyingNameU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline Il2CppObject * get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline Il2CppObject ** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(Il2CppObject * value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueProviderU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline Il2CppObject * get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline Il2CppObject ** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(Il2CppObject * value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAttributeProviderU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t320544374 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t320544374 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t320544374 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConverterU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CMemberConverterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CMemberConverterU3Ek__BackingField_14)); }
	inline JsonConverter_t320544374 * get_U3CMemberConverterU3Ek__BackingField_14() const { return ___U3CMemberConverterU3Ek__BackingField_14; }
	inline JsonConverter_t320544374 ** get_address_of_U3CMemberConverterU3Ek__BackingField_14() { return &___U3CMemberConverterU3Ek__BackingField_14; }
	inline void set_U3CMemberConverterU3Ek__BackingField_14(JsonConverter_t320544374 * value)
	{
		___U3CMemberConverterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMemberConverterU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CIgnoredU3Ek__BackingField_15)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_15() const { return ___U3CIgnoredU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_15() { return &___U3CIgnoredU3Ek__BackingField_15; }
	inline void set_U3CIgnoredU3Ek__BackingField_15(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CReadableU3Ek__BackingField_16)); }
	inline bool get_U3CReadableU3Ek__BackingField_16() const { return ___U3CReadableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_16() { return &___U3CReadableU3Ek__BackingField_16; }
	inline void set_U3CReadableU3Ek__BackingField_16(bool value)
	{
		___U3CReadableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CWritableU3Ek__BackingField_17)); }
	inline bool get_U3CWritableU3Ek__BackingField_17() const { return ___U3CWritableU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_17() { return &___U3CWritableU3Ek__BackingField_17; }
	inline void set_U3CWritableU3Ek__BackingField_17(bool value)
	{
		___U3CWritableU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CHasMemberAttributeU3Ek__BackingField_18)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_18() const { return ___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return &___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_18(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CIsReferenceU3Ek__BackingField_19)); }
	inline Nullable_1_t2088641033  get_U3CIsReferenceU3Ek__BackingField_19() const { return ___U3CIsReferenceU3Ek__BackingField_19; }
	inline Nullable_1_t2088641033 * get_address_of_U3CIsReferenceU3Ek__BackingField_19() { return &___U3CIsReferenceU3Ek__BackingField_19; }
	inline void set_U3CIsReferenceU3Ek__BackingField_19(Nullable_1_t2088641033  value)
	{
		___U3CIsReferenceU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CNullValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_t4256230642  get_U3CNullValueHandlingU3Ek__BackingField_20() const { return ___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_t4256230642 * get_address_of_U3CNullValueHandlingU3Ek__BackingField_20() { return &___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_20(Nullable_1_t4256230642  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CDefaultValueHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t2828207672  get_U3CDefaultValueHandlingU3Ek__BackingField_21() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t2828207672 * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return &___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_21(Nullable_1_t2828207672  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CReferenceLoopHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t670699445  get_U3CReferenceLoopHandlingU3Ek__BackingField_22() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t670699445 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_22(Nullable_1_t670699445  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CObjectCreationHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_t1181254828  get_U3CObjectCreationHandlingU3Ek__BackingField_23() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline Nullable_1_t1181254828 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return &___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_23(Nullable_1_t1181254828  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CTypeNameHandlingU3Ek__BackingField_24)); }
	inline Nullable_1_t952719577  get_U3CTypeNameHandlingU3Ek__BackingField_24() const { return ___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline Nullable_1_t952719577 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return &___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_24(Nullable_1_t952719577  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CShouldSerializeU3Ek__BackingField_25)); }
	inline Predicate_1_t1132419410 * get_U3CShouldSerializeU3Ek__BackingField_25() const { return ___U3CShouldSerializeU3Ek__BackingField_25; }
	inline Predicate_1_t1132419410 ** get_address_of_U3CShouldSerializeU3Ek__BackingField_25() { return &___U3CShouldSerializeU3Ek__BackingField_25; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_25(Predicate_1_t1132419410 * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CShouldSerializeU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CShouldDeserializeU3Ek__BackingField_26)); }
	inline Predicate_1_t1132419410 * get_U3CShouldDeserializeU3Ek__BackingField_26() const { return ___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline Predicate_1_t1132419410 ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_26() { return &___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_26(Predicate_1_t1132419410 * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CShouldDeserializeU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CGetIsSpecifiedU3Ek__BackingField_27)); }
	inline Predicate_1_t1132419410 * get_U3CGetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline Predicate_1_t1132419410 ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return &___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_27(Predicate_1_t1132419410 * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGetIsSpecifiedU3Ek__BackingField_27, value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CSetIsSpecifiedU3Ek__BackingField_28)); }
	inline Action_2_t2572051853 * get_U3CSetIsSpecifiedU3Ek__BackingField_28() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline Action_2_t2572051853 ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return &___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_28(Action_2_t2572051853 * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetIsSpecifiedU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CItemConverterU3Ek__BackingField_29)); }
	inline JsonConverter_t320544374 * get_U3CItemConverterU3Ek__BackingField_29() const { return ___U3CItemConverterU3Ek__BackingField_29; }
	inline JsonConverter_t320544374 ** get_address_of_U3CItemConverterU3Ek__BackingField_29() { return &___U3CItemConverterU3Ek__BackingField_29; }
	inline void set_U3CItemConverterU3Ek__BackingField_29(JsonConverter_t320544374 * value)
	{
		___U3CItemConverterU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CItemIsReferenceU3Ek__BackingField_30)); }
	inline Nullable_1_t2088641033  get_U3CItemIsReferenceU3Ek__BackingField_30() const { return ___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline Nullable_1_t2088641033 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_30() { return &___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_30(Nullable_1_t2088641033  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CItemTypeNameHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t952719577  get_U3CItemTypeNameHandlingU3Ek__BackingField_31() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t952719577 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_31(Nullable_1_t952719577  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonProperty_t33522267, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32)); }
	inline Nullable_1_t670699445  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline Nullable_1_t670699445 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_32(Nullable_1_t670699445  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
