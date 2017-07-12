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

// System.Xml.Linq.XDeclaration
struct  XDeclaration_t3367285402  : public Il2CppObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_0;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_1;
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_2;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_0, value);
	}

	inline static int32_t get_offset_of_standalone_1() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___standalone_1)); }
	inline String_t* get_standalone_1() const { return ___standalone_1; }
	inline String_t** get_address_of_standalone_1() { return &___standalone_1; }
	inline void set_standalone_1(String_t* value)
	{
		___standalone_1 = value;
		Il2CppCodeGenWriteBarrier(&___standalone_1, value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier(&___version_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
