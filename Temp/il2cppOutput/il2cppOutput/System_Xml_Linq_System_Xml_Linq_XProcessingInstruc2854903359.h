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

// System.Xml.Linq.XProcessingInstruction
struct  XProcessingInstruction_t2854903359  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_9;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2854903359, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2854903359, ___data_9)); }
	inline String_t* get_data_9() const { return ___data_9; }
	inline String_t** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(String_t* value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier(&___data_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
