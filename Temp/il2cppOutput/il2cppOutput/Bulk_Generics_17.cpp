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
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen57233634.h"
#include "mscorlib_System_Collections_Generic_List_1_gen573379950.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen3414753397.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen1939965701.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682395.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828711.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234862.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414462.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682396.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828712.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234863.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414463.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682397.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828713.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234864.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414464.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1235855446.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046.h"
#include "System_System_Collections_Generic_Stack_1_gen3777177449.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t573379950;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1235855446;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object
struct Il2CppObject;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral273729679;
extern const uint32_t ObjectPool_1_Release_m1615270002_MetadataUsageId;




// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m3900584722 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3715728798 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C"  List_1_t573379950 * ListPool_1_Get_m4215629480_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t573379950 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t3414753397 * L_0 = ((ListPool_1_t57233634_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3414753397 *)L_0);
		List_1_t573379950 * L_1 = ((  List_1_t573379950 * (*) (ObjectPool_1_t3414753397 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t3414753397 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t573379950 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t573379950 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m782571048_gshared (Il2CppObject * __this /* static, unused */, List_1_t573379950 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t3414753397 * L_0 = ((ListPool_1_t57233634_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t573379950 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3414753397 *)L_0);
		((  void (*) (ObjectPool_1_t3414753397 *, List_1_t573379950 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3414753397 *)L_0, (List_1_t573379950 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
extern "C"  void ListPool_1__cctor_m4150135476_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t1939965701 * L_1 = (UnityAction_1_t1939965701 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t1939965701 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t3414753397 * L_2 = (ObjectPool_1_t3414753397 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t3414753397 *, UnityAction_1_t1939965701 *, UnityAction_1_t1939965701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t1939965701 *)NULL, (UnityAction_1_t1939965701 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t57233634_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m4179519904_gshared (Il2CppObject * __this /* static, unused */, List_1_t573379950 * ___l0, const MethodInfo* method)
{
	{
		List_1_t573379950 * L_0 = ___l0;
		NullCheck((List_1_t573379950 *)L_0);
		((  void (*) (List_1_t573379950 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t573379950 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C"  List_1_t1612828711 * ListPool_1_Get_m3002130343_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t1612828711 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234862 * L_0 = ((ListPool_1_t1096682395_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t159234862 *)L_0);
		List_1_t1612828711 * L_1 = ((  List_1_t1612828711 * (*) (ObjectPool_1_t159234862 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t159234862 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t1612828711 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1612828711 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m2208096831_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234862 * L_0 = ((ListPool_1_t1096682395_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828711 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t159234862 *)L_0);
		((  void (*) (ObjectPool_1_t159234862 *, List_1_t1612828711 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t159234862 *)L_0, (List_1_t1612828711 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C"  void ListPool_1__cctor_m709904475_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t2979414462 * L_1 = (UnityAction_1_t2979414462 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t2979414462 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t159234862 * L_2 = (ObjectPool_1_t159234862 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t159234862 *, UnityAction_1_t2979414462 *, UnityAction_1_t2979414462 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t2979414462 *)NULL, (UnityAction_1_t2979414462 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t1096682395_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m1243609651_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1612828711 * L_0 = ___l0;
		NullCheck((List_1_t1612828711 *)L_0);
		((  void (*) (List_1_t1612828711 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1612828711 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C"  List_1_t1612828712 * ListPool_1_Get_m2998644518_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t1612828712 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234863 * L_0 = ((ListPool_1_t1096682396_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t159234863 *)L_0);
		List_1_t1612828712 * L_1 = ((  List_1_t1612828712 * (*) (ObjectPool_1_t159234863 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t159234863 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t1612828712 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1612828712 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m4118150756_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828712 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234863 * L_0 = ((ListPool_1_t1096682396_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828712 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t159234863 *)L_0);
		((  void (*) (ObjectPool_1_t159234863 *, List_1_t1612828712 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t159234863 *)L_0, (List_1_t1612828712 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C"  void ListPool_1__cctor_m3678794464_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t2979414463 * L_1 = (UnityAction_1_t2979414463 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t2979414463 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t159234863 * L_2 = (ObjectPool_1_t159234863 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t159234863 *, UnityAction_1_t2979414463 *, UnityAction_1_t2979414463 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t2979414463 *)NULL, (UnityAction_1_t2979414463 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t1096682396_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m3030633432_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828712 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1612828712 * L_0 = ___l0;
		NullCheck((List_1_t1612828712 *)L_0);
		((  void (*) (List_1_t1612828712 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1612828712 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C"  List_1_t1612828713 * ListPool_1_Get_m3009093805_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t1612828713 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t159234864 *)L_0);
		List_1_t1612828713 * L_1 = ((  List_1_t1612828713 * (*) (ObjectPool_1_t159234864 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t159234864 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t1612828713 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1612828713 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m1119005941_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828713 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t159234864 *)L_0);
		((  void (*) (ObjectPool_1_t159234864 *, List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t159234864 *)L_0, (List_1_t1612828713 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C"  void ListPool_1__cctor_m1474516473_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t2979414464 * L_1 = (UnityAction_1_t2979414464 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t2979414464 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t159234864 * L_2 = (ObjectPool_1_t159234864 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t159234864 *, UnityAction_1_t2979414464 *, UnityAction_1_t2979414464 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t2979414464 *)NULL, (UnityAction_1_t2979414464 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m3090281341_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1612828713 * L_0 = ___l0;
		NullCheck((List_1_t1612828713 *)L_0);
		((  void (*) (List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1612828713 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m1532275833_gshared (ObjectPool_1_t1235855446 * __this, UnityAction_1_t4056035046 * ___actionOnGet0, UnityAction_1_t4056035046 * ___actionOnRelease1, const MethodInfo* method)
{
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		((  void (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t4056035046 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t4056035046 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m4217365918_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m1742773675_gshared (ObjectPool_1_t1235855446 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t ObjectPool_1_get_countActive_m2655657865_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t ObjectPool_1_get_countInactive_m763736764_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3724675538_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		V_0 = (Il2CppObject *)L_2;
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		((  void (*) (ObjectPool_1_t1235855446 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((ObjectPool_1_t1235855446 *)__this, (int32_t)((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3777177449 * L_4 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_4);
		Il2CppObject * L_5 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((Stack_1_t3777177449 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		V_0 = (Il2CppObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		Il2CppObject * L_8 = V_0;
		NullCheck((UnityAction_1_t4056035046 *)L_7);
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_0051:
	{
		Il2CppObject * L_9 = V_0;
		V_1 = (Il2CppObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		Il2CppObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C"  void ObjectPool_1_Release_m1615270002_gshared (ObjectPool_1_t1235855446 * __this, Il2CppObject * ___element0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m1615270002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3777177449 * L_2 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_2);
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->methodPointer)((Stack_1_t3777177449 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
		Il2CppObject * L_4 = ___element0;
		bool L_5 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, (Il2CppObject *)L_3, (Il2CppObject *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, (Il2CppObject *)_stringLiteral273729679, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		Il2CppObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t4056035046 *)L_7);
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t3777177449 * L_9 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		Il2CppObject * L_10 = ___element0;
		NullCheck((Stack_1_t3777177449 *)L_9);
		((  void (*) (Stack_1_t3777177449 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->methodPointer)((Stack_1_t3777177449 *)L_9, (Il2CppObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
