#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_StringReferenceE1971561814.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_StringReference468509308.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_StringUtils2938720936.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_IO_StringWriter4139609088.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_TypeExtensions78252752.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_StringComparison2376310518.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_TypeInformation1879354846.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_PrimitiveTypeCod2643848138.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_TypeNameKey3439097718.h"
#include "Mapbox_Json_Mapbox_Json_Utilities_ValidationUtils1452902978.h"
#include "Mapbox_Json_Mapbox_Json_WriteState1363716636.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ArgumentNullException
struct ArgumentNullException_t628810857;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t279959794;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// Mapbox.Json.Utilities.TypeInformation
struct TypeInformation_t1879354846;
extern const MethodInfo* Array_IndexOf_TisChar_t3454481338_m409358040_MethodInfo_var;
extern const uint32_t StringReferenceExtensions_IndexOf_m1155725760_MetadataUsageId;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t StringUtils_FormatWith_m4252572327_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m2398260569_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m3754520295_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m2971051929_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1334200623;
extern const uint32_t StringUtils_FormatWith_m691297817_MetadataUsageId;
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern Il2CppClass* StringWriter_t4139609088_il2cpp_TypeInfo_var;
extern const uint32_t StringUtils_CreateStringWriter_m3880570622_MetadataUsageId;
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern const uint32_t StringUtils_IsHighSurrogate_m3973365548_MetadataUsageId;
extern const uint32_t StringUtils_IsLowSurrogate_m2732701774_MetadataUsageId;
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2858725202;
extern Il2CppCodeGenString* _stringLiteral3438791774;
extern const uint32_t StringUtils_Trim_m824264370_MetadataUsageId;
extern const uint32_t TypeExtensions_AssignableToTypeName_m3446010276_MetadataUsageId;
extern Il2CppClass* IEnumerable_1_t1595930271_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_1_t3074294349_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t TypeExtensions_ImplementInterface_m3557396941_MetadataUsageId;
extern Il2CppClass* TypeNameKey_t3439097718_il2cpp_TypeInfo_var;
extern const uint32_t TypeNameKey_Equals_m636143312_MetadataUsageId;
extern const uint32_t TypeNameKey_Equals_m533188735_MetadataUsageId;
extern const uint32_t ValidationUtils_ArgumentNotNull_m3266461006_MetadataUsageId;

// System.Char[]
struct CharU5BU5D_t1328083999  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t1664964607  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_TisChar_t3454481338_m409358040_gshared (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* p0, Il2CppChar p1, int32_t p2, int32_t p3, const MethodInfo* method);

// System.Char[] Mapbox.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t1328083999* StringReference_get_Chars_m4091021783 (StringReference_t468509308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m3342602712 (StringReference_t468509308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisChar_t3454481338_m409358040(__this /* static, unused */, p0, p1, p2, p3, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, CharU5BU5D_t1328083999*, Il2CppChar, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisChar_t3454481338_m409358040_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m1606060069 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m1060604932 (StringReference_t468509308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m4230566705 (String_t* __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m691297817 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m3266461006 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, String_t* ___parameterName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m876527052 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, String_t* p1, ObjectU5BU5D_t3614634134* p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m536337337 (StringBuilder_t1221177846 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_InvariantCulture_m398972276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2262370389 (StringWriter_t4139609088 * __this, StringBuilder_t1221177846 * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mapbox.Json.Utilities.MathUtils::IntToHex(System.Int32)
extern "C"  Il2CppChar MathUtils_IntToHex_m1169187058 (Il2CppObject * __this /* static, unused */, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsHighSurrogate(System.Char)
extern "C"  bool Char_IsHighSurrogate_m361050852 (Il2CppObject * __this /* static, unused */, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLowSurrogate(System.Char)
extern "C"  bool Char_IsLowSurrogate_m534472094 (Il2CppObject * __this /* static, unused */, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor()
extern "C"  void ArgumentNullException__ctor_m911049464 (ArgumentNullException_t628810857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m1595007065 (ArgumentOutOfRangeException_t279959794 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m1507160293 (Il2CppObject * __this /* static, unused */, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m12482732 (String_t* __this, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3583817465 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m313908919 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m2968663946 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m2380985836 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m2532060002 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m1733572463 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
extern "C"  bool String_Equals_m2950069882 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mapbox.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m55858761 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m3446010276 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m3557396941 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.Json.Utilities.TypeNameKey::.ctor(System.String,System.String)
extern "C"  void TypeNameKey__ctor_m2967417489 (TypeNameKey_t3439097718 * __this, String_t* ___assemblyName0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.Json.Utilities.TypeNameKey::GetHashCode()
extern "C"  int32_t TypeNameKey_GetHashCode_m1799953872 (TypeNameKey_t3439097718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(Mapbox.Json.Utilities.TypeNameKey)
extern "C"  bool TypeNameKey_Equals_m533188735 (TypeNameKey_t3439097718 * __this, TypeNameKey_t3439097718  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(System.Object)
extern "C"  bool TypeNameKey_Equals_m636143312 (TypeNameKey_t3439097718 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m3380712306 (ArgumentNullException_t628810857 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Mapbox.Json.Utilities.StringReferenceExtensions::IndexOf(Mapbox.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
extern "C"  int32_t StringReferenceExtensions_IndexOf_m1155725760 (Il2CppObject * __this /* static, unused */, StringReference_t468509308  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReferenceExtensions_IndexOf_m1155725760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		CharU5BU5D_t1328083999* L_0 = StringReference_get_Chars_m4091021783((&___s0), /*hidden argument*/NULL);
		Il2CppChar L_1 = ___c1;
		int32_t L_2 = StringReference_get_StartIndex_m3342602712((&___s0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___length3;
		int32_t L_5 = Array_IndexOf_TisChar_t3454481338_m409358040(NULL /*static, unused*/, L_0, L_1, ((int32_t)((int32_t)L_2+(int32_t)L_3)), L_4, /*hidden argument*/Array_IndexOf_TisChar_t3454481338_m409358040_MethodInfo_var);
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = (-1);
		goto IL_0032;
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = StringReference_get_StartIndex_m3342602712((&___s0), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		goto IL_0032;
	}

IL_0032:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringReferenceExtensions::StartsWith(Mapbox.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_StartsWith_m3774859649 (Il2CppObject * __this /* static, unused */, StringReference_t468509308  ___s0, String_t* ___text1, const MethodInfo* method)
{
	CharU5BU5D_t1328083999* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1060604932((&___s0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_0019:
	{
		CharU5BU5D_t1328083999* L_4 = StringReference_get_Chars_m4091021783((&___s0), /*hidden argument*/NULL);
		V_0 = L_4;
		V_3 = 0;
		goto IL_004d;
	}

IL_0025:
	{
		String_t* L_5 = ___text1;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m4230566705(L_5, L_6, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_8 = V_0;
		int32_t L_9 = V_3;
		int32_t L_10 = StringReference_get_StartIndex_m3342602712((&___s0), /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		uint16_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_0048:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_3;
		String_t* L_16 = ___text1;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m1606060069(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringReferenceExtensions::EndsWith(Mapbox.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_EndsWith_m1413732224 (Il2CppObject * __this /* static, unused */, StringReference_t468509308  ___s0, String_t* ___text1, const MethodInfo* method)
{
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1060604932((&___s0), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0077;
	}

IL_0019:
	{
		CharU5BU5D_t1328083999* L_4 = StringReference_get_Chars_m4091021783((&___s0), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = StringReference_get_StartIndex_m3342602712((&___s0), /*hidden argument*/NULL);
		int32_t L_6 = StringReference_get_Length_m1060604932((&___s0), /*hidden argument*/NULL);
		String_t* L_7 = ___text1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1606060069(L_7, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))-(int32_t)L_8));
		V_4 = 0;
		goto IL_0063;
	}

IL_003d:
	{
		String_t* L_9 = ___text1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m4230566705(L_9, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_12 = V_0;
		int32_t L_13 = V_4;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)((int32_t)L_13+(int32_t)L_14));
		uint16_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0077;
	}

IL_005c:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_19 = V_4;
		String_t* L_20 = ___text1;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1606060069(L_20, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_003d;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_23 = V_3;
		return L_23;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m4252572327 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m4252572327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		Il2CppObject * L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		Il2CppObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		String_t* L_4 = StringUtils_FormatWith_m691297817(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2398260569 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m2398260569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		Il2CppObject * L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)2));
		Il2CppObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		Il2CppObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		String_t* L_6 = StringUtils_FormatWith_m691297817(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3754520295 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, Il2CppObject * ___arg24, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m3754520295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		Il2CppObject * L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)3));
		Il2CppObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		Il2CppObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = L_4;
		Il2CppObject * L_7 = ___arg24;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_7);
		String_t* L_8 = StringUtils_FormatWith_m691297817(NULL /*static, unused*/, L_0, L_1, L_6, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2971051929 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, Il2CppObject * ___arg24, Il2CppObject * ___arg35, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m2971051929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		Il2CppObject * L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		Il2CppObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		Il2CppObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = L_4;
		Il2CppObject * L_7 = ___arg24;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_6;
		Il2CppObject * L_9 = ___arg35;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_9);
		String_t* L_10 = StringUtils_FormatWith_m691297817(NULL /*static, unused*/, L_0, L_1, L_8, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0023;
	}

IL_0023:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m691297817 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m691297817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		ValidationUtils_ArgumentNotNull_m3266461006(NULL /*static, unused*/, L_0, _stringLiteral1334200623, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___provider1;
		String_t* L_2 = ___format0;
		ObjectU5BU5D_t3614634134* L_3 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m876527052(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.IO.StringWriter Mapbox.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t4139609088 * StringUtils_CreateStringWriter_m3880570622 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_CreateStringWriter_m3880570622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	StringWriter_t4139609088 * V_1 = NULL;
	StringWriter_t4139609088 * V_2 = NULL;
	{
		int32_t L_0 = ___capacity0;
		StringBuilder_t1221177846 * L_1 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m536337337(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t1221177846 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_3 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t4139609088 * L_4 = (StringWriter_t4139609088 *)il2cpp_codegen_object_new(StringWriter_t4139609088_il2cpp_TypeInfo_var);
		StringWriter__ctor_m2262370389(L_4, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		StringWriter_t4139609088 * L_5 = V_1;
		V_2 = L_5;
		goto IL_0018;
	}

IL_0018:
	{
		StringWriter_t4139609088 * L_6 = V_2;
		return L_6;
	}
}
// System.Void Mapbox.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m414069811 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t1328083999* ___buffer1, const MethodInfo* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = ___buffer1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t1328083999* L_1 = ___buffer1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)117));
		CharU5BU5D_t1328083999* L_2 = ___buffer1;
		Il2CppChar L_3 = ___c0;
		Il2CppChar L_4 = MathUtils_IntToHex_m1169187058(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_4);
		CharU5BU5D_t1328083999* L_5 = ___buffer1;
		Il2CppChar L_6 = ___c0;
		Il2CppChar L_7 = MathUtils_IntToHex_m1169187058(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_7);
		CharU5BU5D_t1328083999* L_8 = ___buffer1;
		Il2CppChar L_9 = ___c0;
		Il2CppChar L_10 = MathUtils_IntToHex_m1169187058(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)L_10);
		CharU5BU5D_t1328083999* L_11 = ___buffer1;
		Il2CppChar L_12 = ___c0;
		Il2CppChar L_13 = MathUtils_IntToHex_m1169187058(NULL /*static, unused*/, ((int32_t)((int32_t)L_12&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)L_13);
		return;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m3973365548 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsHighSurrogate_m3973365548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsHighSurrogate_m361050852(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m2732701774 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsLowSurrogate_m2732701774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLowSurrogate_m534472094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
extern "C"  bool StringUtils_StartsWith_m1598152175 (Il2CppObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___source0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_2, 0, /*hidden argument*/NULL);
		Il2CppChar L_4 = ___value1;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Mapbox.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
extern "C"  bool StringUtils_EndsWith_m91150480 (Il2CppObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = ___source0;
		String_t* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1606060069(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Il2CppChar L_5 = String_get_Chars_m4230566705(L_2, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = ___value1;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String Mapbox.Json.Utilities.StringUtils::Trim(System.String,System.Int32,System.Int32)
extern "C"  String_t* StringUtils_Trim_m824264370 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___start1, int32_t ___length2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_Trim_m824264370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	{
		String_t* L_0 = ___s0;
		V_1 = (bool)((((Il2CppObject*)(String_t*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m911049464(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0010:
	{
		int32_t L_3 = ___start1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_5 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_5, _stringLiteral2858725202, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0024:
	{
		int32_t L_6 = ___length2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_8 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_8, _stringLiteral3438791774, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0038:
	{
		int32_t L_9 = ___start1;
		int32_t L_10 = ___length2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9+(int32_t)L_10))-(int32_t)1));
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1606060069(L_12, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_15 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_15, _stringLiteral3438791774, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_005c:
	{
		goto IL_007d;
	}

IL_005e:
	{
		String_t* L_16 = ___s0;
		int32_t L_17 = ___start1;
		NullCheck(L_16);
		Il2CppChar L_18 = String_get_Chars_m4230566705(L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_19 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0087;
	}

IL_0077:
	{
		int32_t L_21 = ___start1;
		___start1 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_22 = ___start1;
		int32_t L_23 = V_0;
		V_6 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_005e;
		}
	}

IL_0087:
	{
		goto IL_00a7;
	}

IL_0089:
	{
		String_t* L_25 = ___s0;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		Il2CppChar L_27 = String_get_Chars_m4230566705(L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_28 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00b4;
	}

IL_00a2:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)((int32_t)L_30-(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___start1;
		V_8 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_0089;
		}
	}

IL_00b4:
	{
		String_t* L_34 = ___s0;
		int32_t L_35 = ___start1;
		int32_t L_36 = V_0;
		int32_t L_37 = ___start1;
		NullCheck(L_34);
		String_t* L_38 = String_Substring_m12482732(L_34, L_35, ((int32_t)((int32_t)((int32_t)((int32_t)L_36-(int32_t)L_37))+(int32_t)1)), /*hidden argument*/NULL);
		V_9 = L_38;
		goto IL_00c4;
	}

IL_00c4:
	{
		String_t* L_39 = V_9;
		return L_39;
	}
}
// System.Reflection.MemberTypes Mapbox.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m591314621 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m2808627984 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(86 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m2484978607 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_m3583817465(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m626216791 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(89 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m4158879962 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Type Mapbox.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m55858761 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m3738579717 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsEnum_m313908919(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m398314194 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsClass_m2968663946(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m3417357326 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsSealed_m2380985836(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m941877284 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsAbstract_m2532060002(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m3548280745 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m1733572463(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m3446010276 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_AssignableToTypeName_m3446010276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TypeU5BU5D_t1664964607* V_4 = NULL;
	int32_t V_5 = 0;
	Type_t * V_6 = NULL;
	bool V_7 = false;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0027;
	}

IL_0005:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_Equals_m2950069882(NULL /*static, unused*/, L_2, L_3, 4, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		Type_t ** L_6 = ___match2;
		Type_t * L_7 = V_0;
		*((Il2CppObject **)(L_6)) = (Il2CppObject *)L_7;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_6), (Il2CppObject *)L_7);
		V_2 = (bool)1;
		goto IL_0077;
	}

IL_001f:
	{
		Type_t * L_8 = V_0;
		Type_t * L_9 = TypeExtensions_BaseType_m55858761(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0027:
	{
		Type_t * L_10 = V_0;
		V_3 = (bool)((!(((Il2CppObject*)(Type_t *)L_10) <= ((Il2CppObject*)(Il2CppObject *)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		Type_t * L_12 = ___type0;
		NullCheck(L_12);
		TypeU5BU5D_t1664964607* L_13 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_4 = L_13;
		V_5 = 0;
		goto IL_0068;
	}

IL_003d:
	{
		TypeU5BU5D_t1664964607* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Type_t * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		Type_t * L_18 = V_6;
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		String_t* L_20 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_Equals_m2950069882(NULL /*static, unused*/, L_19, L_20, 4, /*hidden argument*/NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0061;
		}
	}
	{
		Type_t ** L_23 = ___match2;
		Type_t * L_24 = ___type0;
		*((Il2CppObject **)(L_23)) = (Il2CppObject *)L_24;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_23), (Il2CppObject *)L_24);
		V_2 = (bool)1;
		goto IL_0077;
	}

IL_0061:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0068:
	{
		int32_t L_26 = V_5;
		TypeU5BU5D_t1664964607* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		Type_t ** L_28 = ___match2;
		*((Il2CppObject **)(L_28)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_28), (Il2CppObject *)NULL);
		V_2 = (bool)0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_29 = V_2;
		return L_29;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
extern "C"  bool TypeExtensions_AssignableToTypeName_m1246752669 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	bool V_1 = false;
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___fullTypeName1;
		bool L_2 = TypeExtensions_AssignableToTypeName_m3446010276(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Mapbox.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m3557396941 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_ImplementInterface_m3557396941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Il2CppObject* V_1 = NULL;
	Il2CppObject* V_2 = NULL;
	Type_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_005d;
	}

IL_0005:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		TypeU5BU5D_t1664964607* L_2 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		V_1 = (Il2CppObject*)L_2;
		Il2CppObject* L_3 = V_1;
		NullCheck(L_3);
		Il2CppObject* L_4 = InterfaceFuncInvoker0< Il2CppObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t1595930271_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0017:
		{
			Il2CppObject* L_5 = V_2;
			NullCheck(L_5);
			Type_t * L_6 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t3074294349_il2cpp_TypeInfo_var, L_5);
			V_3 = L_6;
			Type_t * L_7 = V_3;
			Type_t * L_8 = ___interfaceType1;
			if ((((Il2CppObject*)(Type_t *)L_7) == ((Il2CppObject*)(Type_t *)L_8)))
			{
				goto IL_0032;
			}
		}

IL_0023:
		{
			Type_t * L_9 = V_3;
			if (!L_9)
			{
				goto IL_002f;
			}
		}

IL_0026:
		{
			Type_t * L_10 = V_3;
			Type_t * L_11 = ___interfaceType1;
			bool L_12 = TypeExtensions_ImplementInterface_m3557396941(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_12));
			goto IL_0030;
		}

IL_002f:
		{
			G_B7_0 = 0;
		}

IL_0030:
		{
			G_B9_0 = G_B7_0;
			goto IL_0033;
		}

IL_0032:
		{
			G_B9_0 = 1;
		}

IL_0033:
		{
			V_4 = (bool)G_B9_0;
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			V_5 = (bool)1;
			IL2CPP_LEAVE(0x6C, FINALLY_004a);
		}

IL_003f:
		{
		}

IL_0040:
		{
			Il2CppObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0017;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			Il2CppObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0054;
			}
		}

IL_004d:
		{
			Il2CppObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0055:
	{
		Type_t * L_18 = V_0;
		Type_t * L_19 = TypeExtensions_BaseType_m55858761(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_005d:
	{
		Type_t * L_20 = V_0;
		V_6 = (bool)((!(((Il2CppObject*)(Type_t *)L_20) <= ((Il2CppObject*)(Il2CppObject *)NULL)))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0005;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_22 = V_5;
		return L_22;
	}
}
// System.Type Mapbox.Json.Utilities.TypeInformation::get_Type()
extern "C"  Type_t * TypeInformation_get_Type_m18016134 (TypeInformation_t1879354846 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::set_Type(System.Type)
extern "C"  void TypeInformation_set_Type_m456656275 (TypeInformation_t1879354846 * __this, Type_t * ___value0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Mapbox.Json.Utilities.PrimitiveTypeCode Mapbox.Json.Utilities.TypeInformation::get_TypeCode()
extern "C"  int32_t TypeInformation_get_TypeCode_m3200117531 (TypeInformation_t1879354846 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::set_TypeCode(Mapbox.Json.Utilities.PrimitiveTypeCode)
extern "C"  void TypeInformation_set_TypeCode_m612794670 (TypeInformation_t1879354846 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::.ctor()
extern "C"  void TypeInformation__ctor_m218219001 (TypeInformation_t1879354846 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: Mapbox.Json.Utilities.TypeNameKey
extern "C" void TypeNameKey_t3439097718_marshal_pinvoke(const TypeNameKey_t3439097718& unmarshaled, TypeNameKey_t3439097718_marshaled_pinvoke& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_1());
}
extern "C" void TypeNameKey_t3439097718_marshal_pinvoke_back(const TypeNameKey_t3439097718_marshaled_pinvoke& marshaled, TypeNameKey_t3439097718& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_string_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.TypeNameKey
extern "C" void TypeNameKey_t3439097718_marshal_pinvoke_cleanup(TypeNameKey_t3439097718_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// Conversion methods for marshalling of: Mapbox.Json.Utilities.TypeNameKey
extern "C" void TypeNameKey_t3439097718_marshal_com(const TypeNameKey_t3439097718& unmarshaled, TypeNameKey_t3439097718_marshaled_com& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_1());
}
extern "C" void TypeNameKey_t3439097718_marshal_com_back(const TypeNameKey_t3439097718_marshaled_com& marshaled, TypeNameKey_t3439097718& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.TypeNameKey
extern "C" void TypeNameKey_t3439097718_marshal_com_cleanup(TypeNameKey_t3439097718_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// System.Void Mapbox.Json.Utilities.TypeNameKey::.ctor(System.String,System.String)
extern "C"  void TypeNameKey__ctor_m2967417489 (TypeNameKey_t3439097718 * __this, String_t* ___assemblyName0, String_t* ___typeName1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___assemblyName0;
		__this->set_AssemblyName_0(L_0);
		String_t* L_1 = ___typeName1;
		__this->set_TypeName_1(L_1);
		return;
	}
}
extern "C"  void TypeNameKey__ctor_m2967417489_AdjustorThunk (Il2CppObject * __this, String_t* ___assemblyName0, String_t* ___typeName1, const MethodInfo* method)
{
	TypeNameKey_t3439097718 * _thisAdjusted = reinterpret_cast<TypeNameKey_t3439097718 *>(__this + 1);
	TypeNameKey__ctor_m2967417489(_thisAdjusted, ___assemblyName0, ___typeName1, method);
}
// System.Int32 Mapbox.Json.Utilities.TypeNameKey::GetHashCode()
extern "C"  int32_t TypeNameKey_GetHashCode_m1799953872 (TypeNameKey_t3439097718 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		String_t* L_3 = __this->get_TypeName_1();
		String_t* L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = G_B3_0;
			goto IL_0020;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_1;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B5_0);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B5_0);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_1;
	}

IL_0025:
	{
		V_0 = ((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0));
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
extern "C"  int32_t TypeNameKey_GetHashCode_m1799953872_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	TypeNameKey_t3439097718 * _thisAdjusted = reinterpret_cast<TypeNameKey_t3439097718 *>(__this + 1);
	return TypeNameKey_GetHashCode_m1799953872(_thisAdjusted, method);
}
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(System.Object)
extern "C"  bool TypeNameKey_Equals_m636143312 (TypeNameKey_t3439097718 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameKey_Equals_m636143312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Il2CppObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((Il2CppObject*)(Il2CppObject *)((Il2CppObject *)IsInstSealed(L_0, TypeNameKey_t3439097718_il2cpp_TypeInfo_var))) <= ((Il2CppObject*)(Il2CppObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0016:
	{
		Il2CppObject * L_2 = ___obj0;
		bool L_3 = TypeNameKey_Equals_m533188735(__this, ((*(TypeNameKey_t3439097718 *)((TypeNameKey_t3439097718 *)UnBox(L_2, TypeNameKey_t3439097718_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
extern "C"  bool TypeNameKey_Equals_m636143312_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	TypeNameKey_t3439097718 * _thisAdjusted = reinterpret_cast<TypeNameKey_t3439097718 *>(__this + 1);
	return TypeNameKey_Equals_m636143312(_thisAdjusted, ___obj0, method);
}
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(Mapbox.Json.Utilities.TypeNameKey)
extern "C"  bool TypeNameKey_Equals_m533188735 (TypeNameKey_t3439097718 * __this, TypeNameKey_t3439097718  ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameKey_Equals_m533188735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		TypeNameKey_t3439097718  L_1 = ___other0;
		String_t* L_2 = L_1.get_AssemblyName_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = __this->get_TypeName_1();
		TypeNameKey_t3439097718  L_5 = ___other0;
		String_t* L_6 = L_5.get_TypeName_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
extern "C"  bool TypeNameKey_Equals_m533188735_AdjustorThunk (Il2CppObject * __this, TypeNameKey_t3439097718  ___other0, const MethodInfo* method)
{
	TypeNameKey_t3439097718 * _thisAdjusted = reinterpret_cast<TypeNameKey_t3439097718 *>(__this + 1);
	return TypeNameKey_Equals_m533188735(_thisAdjusted, ___other0, method);
}
// System.Void Mapbox.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m3266461006 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, String_t* ___parameterName1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_m3266461006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Il2CppObject * L_0 = ___value0;
		V_0 = (bool)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___parameterName1;
		ArgumentNullException_t628810857 * L_3 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0011:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
