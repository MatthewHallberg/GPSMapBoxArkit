#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Data_System_Data_Common_DataAdapter668329355.h"

// System.Data.IDbCommand
struct IDbCommand_t132189242;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t1474708225  : public DataAdapter_t668329355
{
public:
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	Il2CppObject * ____selectCommand_5;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	Il2CppObject * ____updateCommand_6;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	Il2CppObject * ____deleteCommand_7;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	Il2CppObject * ____insertCommand_8;

public:
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1474708225, ____selectCommand_5)); }
	inline Il2CppObject * get__selectCommand_5() const { return ____selectCommand_5; }
	inline Il2CppObject ** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(Il2CppObject * value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier(&____selectCommand_5, value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1474708225, ____updateCommand_6)); }
	inline Il2CppObject * get__updateCommand_6() const { return ____updateCommand_6; }
	inline Il2CppObject ** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(Il2CppObject * value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier(&____updateCommand_6, value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1474708225, ____deleteCommand_7)); }
	inline Il2CppObject * get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline Il2CppObject ** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(Il2CppObject * value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier(&____deleteCommand_7, value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1474708225, ____insertCommand_8)); }
	inline Il2CppObject * get__insertCommand_8() const { return ____insertCommand_8; }
	inline Il2CppObject ** get_address_of__insertCommand_8() { return &____insertCommand_8; }
	inline void set__insertCommand_8(Il2CppObject * value)
	{
		____insertCommand_8 = value;
		Il2CppCodeGenWriteBarrier(&____insertCommand_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
