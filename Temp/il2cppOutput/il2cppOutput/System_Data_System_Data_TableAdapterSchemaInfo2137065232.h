#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t661609867;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t1474708225;
// System.Data.Common.DbConnection
struct DbConnection_t1449646780;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableAdapterSchemaInfo
struct  TableAdapterSchemaInfo_t2137065232  : public Il2CppObject
{
public:
	// System.Data.Common.DbProviderFactory System.Data.TableAdapterSchemaInfo::Provider
	DbProviderFactory_t661609867 * ___Provider_0;
	// System.Data.Common.DbDataAdapter System.Data.TableAdapterSchemaInfo::Adapter
	DbDataAdapter_t1474708225 * ___Adapter_1;
	// System.Data.Common.DbConnection System.Data.TableAdapterSchemaInfo::Connection
	DbConnection_t1449646780 * ___Connection_2;
	// System.String System.Data.TableAdapterSchemaInfo::ConnectionString
	String_t* ___ConnectionString_3;
	// System.String System.Data.TableAdapterSchemaInfo::BaseClass
	String_t* ___BaseClass_4;
	// System.String System.Data.TableAdapterSchemaInfo::Name
	String_t* ___Name_5;
	// System.Boolean System.Data.TableAdapterSchemaInfo::ShortCommands
	bool ___ShortCommands_6;
	// System.Collections.ArrayList System.Data.TableAdapterSchemaInfo::Commands
	ArrayList_t4252133567 * ___Commands_7;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___Provider_0)); }
	inline DbProviderFactory_t661609867 * get_Provider_0() const { return ___Provider_0; }
	inline DbProviderFactory_t661609867 ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(DbProviderFactory_t661609867 * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier(&___Provider_0, value);
	}

	inline static int32_t get_offset_of_Adapter_1() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___Adapter_1)); }
	inline DbDataAdapter_t1474708225 * get_Adapter_1() const { return ___Adapter_1; }
	inline DbDataAdapter_t1474708225 ** get_address_of_Adapter_1() { return &___Adapter_1; }
	inline void set_Adapter_1(DbDataAdapter_t1474708225 * value)
	{
		___Adapter_1 = value;
		Il2CppCodeGenWriteBarrier(&___Adapter_1, value);
	}

	inline static int32_t get_offset_of_Connection_2() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___Connection_2)); }
	inline DbConnection_t1449646780 * get_Connection_2() const { return ___Connection_2; }
	inline DbConnection_t1449646780 ** get_address_of_Connection_2() { return &___Connection_2; }
	inline void set_Connection_2(DbConnection_t1449646780 * value)
	{
		___Connection_2 = value;
		Il2CppCodeGenWriteBarrier(&___Connection_2, value);
	}

	inline static int32_t get_offset_of_ConnectionString_3() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___ConnectionString_3)); }
	inline String_t* get_ConnectionString_3() const { return ___ConnectionString_3; }
	inline String_t** get_address_of_ConnectionString_3() { return &___ConnectionString_3; }
	inline void set_ConnectionString_3(String_t* value)
	{
		___ConnectionString_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionString_3, value);
	}

	inline static int32_t get_offset_of_BaseClass_4() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___BaseClass_4)); }
	inline String_t* get_BaseClass_4() const { return ___BaseClass_4; }
	inline String_t** get_address_of_BaseClass_4() { return &___BaseClass_4; }
	inline void set_BaseClass_4(String_t* value)
	{
		___BaseClass_4 = value;
		Il2CppCodeGenWriteBarrier(&___BaseClass_4, value);
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier(&___Name_5, value);
	}

	inline static int32_t get_offset_of_ShortCommands_6() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___ShortCommands_6)); }
	inline bool get_ShortCommands_6() const { return ___ShortCommands_6; }
	inline bool* get_address_of_ShortCommands_6() { return &___ShortCommands_6; }
	inline void set_ShortCommands_6(bool value)
	{
		___ShortCommands_6 = value;
	}

	inline static int32_t get_offset_of_Commands_7() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t2137065232, ___Commands_7)); }
	inline ArrayList_t4252133567 * get_Commands_7() const { return ___Commands_7; }
	inline ArrayList_t4252133567 ** get_address_of_Commands_7() { return &___Commands_7; }
	inline void set_Commands_7(ArrayList_t4252133567 * value)
	{
		___Commands_7 = value;
		Il2CppCodeGenWriteBarrier(&___Commands_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
