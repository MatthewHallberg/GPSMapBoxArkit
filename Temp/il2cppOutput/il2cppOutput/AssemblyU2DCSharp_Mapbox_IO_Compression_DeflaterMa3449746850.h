#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_IO_Compression_DeflaterMa3359711546.h"

// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_t339831550;
// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_t4224326255;
// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t57713483;
// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_t3064841081;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflaterManaged
struct  DeflaterManaged_t3449746850  : public Il2CppObject
{
public:
	// Mapbox.IO.Compression.FastEncoder Mapbox.IO.Compression.DeflaterManaged::deflateEncoder
	FastEncoder_t339831550 * ___deflateEncoder_4;
	// Mapbox.IO.Compression.CopyEncoder Mapbox.IO.Compression.DeflaterManaged::copyEncoder
	CopyEncoder_t4224326255 * ___copyEncoder_5;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::input
	DeflateInput_t57713483 * ___input_6;
	// Mapbox.IO.Compression.OutputBuffer Mapbox.IO.Compression.DeflaterManaged::output
	OutputBuffer_t3064841081 * ___output_7;
	// Mapbox.IO.Compression.DeflaterManaged/DeflaterState Mapbox.IO.Compression.DeflaterManaged::processingState
	int32_t ___processingState_8;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::inputFromHistory
	DeflateInput_t57713483 * ___inputFromHistory_9;

public:
	inline static int32_t get_offset_of_deflateEncoder_4() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___deflateEncoder_4)); }
	inline FastEncoder_t339831550 * get_deflateEncoder_4() const { return ___deflateEncoder_4; }
	inline FastEncoder_t339831550 ** get_address_of_deflateEncoder_4() { return &___deflateEncoder_4; }
	inline void set_deflateEncoder_4(FastEncoder_t339831550 * value)
	{
		___deflateEncoder_4 = value;
		Il2CppCodeGenWriteBarrier(&___deflateEncoder_4, value);
	}

	inline static int32_t get_offset_of_copyEncoder_5() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___copyEncoder_5)); }
	inline CopyEncoder_t4224326255 * get_copyEncoder_5() const { return ___copyEncoder_5; }
	inline CopyEncoder_t4224326255 ** get_address_of_copyEncoder_5() { return &___copyEncoder_5; }
	inline void set_copyEncoder_5(CopyEncoder_t4224326255 * value)
	{
		___copyEncoder_5 = value;
		Il2CppCodeGenWriteBarrier(&___copyEncoder_5, value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___input_6)); }
	inline DeflateInput_t57713483 * get_input_6() const { return ___input_6; }
	inline DeflateInput_t57713483 ** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(DeflateInput_t57713483 * value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier(&___input_6, value);
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___output_7)); }
	inline OutputBuffer_t3064841081 * get_output_7() const { return ___output_7; }
	inline OutputBuffer_t3064841081 ** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(OutputBuffer_t3064841081 * value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier(&___output_7, value);
	}

	inline static int32_t get_offset_of_processingState_8() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___processingState_8)); }
	inline int32_t get_processingState_8() const { return ___processingState_8; }
	inline int32_t* get_address_of_processingState_8() { return &___processingState_8; }
	inline void set_processingState_8(int32_t value)
	{
		___processingState_8 = value;
	}

	inline static int32_t get_offset_of_inputFromHistory_9() { return static_cast<int32_t>(offsetof(DeflaterManaged_t3449746850, ___inputFromHistory_9)); }
	inline DeflateInput_t57713483 * get_inputFromHistory_9() const { return ___inputFromHistory_9; }
	inline DeflateInput_t57713483 ** get_address_of_inputFromHistory_9() { return &___inputFromHistory_9; }
	inline void set_inputFromHistory_9(DeflateInput_t57713483 * value)
	{
		___inputFromHistory_9 = value;
		Il2CppCodeGenWriteBarrier(&___inputFromHistory_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
