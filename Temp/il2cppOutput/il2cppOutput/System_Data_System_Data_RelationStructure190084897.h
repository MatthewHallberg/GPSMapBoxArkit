#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RelationStructure
struct  RelationStructure_t190084897  : public Il2CppObject
{
public:
	// System.String System.Data.RelationStructure::ExplicitName
	String_t* ___ExplicitName_0;
	// System.String System.Data.RelationStructure::ParentTableName
	String_t* ___ParentTableName_1;
	// System.String System.Data.RelationStructure::ChildTableName
	String_t* ___ChildTableName_2;
	// System.String System.Data.RelationStructure::ParentColumnName
	String_t* ___ParentColumnName_3;
	// System.String System.Data.RelationStructure::ChildColumnName
	String_t* ___ChildColumnName_4;
	// System.Boolean System.Data.RelationStructure::IsNested
	bool ___IsNested_5;
	// System.Boolean System.Data.RelationStructure::CreateConstraint
	bool ___CreateConstraint_6;

public:
	inline static int32_t get_offset_of_ExplicitName_0() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___ExplicitName_0)); }
	inline String_t* get_ExplicitName_0() const { return ___ExplicitName_0; }
	inline String_t** get_address_of_ExplicitName_0() { return &___ExplicitName_0; }
	inline void set_ExplicitName_0(String_t* value)
	{
		___ExplicitName_0 = value;
		Il2CppCodeGenWriteBarrier(&___ExplicitName_0, value);
	}

	inline static int32_t get_offset_of_ParentTableName_1() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___ParentTableName_1)); }
	inline String_t* get_ParentTableName_1() const { return ___ParentTableName_1; }
	inline String_t** get_address_of_ParentTableName_1() { return &___ParentTableName_1; }
	inline void set_ParentTableName_1(String_t* value)
	{
		___ParentTableName_1 = value;
		Il2CppCodeGenWriteBarrier(&___ParentTableName_1, value);
	}

	inline static int32_t get_offset_of_ChildTableName_2() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___ChildTableName_2)); }
	inline String_t* get_ChildTableName_2() const { return ___ChildTableName_2; }
	inline String_t** get_address_of_ChildTableName_2() { return &___ChildTableName_2; }
	inline void set_ChildTableName_2(String_t* value)
	{
		___ChildTableName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChildTableName_2, value);
	}

	inline static int32_t get_offset_of_ParentColumnName_3() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___ParentColumnName_3)); }
	inline String_t* get_ParentColumnName_3() const { return ___ParentColumnName_3; }
	inline String_t** get_address_of_ParentColumnName_3() { return &___ParentColumnName_3; }
	inline void set_ParentColumnName_3(String_t* value)
	{
		___ParentColumnName_3 = value;
		Il2CppCodeGenWriteBarrier(&___ParentColumnName_3, value);
	}

	inline static int32_t get_offset_of_ChildColumnName_4() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___ChildColumnName_4)); }
	inline String_t* get_ChildColumnName_4() const { return ___ChildColumnName_4; }
	inline String_t** get_address_of_ChildColumnName_4() { return &___ChildColumnName_4; }
	inline void set_ChildColumnName_4(String_t* value)
	{
		___ChildColumnName_4 = value;
		Il2CppCodeGenWriteBarrier(&___ChildColumnName_4, value);
	}

	inline static int32_t get_offset_of_IsNested_5() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___IsNested_5)); }
	inline bool get_IsNested_5() const { return ___IsNested_5; }
	inline bool* get_address_of_IsNested_5() { return &___IsNested_5; }
	inline void set_IsNested_5(bool value)
	{
		___IsNested_5 = value;
	}

	inline static int32_t get_offset_of_CreateConstraint_6() { return static_cast<int32_t>(offsetof(RelationStructure_t190084897, ___CreateConstraint_6)); }
	inline bool get_CreateConstraint_6() const { return ___CreateConstraint_6; }
	inline bool* get_address_of_CreateConstraint_6() { return &___CreateConstraint_6; }
	inline void set_CreateConstraint_6(bool value)
	{
		___CreateConstraint_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
