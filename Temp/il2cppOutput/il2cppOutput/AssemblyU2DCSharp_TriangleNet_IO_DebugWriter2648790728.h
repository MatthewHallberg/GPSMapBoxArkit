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
// System.String
struct String_t;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// TriangleNet.IO.DebugWriter
struct DebugWriter_t2648790728;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.IO.DebugWriter
struct  DebugWriter_t2648790728  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.IO.DebugWriter::iteration
	int32_t ___iteration_1;
	// System.String TriangleNet.IO.DebugWriter::session
	String_t* ___session_2;
	// System.IO.StreamWriter TriangleNet.IO.DebugWriter::stream
	StreamWriter_t3858580635 * ___stream_3;
	// System.String TriangleNet.IO.DebugWriter::tmpFile
	String_t* ___tmpFile_4;
	// System.Int32[] TriangleNet.IO.DebugWriter::vertices
	Int32U5BU5D_t3030399641* ___vertices_5;
	// System.Int32 TriangleNet.IO.DebugWriter::triangles
	int32_t ___triangles_6;

public:
	inline static int32_t get_offset_of_iteration_1() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___iteration_1)); }
	inline int32_t get_iteration_1() const { return ___iteration_1; }
	inline int32_t* get_address_of_iteration_1() { return &___iteration_1; }
	inline void set_iteration_1(int32_t value)
	{
		___iteration_1 = value;
	}

	inline static int32_t get_offset_of_session_2() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___session_2)); }
	inline String_t* get_session_2() const { return ___session_2; }
	inline String_t** get_address_of_session_2() { return &___session_2; }
	inline void set_session_2(String_t* value)
	{
		___session_2 = value;
		Il2CppCodeGenWriteBarrier(&___session_2, value);
	}

	inline static int32_t get_offset_of_stream_3() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___stream_3)); }
	inline StreamWriter_t3858580635 * get_stream_3() const { return ___stream_3; }
	inline StreamWriter_t3858580635 ** get_address_of_stream_3() { return &___stream_3; }
	inline void set_stream_3(StreamWriter_t3858580635 * value)
	{
		___stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___stream_3, value);
	}

	inline static int32_t get_offset_of_tmpFile_4() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___tmpFile_4)); }
	inline String_t* get_tmpFile_4() const { return ___tmpFile_4; }
	inline String_t** get_address_of_tmpFile_4() { return &___tmpFile_4; }
	inline void set_tmpFile_4(String_t* value)
	{
		___tmpFile_4 = value;
		Il2CppCodeGenWriteBarrier(&___tmpFile_4, value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___vertices_5)); }
	inline Int32U5BU5D_t3030399641* get_vertices_5() const { return ___vertices_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(Int32U5BU5D_t3030399641* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_5, value);
	}

	inline static int32_t get_offset_of_triangles_6() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728, ___triangles_6)); }
	inline int32_t get_triangles_6() const { return ___triangles_6; }
	inline int32_t* get_address_of_triangles_6() { return &___triangles_6; }
	inline void set_triangles_6(int32_t value)
	{
		___triangles_6 = value;
	}
};

struct DebugWriter_t2648790728_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo TriangleNet.IO.DebugWriter::nfi
	NumberFormatInfo_t104580544 * ___nfi_0;
	// TriangleNet.IO.DebugWriter TriangleNet.IO.DebugWriter::instance
	DebugWriter_t2648790728 * ___instance_7;

public:
	inline static int32_t get_offset_of_nfi_0() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728_StaticFields, ___nfi_0)); }
	inline NumberFormatInfo_t104580544 * get_nfi_0() const { return ___nfi_0; }
	inline NumberFormatInfo_t104580544 ** get_address_of_nfi_0() { return &___nfi_0; }
	inline void set_nfi_0(NumberFormatInfo_t104580544 * value)
	{
		___nfi_0 = value;
		Il2CppCodeGenWriteBarrier(&___nfi_0, value);
	}

	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(DebugWriter_t2648790728_StaticFields, ___instance_7)); }
	inline DebugWriter_t2648790728 * get_instance_7() const { return ___instance_7; }
	inline DebugWriter_t2648790728 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(DebugWriter_t2648790728 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
