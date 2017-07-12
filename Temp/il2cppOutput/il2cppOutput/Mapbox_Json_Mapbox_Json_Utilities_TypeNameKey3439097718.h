#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Utilities.TypeNameKey
struct  TypeNameKey_t3439097718 
{
public:
	// System.String Mapbox.Json.Utilities.TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Mapbox.Json.Utilities.TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_t3439097718, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier(&___AssemblyName_0, value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_t3439097718, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___TypeName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Json.Utilities.TypeNameKey
struct TypeNameKey_t3439097718_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Mapbox.Json.Utilities.TypeNameKey
struct TypeNameKey_t3439097718_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};
