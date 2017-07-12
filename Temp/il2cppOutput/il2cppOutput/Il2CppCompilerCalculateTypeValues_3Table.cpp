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
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder700974433.h"
#include "mscorlib_System_Reflection_Emit_DerivedType1016359113.h"
#include "mscorlib_System_Reflection_Emit_ArrayType3579558425.h"
#include "mscorlib_System_Reflection_Emit_ByRefType1587086384.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod3307743052.h"
#include "mscorlib_System_Reflection_Emit_EnumBuilder2808714468.h"
#include "mscorlib_System_Reflection_Emit_FieldBuilder2784804005.h"
#include "mscorlib_System_Reflection_Emit_GenericTypeParamet1370236603.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo149559338.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelF4090909514.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelD3712112744.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder2116499186.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder644187984.h"
#include "mscorlib_System_Reflection_Emit_MethodToken3991686330.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder4156028127.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilderTokenG578872653.h"
#include "mscorlib_System_Reflection_Emit_OpCode2247480392.h"
#include "mscorlib_System_Reflection_Emit_OpCodeNames1907134268.h"
#include "mscorlib_System_Reflection_Emit_OpCodes3494785031.h"
#include "mscorlib_System_Reflection_Emit_OperandType22140925.h"
#include "mscorlib_System_Reflection_Emit_PEFileKinds4139237606.h"
#include "mscorlib_System_Reflection_Emit_PackingSize4013171414.h"
#include "mscorlib_System_Reflection_Emit_ParameterBuilder3344728474.h"
#include "mscorlib_System_Reflection_Emit_PropertyBuilder3694255912.h"
#include "mscorlib_System_Reflection_Emit_StackBehaviour1390406961.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3308873219.h"
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal4270021860.h"
#include "mscorlib_System_Reflection_AmbiguousMatchException1406414556.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_Assembly_ResolveEventHo1761494505.h"
#include "mscorlib_System_Reflection_AssemblyCompanyAttribut2851673381.h"
#include "mscorlib_System_Reflection_AssemblyConfigurationAt1678917172.h"
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribu177123295.h"
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAtt1774139159.h"
#include "mscorlib_System_Reflection_AssemblyDelaySignAttrib2705758496.h"
#include "mscorlib_System_Reflection_AssemblyDescriptionAttr1018387888.h"
#include "mscorlib_System_Reflection_AssemblyFileVersionAttr2897687916.h"
#include "mscorlib_System_Reflection_AssemblyInformationalVe3037389657.h"
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute605245443.h"
#include "mscorlib_System_Reflection_AssemblyName894705941.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1794031440.h"
#include "mscorlib_System_Reflection_AssemblyProductAttribut1523443169.h"
#include "mscorlib_System_Reflection_AssemblyTitleAttribute92945912.h"
#include "mscorlib_System_Reflection_AssemblyTrademarkAttrib3740556705.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_Binder_Default3956931304.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_CustomAttributeData3093286891.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgum94157543.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg1498197914.h"
#include "mscorlib_System_Reflection_EventAttributes2989788983.h"
#include "mscorlib_System_Reflection_EventInfo4258285342.h"
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapt1766862959.h"
#include "mscorlib_System_Reflection_FieldAttributes1122705193.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_LocalVariableInfo1749284021.h"
#include "mscorlib_System_Reflection_MemberInfoSerialization2799051170.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1541361196.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_Missing1033855606.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Reflection_MonoEventInfo2190036573.h"
#include "mscorlib_System_Reflection_MonoEvent2188687691.h"
#include "mscorlib_System_Reflection_MonoField3600053525.h"
#include "mscorlib_System_Reflection_MonoGenericMethod1068099169.h"
#include "mscorlib_System_Reflection_MonoGenericCMethod2923423538.h"
#include "mscorlib_System_Reflection_MonoMethodInfo3646562144.h"
#include "mscorlib_System_Reflection_MonoMethod116053496.h"
#include "mscorlib_System_Reflection_MonoCMethod611352247.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo486106184.h"
#include "mscorlib_System_Reflection_PInfo957350482.h"
#include "mscorlib_System_Reflection_MonoProperty2242413552.h"
#include "mscorlib_System_Reflection_MonoProperty_GetterAdap1423755509.h"
#include "mscorlib_System_Reflection_ParameterAttributes1266705348.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Reflection_ParameterModifier1820634920.h"
#include "mscorlib_System_Reflection_Pointer937075087.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture1620065459.h"
#include "mscorlib_System_Reflection_PropertyAttributes883448530.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_ResourceAttributes2389678029.h"
#include "mscorlib_System_Reflection_StrongNameKeyPair4090869089.h"
#include "mscorlib_System_Reflection_TargetException1572104820.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti4098620458.h"
#include "mscorlib_System_Reflection_TargetParameterCountExc1554451430.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Reflection_TypeDelegator1357031879.h"
#include "mscorlib_System_Resources_NeutralResourcesLanguage3267676636.h"
#include "mscorlib_System_Resources_ResourceManager264715885.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (ConstructorBuilder_t700974433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[11] = 
{
	ConstructorBuilder_t700974433::get_offset_of_ilgen_2(),
	ConstructorBuilder_t700974433::get_offset_of_parameters_3(),
	ConstructorBuilder_t700974433::get_offset_of_attrs_4(),
	ConstructorBuilder_t700974433::get_offset_of_iattrs_5(),
	ConstructorBuilder_t700974433::get_offset_of_table_idx_6(),
	ConstructorBuilder_t700974433::get_offset_of_call_conv_7(),
	ConstructorBuilder_t700974433::get_offset_of_type_8(),
	ConstructorBuilder_t700974433::get_offset_of_pinfo_9(),
	ConstructorBuilder_t700974433::get_offset_of_init_locals_10(),
	ConstructorBuilder_t700974433::get_offset_of_paramModReq_11(),
	ConstructorBuilder_t700974433::get_offset_of_paramModOpt_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (DerivedType_t1016359113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable301[1] = 
{
	DerivedType_t1016359113::get_offset_of_elementType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (ArrayType_t3579558425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[1] = 
{
	ArrayType_t3579558425::get_offset_of_rank_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (ByRefType_t1587086384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (DynamicMethod_t3307743052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[12] = 
{
	DynamicMethod_t3307743052::get_offset_of_mhandle_0(),
	DynamicMethod_t3307743052::get_offset_of_name_1(),
	DynamicMethod_t3307743052::get_offset_of_returnType_2(),
	DynamicMethod_t3307743052::get_offset_of_parameters_3(),
	DynamicMethod_t3307743052::get_offset_of_attributes_4(),
	DynamicMethod_t3307743052::get_offset_of_callingConvention_5(),
	DynamicMethod_t3307743052::get_offset_of_module_6(),
	DynamicMethod_t3307743052::get_offset_of_ilgen_7(),
	DynamicMethod_t3307743052::get_offset_of_refs_8(),
	DynamicMethod_t3307743052::get_offset_of_method_9(),
	DynamicMethod_t3307743052::get_offset_of_pinfo_10(),
	DynamicMethod_t3307743052::get_offset_of_creating_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (EnumBuilder_t2808714468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable305[2] = 
{
	EnumBuilder_t2808714468::get_offset_of__tb_8(),
	EnumBuilder_t2808714468::get_offset_of__underlyingType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (FieldBuilder_t2784804005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[5] = 
{
	FieldBuilder_t2784804005::get_offset_of_attrs_0(),
	FieldBuilder_t2784804005::get_offset_of_type_1(),
	FieldBuilder_t2784804005::get_offset_of_name_2(),
	FieldBuilder_t2784804005::get_offset_of_typeb_3(),
	FieldBuilder_t2784804005::get_offset_of_marshal_info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (GenericTypeParameterBuilder_t1370236603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[4] = 
{
	GenericTypeParameterBuilder_t1370236603::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t1370236603::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t1370236603::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t1370236603::get_offset_of_base_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (ILTokenInfo_t149559338)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[2] = 
{
	ILTokenInfo_t149559338::get_offset_of_member_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ILTokenInfo_t149559338::get_offset_of_code_pos_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ILGenerator_t99948092), -1, sizeof(ILGenerator_t99948092_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable310[14] = 
{
	ILGenerator_t99948092_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t99948092::get_offset_of_code_1(),
	ILGenerator_t99948092::get_offset_of_code_len_2(),
	ILGenerator_t99948092::get_offset_of_max_stack_3(),
	ILGenerator_t99948092::get_offset_of_cur_stack_4(),
	ILGenerator_t99948092::get_offset_of_locals_5(),
	ILGenerator_t99948092::get_offset_of_num_token_fixups_6(),
	ILGenerator_t99948092::get_offset_of_token_fixups_7(),
	ILGenerator_t99948092::get_offset_of_labels_8(),
	ILGenerator_t99948092::get_offset_of_num_labels_9(),
	ILGenerator_t99948092::get_offset_of_fixups_10(),
	ILGenerator_t99948092::get_offset_of_num_fixups_11(),
	ILGenerator_t99948092::get_offset_of_module_12(),
	ILGenerator_t99948092::get_offset_of_token_gen_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (LabelFixup_t4090909514)+ sizeof (Il2CppObject), sizeof(LabelFixup_t4090909514 ), 0, 0 };
extern const int32_t g_FieldOffsetTable311[3] = 
{
	LabelFixup_t4090909514::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelFixup_t4090909514::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelFixup_t4090909514::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (LabelData_t3712112744)+ sizeof (Il2CppObject), sizeof(LabelData_t3712112744 ), 0, 0 };
extern const int32_t g_FieldOffsetTable312[2] = 
{
	LabelData_t3712112744::get_offset_of_addr_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelData_t3712112744::get_offset_of_maxStack_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (Label_t4243202660)+ sizeof (Il2CppObject), sizeof(Label_t4243202660 ), 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	Label_t4243202660::get_offset_of_label_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (LocalBuilder_t2116499186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	LocalBuilder_t2116499186::get_offset_of_ilgen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (MethodBuilder_t644187984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable315[18] = 
{
	MethodBuilder_t644187984::get_offset_of_rtype_0(),
	MethodBuilder_t644187984::get_offset_of_parameters_1(),
	MethodBuilder_t644187984::get_offset_of_attrs_2(),
	MethodBuilder_t644187984::get_offset_of_iattrs_3(),
	MethodBuilder_t644187984::get_offset_of_name_4(),
	MethodBuilder_t644187984::get_offset_of_table_idx_5(),
	MethodBuilder_t644187984::get_offset_of_code_6(),
	MethodBuilder_t644187984::get_offset_of_ilgen_7(),
	MethodBuilder_t644187984::get_offset_of_type_8(),
	MethodBuilder_t644187984::get_offset_of_pinfo_9(),
	MethodBuilder_t644187984::get_offset_of_override_method_10(),
	MethodBuilder_t644187984::get_offset_of_call_conv_11(),
	MethodBuilder_t644187984::get_offset_of_init_locals_12(),
	MethodBuilder_t644187984::get_offset_of_generic_params_13(),
	MethodBuilder_t644187984::get_offset_of_returnModReq_14(),
	MethodBuilder_t644187984::get_offset_of_returnModOpt_15(),
	MethodBuilder_t644187984::get_offset_of_paramModReq_16(),
	MethodBuilder_t644187984::get_offset_of_paramModOpt_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (MethodToken_t3991686330)+ sizeof (Il2CppObject), sizeof(MethodToken_t3991686330 ), sizeof(MethodToken_t3991686330_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable316[2] = 
{
	MethodToken_t3991686330::get_offset_of_tokValue_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MethodToken_t3991686330_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (ModuleBuilder_t4156028127), -1, sizeof(ModuleBuilder_t4156028127_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable317[13] = 
{
	ModuleBuilder_t4156028127::get_offset_of_num_types_10(),
	ModuleBuilder_t4156028127::get_offset_of_types_11(),
	ModuleBuilder_t4156028127::get_offset_of_guid_12(),
	ModuleBuilder_t4156028127::get_offset_of_table_idx_13(),
	ModuleBuilder_t4156028127::get_offset_of_assemblyb_14(),
	ModuleBuilder_t4156028127::get_offset_of_global_type_15(),
	ModuleBuilder_t4156028127::get_offset_of_name_cache_16(),
	ModuleBuilder_t4156028127::get_offset_of_us_string_cache_17(),
	ModuleBuilder_t4156028127::get_offset_of_table_indexes_18(),
	ModuleBuilder_t4156028127::get_offset_of_transient_19(),
	ModuleBuilder_t4156028127::get_offset_of_token_gen_20(),
	ModuleBuilder_t4156028127::get_offset_of_symbolWriter_21(),
	ModuleBuilder_t4156028127_StaticFields::get_offset_of_type_modifiers_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (ModuleBuilderTokenGenerator_t578872653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	ModuleBuilderTokenGenerator_t578872653::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (OpCode_t2247480392)+ sizeof (Il2CppObject), sizeof(OpCode_t2247480392 ), 0, 0 };
extern const int32_t g_FieldOffsetTable319[8] = 
{
	OpCode_t2247480392::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_push_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_size_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_type_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_args_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t2247480392::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (OpCodeNames_t1907134268), -1, sizeof(OpCodeNames_t1907134268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable320[1] = 
{
	OpCodeNames_t1907134268_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (OpCodes_t3494785031), -1, sizeof(OpCodes_t3494785031_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable321[226] = 
{
	OpCodes_t3494785031_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Break_1(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Call_39(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Br_55(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Add_87(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Div_90(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t3494785031_StaticFields::get_offset_of_And_94(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Or_95(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Not_101(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Box_137(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t3494785031_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (OperandType_t22140925)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable322[19] = 
{
	OperandType_t22140925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (PEFileKinds_t4139237606)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable323[4] = 
{
	PEFileKinds_t4139237606::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (PackingSize_t4013171414)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable324[10] = 
{
	PackingSize_t4013171414::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (ParameterBuilder_t3344728474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[3] = 
{
	ParameterBuilder_t3344728474::get_offset_of_name_0(),
	ParameterBuilder_t3344728474::get_offset_of_attrs_1(),
	ParameterBuilder_t3344728474::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (PropertyBuilder_t3694255912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[6] = 
{
	PropertyBuilder_t3694255912::get_offset_of_attrs_0(),
	PropertyBuilder_t3694255912::get_offset_of_name_1(),
	PropertyBuilder_t3694255912::get_offset_of_type_2(),
	PropertyBuilder_t3694255912::get_offset_of_set_method_3(),
	PropertyBuilder_t3694255912::get_offset_of_get_method_4(),
	PropertyBuilder_t3694255912::get_offset_of_typeb_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (StackBehaviour_t1390406961)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable327[30] = 
{
	StackBehaviour_t1390406961::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (TypeBuilder_t3308873219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable328[21] = 
{
	TypeBuilder_t3308873219::get_offset_of_tname_8(),
	TypeBuilder_t3308873219::get_offset_of_nspace_9(),
	TypeBuilder_t3308873219::get_offset_of_parent_10(),
	TypeBuilder_t3308873219::get_offset_of_nesting_type_11(),
	TypeBuilder_t3308873219::get_offset_of_interfaces_12(),
	TypeBuilder_t3308873219::get_offset_of_num_methods_13(),
	TypeBuilder_t3308873219::get_offset_of_methods_14(),
	TypeBuilder_t3308873219::get_offset_of_ctors_15(),
	TypeBuilder_t3308873219::get_offset_of_properties_16(),
	TypeBuilder_t3308873219::get_offset_of_fields_17(),
	TypeBuilder_t3308873219::get_offset_of_subtypes_18(),
	TypeBuilder_t3308873219::get_offset_of_attrs_19(),
	TypeBuilder_t3308873219::get_offset_of_table_idx_20(),
	TypeBuilder_t3308873219::get_offset_of_pmodule_21(),
	TypeBuilder_t3308873219::get_offset_of_class_size_22(),
	TypeBuilder_t3308873219::get_offset_of_packing_size_23(),
	TypeBuilder_t3308873219::get_offset_of_generic_params_24(),
	TypeBuilder_t3308873219::get_offset_of_created_25(),
	TypeBuilder_t3308873219::get_offset_of_fullname_26(),
	TypeBuilder_t3308873219::get_offset_of_createTypeCalled_27(),
	TypeBuilder_t3308873219::get_offset_of_underlying_type_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (UnmanagedMarshal_t4270021860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[9] = 
{
	UnmanagedMarshal_t4270021860::get_offset_of_count_0(),
	UnmanagedMarshal_t4270021860::get_offset_of_t_1(),
	UnmanagedMarshal_t4270021860::get_offset_of_tbase_2(),
	UnmanagedMarshal_t4270021860::get_offset_of_guid_3(),
	UnmanagedMarshal_t4270021860::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t4270021860::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t4270021860::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t4270021860::get_offset_of_param_num_7(),
	UnmanagedMarshal_t4270021860::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (AmbiguousMatchException_t1406414556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (Assembly_t4268412390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[10] = 
{
	Assembly_t4268412390::get_offset_of__mono_assembly_0(),
	Assembly_t4268412390::get_offset_of_resolve_event_holder_1(),
	Assembly_t4268412390::get_offset_of__evidence_2(),
	Assembly_t4268412390::get_offset_of__minimum_3(),
	Assembly_t4268412390::get_offset_of__optional_4(),
	Assembly_t4268412390::get_offset_of__refuse_5(),
	Assembly_t4268412390::get_offset_of__granted_6(),
	Assembly_t4268412390::get_offset_of__denied_7(),
	Assembly_t4268412390::get_offset_of_fromByteArray_8(),
	Assembly_t4268412390::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (ResolveEventHolder_t1761494505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (AssemblyCompanyAttribute_t2851673381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable333[1] = 
{
	AssemblyCompanyAttribute_t2851673381::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (AssemblyConfigurationAttribute_t1678917172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	AssemblyConfigurationAttribute_t1678917172::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AssemblyCopyrightAttribute_t177123295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable335[1] = 
{
	AssemblyCopyrightAttribute_t177123295::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (AssemblyDefaultAliasAttribute_t1774139159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	AssemblyDefaultAliasAttribute_t1774139159::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (AssemblyDelaySignAttribute_t2705758496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	AssemblyDelaySignAttribute_t2705758496::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (AssemblyDescriptionAttribute_t1018387888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[1] = 
{
	AssemblyDescriptionAttribute_t1018387888::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (AssemblyFileVersionAttribute_t2897687916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[1] = 
{
	AssemblyFileVersionAttribute_t2897687916::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (AssemblyInformationalVersionAttribute_t3037389657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[1] = 
{
	AssemblyInformationalVersionAttribute_t3037389657::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (AssemblyKeyFileAttribute_t605245443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[1] = 
{
	AssemblyKeyFileAttribute_t605245443::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (AssemblyName_t894705941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[15] = 
{
	AssemblyName_t894705941::get_offset_of_name_0(),
	AssemblyName_t894705941::get_offset_of_codebase_1(),
	AssemblyName_t894705941::get_offset_of_major_2(),
	AssemblyName_t894705941::get_offset_of_minor_3(),
	AssemblyName_t894705941::get_offset_of_build_4(),
	AssemblyName_t894705941::get_offset_of_revision_5(),
	AssemblyName_t894705941::get_offset_of_cultureinfo_6(),
	AssemblyName_t894705941::get_offset_of_flags_7(),
	AssemblyName_t894705941::get_offset_of_hashalg_8(),
	AssemblyName_t894705941::get_offset_of_keypair_9(),
	AssemblyName_t894705941::get_offset_of_publicKey_10(),
	AssemblyName_t894705941::get_offset_of_keyToken_11(),
	AssemblyName_t894705941::get_offset_of_versioncompat_12(),
	AssemblyName_t894705941::get_offset_of_version_13(),
	AssemblyName_t894705941::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (AssemblyNameFlags_t1794031440)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable343[6] = 
{
	AssemblyNameFlags_t1794031440::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (AssemblyProductAttribute_t1523443169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	AssemblyProductAttribute_t1523443169::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (AssemblyTitleAttribute_t92945912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	AssemblyTitleAttribute_t92945912::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (AssemblyTrademarkAttribute_t3740556705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[1] = 
{
	AssemblyTrademarkAttribute_t3740556705::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (Binder_t3404612058), -1, sizeof(Binder_t3404612058_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable347[1] = 
{
	Binder_t3404612058_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (Default_t3956931304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (BindingFlags_t1082350898)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable349[21] = 
{
	BindingFlags_t1082350898::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (CallingConventions_t1097349142)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable350[6] = 
{
	CallingConventions_t1097349142::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (ConstructorInfo_t2851816542), -1, sizeof(ConstructorInfo_t2851816542_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable351[2] = 
{
	ConstructorInfo_t2851816542_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t2851816542_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (CustomAttributeData_t3093286891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[3] = 
{
	CustomAttributeData_t3093286891::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t3093286891::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t3093286891::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (CustomAttributeNamedArgument_t94157543)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[2] = 
{
	CustomAttributeNamedArgument_t94157543::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeNamedArgument_t94157543::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (CustomAttributeTypedArgument_t1498197914)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[2] = 
{
	CustomAttributeTypedArgument_t1498197914::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeTypedArgument_t1498197914::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (EventAttributes_t2989788983)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable355[5] = 
{
	EventAttributes_t2989788983::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (AddEventAdapter_t1766862959), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (FieldAttributes_t1122705193)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable358[20] = 
{
	FieldAttributes_t1122705193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (LocalVariableInfo_t1749284021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[3] = 
{
	LocalVariableInfo_t1749284021::get_offset_of_type_0(),
	LocalVariableInfo_t1749284021::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t1749284021::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (MemberInfoSerializationHolder_t2799051170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[5] = 
{
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (MemberTypes_t3343038963)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable362[10] = 
{
	MemberTypes_t3343038963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (MethodAttributes_t790385034)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable363[25] = 
{
	MethodAttributes_t790385034::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (MethodBase_t904190842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (MethodImplAttributes_t1541361196)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[15] = 
{
	MethodImplAttributes_t1541361196::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (Missing_t1033855606), -1, sizeof(Missing_t1033855606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable367[1] = 
{
	Missing_t1033855606_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (Module_t4282841206), -1, sizeof(Module_t4282841206_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable368[10] = 
{
	0,
	Module_t4282841206_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t4282841206_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t4282841206::get_offset_of__impl_3(),
	Module_t4282841206::get_offset_of_assembly_4(),
	Module_t4282841206::get_offset_of_fqname_5(),
	Module_t4282841206::get_offset_of_name_6(),
	Module_t4282841206::get_offset_of_scopename_7(),
	Module_t4282841206::get_offset_of_is_resource_8(),
	Module_t4282841206::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (MonoEventInfo_t2190036573)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[8] = 
{
	MonoEventInfo_t2190036573::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_name_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t2190036573::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable370[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable371[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (MonoGenericCMethod_t2923423538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (MonoMethodInfo_t3646562144)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable374[5] = 
{
	MonoMethodInfo_t3646562144::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t3646562144::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t3646562144::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t3646562144::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t3646562144::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (MonoCMethod_t611352247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[3] = 
{
	MonoCMethod_t611352247::get_offset_of_mhandle_2(),
	MonoCMethod_t611352247::get_offset_of_name_3(),
	MonoCMethod_t611352247::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (MonoPropertyInfo_t486106184)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable377[5] = 
{
	MonoPropertyInfo_t486106184::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t486106184::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t486106184::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t486106184::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t486106184::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (PInfo_t957350482)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable378[7] = 
{
	PInfo_t957350482::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (GetterAdapter_t1423755509), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (ParameterAttributes_t1266705348)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[12] = 
{
	ParameterAttributes_t1266705348::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (ParameterInfo_t2249040075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable384[7] = 
{
	ParameterInfo_t2249040075::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2249040075::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2249040075::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2249040075::get_offset_of_NameImpl_3(),
	ParameterInfo_t2249040075::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2249040075::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2249040075::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ParameterModifier_t1820634920)+ sizeof (Il2CppObject), sizeof(ParameterModifier_t1820634920_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable385[1] = 
{
	ParameterModifier_t1820634920::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (Pointer_t937075087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable386[2] = 
{
	Pointer_t937075087::get_offset_of_data_0(),
	Pointer_t937075087::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (ProcessorArchitecture_t1620065459)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[6] = 
{
	ProcessorArchitecture_t1620065459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (PropertyAttributes_t883448530)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable388[9] = 
{
	PropertyAttributes_t883448530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (ResourceAttributes_t2389678029)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[3] = 
{
	ResourceAttributes_t2389678029::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (StrongNameKeyPair_t4090869089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable391[5] = 
{
	StrongNameKeyPair_t4090869089::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t4090869089::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (TargetException_t1572104820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (TargetInvocationException_t4098620458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (TargetParameterCountException_t1554451430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (TypeAttributes_t2229518203)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable395[32] = 
{
	TypeAttributes_t2229518203::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (TypeDelegator_t1357031879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable396[1] = 
{
	TypeDelegator_t1357031879::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (NeutralResourcesLanguageAttribute_t3267676636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable398[1] = 
{
	NeutralResourcesLanguageAttribute_t3267676636::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (ResourceManager_t264715885), -1, sizeof(ResourceManager_t264715885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable399[5] = 
{
	ResourceManager_t264715885_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t264715885_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t264715885_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t264715885_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t264715885::get_offset_of_resourceSetType_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
