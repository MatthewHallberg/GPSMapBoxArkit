#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.IO.TriangleReader
struct  TriangleReader_t245308837  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.IO.TriangleReader::startIndex
	int32_t ___startIndex_1;

public:
	inline static int32_t get_offset_of_startIndex_1() { return static_cast<int32_t>(offsetof(TriangleReader_t245308837, ___startIndex_1)); }
	inline int32_t get_startIndex_1() const { return ___startIndex_1; }
	inline int32_t* get_address_of_startIndex_1() { return &___startIndex_1; }
	inline void set_startIndex_1(int32_t value)
	{
		___startIndex_1 = value;
	}
};

struct TriangleReader_t245308837_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo TriangleNet.IO.TriangleReader::nfi
	NumberFormatInfo_t104580544 * ___nfi_0;

public:
	inline static int32_t get_offset_of_nfi_0() { return static_cast<int32_t>(offsetof(TriangleReader_t245308837_StaticFields, ___nfi_0)); }
	inline NumberFormatInfo_t104580544 * get_nfi_0() const { return ___nfi_0; }
	inline NumberFormatInfo_t104580544 ** get_address_of_nfi_0() { return &___nfi_0; }
	inline void set_nfi_0(NumberFormatInfo_t104580544 * value)
	{
		___nfi_0 = value;
		Il2CppCodeGenWriteBarrier(&___nfi_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
