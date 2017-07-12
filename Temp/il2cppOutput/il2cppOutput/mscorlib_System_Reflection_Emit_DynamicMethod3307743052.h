﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Module
struct Module_t4282841206;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2122994367;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t3307743052  : public MethodInfo_t
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t894824333  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t1664964607* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t4282841206 * ___module_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t99948092 * ___ilgen_7;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t3614634134* ___refs_8;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_9;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t2122994367* ___pinfo_10;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_11;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___mhandle_0)); }
	inline RuntimeMethodHandle_t894824333  get_mhandle_0() const { return ___mhandle_0; }
	inline RuntimeMethodHandle_t894824333 * get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(RuntimeMethodHandle_t894824333  value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_returnType_2() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___returnType_2)); }
	inline Type_t * get_returnType_2() const { return ___returnType_2; }
	inline Type_t ** get_address_of_returnType_2() { return &___returnType_2; }
	inline void set_returnType_2(Type_t * value)
	{
		___returnType_2 = value;
		Il2CppCodeGenWriteBarrier(&___returnType_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___parameters_3)); }
	inline TypeU5BU5D_t1664964607* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t1664964607* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_callingConvention_5() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___callingConvention_5)); }
	inline int32_t get_callingConvention_5() const { return ___callingConvention_5; }
	inline int32_t* get_address_of_callingConvention_5() { return &___callingConvention_5; }
	inline void set_callingConvention_5(int32_t value)
	{
		___callingConvention_5 = value;
	}

	inline static int32_t get_offset_of_module_6() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___module_6)); }
	inline Module_t4282841206 * get_module_6() const { return ___module_6; }
	inline Module_t4282841206 ** get_address_of_module_6() { return &___module_6; }
	inline void set_module_6(Module_t4282841206 * value)
	{
		___module_6 = value;
		Il2CppCodeGenWriteBarrier(&___module_6, value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___ilgen_7)); }
	inline ILGenerator_t99948092 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t99948092 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t99948092 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_7, value);
	}

	inline static int32_t get_offset_of_refs_8() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___refs_8)); }
	inline ObjectU5BU5D_t3614634134* get_refs_8() const { return ___refs_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of_refs_8() { return &___refs_8; }
	inline void set_refs_8(ObjectU5BU5D_t3614634134* value)
	{
		___refs_8 = value;
		Il2CppCodeGenWriteBarrier(&___refs_8, value);
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___method_9)); }
	inline MonoMethod_t * get_method_9() const { return ___method_9; }
	inline MonoMethod_t ** get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(MonoMethod_t * value)
	{
		___method_9 = value;
		Il2CppCodeGenWriteBarrier(&___method_9, value);
	}

	inline static int32_t get_offset_of_pinfo_10() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___pinfo_10)); }
	inline ParameterBuilderU5BU5D_t2122994367* get_pinfo_10() const { return ___pinfo_10; }
	inline ParameterBuilderU5BU5D_t2122994367** get_address_of_pinfo_10() { return &___pinfo_10; }
	inline void set_pinfo_10(ParameterBuilderU5BU5D_t2122994367* value)
	{
		___pinfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___pinfo_10, value);
	}

	inline static int32_t get_offset_of_creating_11() { return static_cast<int32_t>(offsetof(DynamicMethod_t3307743052, ___creating_11)); }
	inline bool get_creating_11() const { return ___creating_11; }
	inline bool* get_address_of_creating_11() { return &___creating_11; }
	inline void set_creating_11(bool value)
	{
		___creating_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
