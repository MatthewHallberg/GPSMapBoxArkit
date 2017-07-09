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
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintStructure
struct  ConstraintStructure_t1728327650  : public Il2CppObject
{
public:
	// System.String System.Data.ConstraintStructure::TableName
	String_t* ___TableName_0;
	// System.String[] System.Data.ConstraintStructure::Columns
	StringU5BU5D_t1642385972* ___Columns_1;
	// System.Boolean[] System.Data.ConstraintStructure::IsAttribute
	BooleanU5BU5D_t3568034315* ___IsAttribute_2;
	// System.String System.Data.ConstraintStructure::ConstraintName
	String_t* ___ConstraintName_3;
	// System.Boolean System.Data.ConstraintStructure::IsPrimaryKey
	bool ___IsPrimaryKey_4;
	// System.String System.Data.ConstraintStructure::ReferName
	String_t* ___ReferName_5;
	// System.Boolean System.Data.ConstraintStructure::IsNested
	bool ___IsNested_6;
	// System.Boolean System.Data.ConstraintStructure::IsConstraintOnly
	bool ___IsConstraintOnly_7;

public:
	inline static int32_t get_offset_of_TableName_0() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___TableName_0)); }
	inline String_t* get_TableName_0() const { return ___TableName_0; }
	inline String_t** get_address_of_TableName_0() { return &___TableName_0; }
	inline void set_TableName_0(String_t* value)
	{
		___TableName_0 = value;
		Il2CppCodeGenWriteBarrier(&___TableName_0, value);
	}

	inline static int32_t get_offset_of_Columns_1() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___Columns_1)); }
	inline StringU5BU5D_t1642385972* get_Columns_1() const { return ___Columns_1; }
	inline StringU5BU5D_t1642385972** get_address_of_Columns_1() { return &___Columns_1; }
	inline void set_Columns_1(StringU5BU5D_t1642385972* value)
	{
		___Columns_1 = value;
		Il2CppCodeGenWriteBarrier(&___Columns_1, value);
	}

	inline static int32_t get_offset_of_IsAttribute_2() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___IsAttribute_2)); }
	inline BooleanU5BU5D_t3568034315* get_IsAttribute_2() const { return ___IsAttribute_2; }
	inline BooleanU5BU5D_t3568034315** get_address_of_IsAttribute_2() { return &___IsAttribute_2; }
	inline void set_IsAttribute_2(BooleanU5BU5D_t3568034315* value)
	{
		___IsAttribute_2 = value;
		Il2CppCodeGenWriteBarrier(&___IsAttribute_2, value);
	}

	inline static int32_t get_offset_of_ConstraintName_3() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___ConstraintName_3)); }
	inline String_t* get_ConstraintName_3() const { return ___ConstraintName_3; }
	inline String_t** get_address_of_ConstraintName_3() { return &___ConstraintName_3; }
	inline void set_ConstraintName_3(String_t* value)
	{
		___ConstraintName_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConstraintName_3, value);
	}

	inline static int32_t get_offset_of_IsPrimaryKey_4() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___IsPrimaryKey_4)); }
	inline bool get_IsPrimaryKey_4() const { return ___IsPrimaryKey_4; }
	inline bool* get_address_of_IsPrimaryKey_4() { return &___IsPrimaryKey_4; }
	inline void set_IsPrimaryKey_4(bool value)
	{
		___IsPrimaryKey_4 = value;
	}

	inline static int32_t get_offset_of_ReferName_5() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___ReferName_5)); }
	inline String_t* get_ReferName_5() const { return ___ReferName_5; }
	inline String_t** get_address_of_ReferName_5() { return &___ReferName_5; }
	inline void set_ReferName_5(String_t* value)
	{
		___ReferName_5 = value;
		Il2CppCodeGenWriteBarrier(&___ReferName_5, value);
	}

	inline static int32_t get_offset_of_IsNested_6() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___IsNested_6)); }
	inline bool get_IsNested_6() const { return ___IsNested_6; }
	inline bool* get_address_of_IsNested_6() { return &___IsNested_6; }
	inline void set_IsNested_6(bool value)
	{
		___IsNested_6 = value;
	}

	inline static int32_t get_offset_of_IsConstraintOnly_7() { return static_cast<int32_t>(offsetof(ConstraintStructure_t1728327650, ___IsConstraintOnly_7)); }
	inline bool get_IsConstraintOnly_7() const { return ___IsConstraintOnly_7; }
	inline bool* get_address_of_IsConstraintOnly_7() { return &___IsConstraintOnly_7; }
	inline void set_IsConstraintOnly_7(bool value)
	{
		___IsConstraintOnly_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
