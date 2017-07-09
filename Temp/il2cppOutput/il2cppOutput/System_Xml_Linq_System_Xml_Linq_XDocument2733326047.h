#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Linq_System_Xml_Linq_XContainer1445911831.h"

// System.Xml.Linq.XDeclaration
struct XDeclaration_t3367285402;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocument
struct  XDocument_t2733326047  : public XContainer_t1445911831
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::xmldecl
	XDeclaration_t3367285402 * ___xmldecl_10;

public:
	inline static int32_t get_offset_of_xmldecl_10() { return static_cast<int32_t>(offsetof(XDocument_t2733326047, ___xmldecl_10)); }
	inline XDeclaration_t3367285402 * get_xmldecl_10() const { return ___xmldecl_10; }
	inline XDeclaration_t3367285402 ** get_address_of_xmldecl_10() { return &___xmldecl_10; }
	inline void set_xmldecl_10(XDeclaration_t3367285402 * value)
	{
		___xmldecl_10 = value;
		Il2CppCodeGenWriteBarrier(&___xmldecl_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
