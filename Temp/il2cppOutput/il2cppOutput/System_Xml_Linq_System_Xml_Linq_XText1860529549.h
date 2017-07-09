#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XNode2707504214.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XText
struct  XText_t1860529549  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XText::value
	String_t* ___value_8;

public:
	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(XText_t1860529549, ___value_8)); }
	inline String_t* get_value_8() const { return ___value_8; }
	inline String_t** get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(String_t* value)
	{
		___value_8 = value;
		Il2CppCodeGenWriteBarrier(&___value_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
