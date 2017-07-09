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
// System.Xml.Linq.XNamespace
struct XNamespace_t1613015075;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XName
struct  XName_t785190363  : public Il2CppObject
{
public:
	// System.String System.Xml.Linq.XName::local
	String_t* ___local_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t1613015075 * ___ns_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(XName_t785190363, ___local_0)); }
	inline String_t* get_local_0() const { return ___local_0; }
	inline String_t** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(String_t* value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier(&___local_0, value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(XName_t785190363, ___ns_1)); }
	inline XNamespace_t1613015075 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t1613015075 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t1613015075 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier(&___ns_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
