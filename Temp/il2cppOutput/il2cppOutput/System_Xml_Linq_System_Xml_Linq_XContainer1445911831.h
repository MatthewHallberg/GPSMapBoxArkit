#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XNode2707504214.h"

// System.Xml.Linq.XNode
struct XNode_t2707504214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer
struct  XContainer_t1445911831  : public XNode_t2707504214
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::first
	XNode_t2707504214 * ___first_8;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::last
	XNode_t2707504214 * ___last_9;

public:
	inline static int32_t get_offset_of_first_8() { return static_cast<int32_t>(offsetof(XContainer_t1445911831, ___first_8)); }
	inline XNode_t2707504214 * get_first_8() const { return ___first_8; }
	inline XNode_t2707504214 ** get_address_of_first_8() { return &___first_8; }
	inline void set_first_8(XNode_t2707504214 * value)
	{
		___first_8 = value;
		Il2CppCodeGenWriteBarrier(&___first_8, value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(XContainer_t1445911831, ___last_9)); }
	inline XNode_t2707504214 * get_last_9() const { return ___last_9; }
	inline XNode_t2707504214 ** get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(XNode_t2707504214 * value)
	{
		___last_9 = value;
		Il2CppCodeGenWriteBarrier(&___last_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
