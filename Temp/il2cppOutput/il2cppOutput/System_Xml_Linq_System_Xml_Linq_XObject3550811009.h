#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.Linq.XContainer
struct XContainer_t1445911831;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObject
struct  XObject_t3550811009  : public Il2CppObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::owner
	XContainer_t1445911831 * ___owner_0;
	// System.String System.Xml.Linq.XObject::baseuri
	String_t* ___baseuri_1;
	// System.Int32 System.Xml.Linq.XObject::line
	int32_t ___line_2;
	// System.Int32 System.Xml.Linq.XObject::column
	int32_t ___column_3;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___owner_0)); }
	inline XContainer_t1445911831 * get_owner_0() const { return ___owner_0; }
	inline XContainer_t1445911831 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(XContainer_t1445911831 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}

	inline static int32_t get_offset_of_baseuri_1() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___baseuri_1)); }
	inline String_t* get_baseuri_1() const { return ___baseuri_1; }
	inline String_t** get_address_of_baseuri_1() { return &___baseuri_1; }
	inline void set_baseuri_1(String_t* value)
	{
		___baseuri_1 = value;
		Il2CppCodeGenWriteBarrier(&___baseuri_1, value);
	}

	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___line_2)); }
	inline int32_t get_line_2() const { return ___line_2; }
	inline int32_t* get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(int32_t value)
	{
		___line_2 = value;
	}

	inline static int32_t get_offset_of_column_3() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___column_3)); }
	inline int32_t get_column_3() const { return ___column_3; }
	inline int32_t* get_address_of_column_3() { return &___column_3; }
	inline void set_column_3(int32_t value)
	{
		___column_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
