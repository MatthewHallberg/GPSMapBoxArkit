#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TriangleNet.IO.IFileFormat>
struct List_1_t2624612118;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.IO.FileProcessor
struct  FileProcessor_t1367559662  : public Il2CppObject
{
public:

public:
};

struct FileProcessor_t1367559662_StaticFields
{
public:
	// System.Collections.Generic.List`1<TriangleNet.IO.IFileFormat> TriangleNet.IO.FileProcessor::formats
	List_1_t2624612118 * ___formats_0;

public:
	inline static int32_t get_offset_of_formats_0() { return static_cast<int32_t>(offsetof(FileProcessor_t1367559662_StaticFields, ___formats_0)); }
	inline List_1_t2624612118 * get_formats_0() const { return ___formats_0; }
	inline List_1_t2624612118 ** get_address_of_formats_0() { return &___formats_0; }
	inline void set_formats_0(List_1_t2624612118 * value)
	{
		___formats_0 = value;
		Il2CppCodeGenWriteBarrier(&___formats_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
