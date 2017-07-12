#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_IO_Compression_InflaterSt3207061710.h"
#include "AssemblyU2DCSharp_Mapbox_IO_Compression_BlockType1882401481.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t2259747979;
// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t2737451788;
// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t2729097889;
// Mapbox.IO.Compression.IFileFormatReader
struct IFileFormatReader_t753692505;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.Inflater
struct  Inflater_t3697806625  : public Il2CppObject
{
public:
	// Mapbox.IO.Compression.OutputWindow Mapbox.IO.Compression.Inflater::output
	OutputWindow_t2259747979 * ___output_5;
	// Mapbox.IO.Compression.InputBuffer Mapbox.IO.Compression.Inflater::input
	InputBuffer_t2737451788 * ___input_6;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::literalLengthTree
	HuffmanTree_t2729097889 * ___literalLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::distanceTree
	HuffmanTree_t2729097889 * ___distanceTree_8;
	// Mapbox.IO.Compression.InflaterState Mapbox.IO.Compression.Inflater::state
	int32_t ___state_9;
	// System.Boolean Mapbox.IO.Compression.Inflater::hasFormatReader
	bool ___hasFormatReader_10;
	// System.Int32 Mapbox.IO.Compression.Inflater::bfinal
	int32_t ___bfinal_11;
	// Mapbox.IO.Compression.BlockType Mapbox.IO.Compression.Inflater::blockType
	int32_t ___blockType_12;
	// System.Byte[] Mapbox.IO.Compression.Inflater::blockLengthBuffer
	ByteU5BU5D_t3397334013* ___blockLengthBuffer_13;
	// System.Int32 Mapbox.IO.Compression.Inflater::blockLength
	int32_t ___blockLength_14;
	// System.Int32 Mapbox.IO.Compression.Inflater::length
	int32_t ___length_15;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCode
	int32_t ___distanceCode_16;
	// System.Int32 Mapbox.IO.Compression.Inflater::extraBits
	int32_t ___extraBits_17;
	// System.Int32 Mapbox.IO.Compression.Inflater::loopCounter
	int32_t ___loopCounter_18;
	// System.Int32 Mapbox.IO.Compression.Inflater::literalLengthCodeCount
	int32_t ___literalLengthCodeCount_19;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCodeCount
	int32_t ___distanceCodeCount_20;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeLengthCodeCount
	int32_t ___codeLengthCodeCount_21;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeArraySize
	int32_t ___codeArraySize_22;
	// System.Int32 Mapbox.IO.Compression.Inflater::lengthCode
	int32_t ___lengthCode_23;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeList
	ByteU5BU5D_t3397334013* ___codeList_24;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeLengthTreeCodeLength
	ByteU5BU5D_t3397334013* ___codeLengthTreeCodeLength_25;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::codeLengthTree
	HuffmanTree_t2729097889 * ___codeLengthTree_26;
	// Mapbox.IO.Compression.IFileFormatReader Mapbox.IO.Compression.Inflater::formatReader
	Il2CppObject * ___formatReader_27;

public:
	inline static int32_t get_offset_of_output_5() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___output_5)); }
	inline OutputWindow_t2259747979 * get_output_5() const { return ___output_5; }
	inline OutputWindow_t2259747979 ** get_address_of_output_5() { return &___output_5; }
	inline void set_output_5(OutputWindow_t2259747979 * value)
	{
		___output_5 = value;
		Il2CppCodeGenWriteBarrier(&___output_5, value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___input_6)); }
	inline InputBuffer_t2737451788 * get_input_6() const { return ___input_6; }
	inline InputBuffer_t2737451788 ** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(InputBuffer_t2737451788 * value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier(&___input_6, value);
	}

	inline static int32_t get_offset_of_literalLengthTree_7() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___literalLengthTree_7)); }
	inline HuffmanTree_t2729097889 * get_literalLengthTree_7() const { return ___literalLengthTree_7; }
	inline HuffmanTree_t2729097889 ** get_address_of_literalLengthTree_7() { return &___literalLengthTree_7; }
	inline void set_literalLengthTree_7(HuffmanTree_t2729097889 * value)
	{
		___literalLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier(&___literalLengthTree_7, value);
	}

	inline static int32_t get_offset_of_distanceTree_8() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___distanceTree_8)); }
	inline HuffmanTree_t2729097889 * get_distanceTree_8() const { return ___distanceTree_8; }
	inline HuffmanTree_t2729097889 ** get_address_of_distanceTree_8() { return &___distanceTree_8; }
	inline void set_distanceTree_8(HuffmanTree_t2729097889 * value)
	{
		___distanceTree_8 = value;
		Il2CppCodeGenWriteBarrier(&___distanceTree_8, value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_hasFormatReader_10() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___hasFormatReader_10)); }
	inline bool get_hasFormatReader_10() const { return ___hasFormatReader_10; }
	inline bool* get_address_of_hasFormatReader_10() { return &___hasFormatReader_10; }
	inline void set_hasFormatReader_10(bool value)
	{
		___hasFormatReader_10 = value;
	}

	inline static int32_t get_offset_of_bfinal_11() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___bfinal_11)); }
	inline int32_t get_bfinal_11() const { return ___bfinal_11; }
	inline int32_t* get_address_of_bfinal_11() { return &___bfinal_11; }
	inline void set_bfinal_11(int32_t value)
	{
		___bfinal_11 = value;
	}

	inline static int32_t get_offset_of_blockType_12() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___blockType_12)); }
	inline int32_t get_blockType_12() const { return ___blockType_12; }
	inline int32_t* get_address_of_blockType_12() { return &___blockType_12; }
	inline void set_blockType_12(int32_t value)
	{
		___blockType_12 = value;
	}

	inline static int32_t get_offset_of_blockLengthBuffer_13() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___blockLengthBuffer_13)); }
	inline ByteU5BU5D_t3397334013* get_blockLengthBuffer_13() const { return ___blockLengthBuffer_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_blockLengthBuffer_13() { return &___blockLengthBuffer_13; }
	inline void set_blockLengthBuffer_13(ByteU5BU5D_t3397334013* value)
	{
		___blockLengthBuffer_13 = value;
		Il2CppCodeGenWriteBarrier(&___blockLengthBuffer_13, value);
	}

	inline static int32_t get_offset_of_blockLength_14() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___blockLength_14)); }
	inline int32_t get_blockLength_14() const { return ___blockLength_14; }
	inline int32_t* get_address_of_blockLength_14() { return &___blockLength_14; }
	inline void set_blockLength_14(int32_t value)
	{
		___blockLength_14 = value;
	}

	inline static int32_t get_offset_of_length_15() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___length_15)); }
	inline int32_t get_length_15() const { return ___length_15; }
	inline int32_t* get_address_of_length_15() { return &___length_15; }
	inline void set_length_15(int32_t value)
	{
		___length_15 = value;
	}

	inline static int32_t get_offset_of_distanceCode_16() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___distanceCode_16)); }
	inline int32_t get_distanceCode_16() const { return ___distanceCode_16; }
	inline int32_t* get_address_of_distanceCode_16() { return &___distanceCode_16; }
	inline void set_distanceCode_16(int32_t value)
	{
		___distanceCode_16 = value;
	}

	inline static int32_t get_offset_of_extraBits_17() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___extraBits_17)); }
	inline int32_t get_extraBits_17() const { return ___extraBits_17; }
	inline int32_t* get_address_of_extraBits_17() { return &___extraBits_17; }
	inline void set_extraBits_17(int32_t value)
	{
		___extraBits_17 = value;
	}

	inline static int32_t get_offset_of_loopCounter_18() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___loopCounter_18)); }
	inline int32_t get_loopCounter_18() const { return ___loopCounter_18; }
	inline int32_t* get_address_of_loopCounter_18() { return &___loopCounter_18; }
	inline void set_loopCounter_18(int32_t value)
	{
		___loopCounter_18 = value;
	}

	inline static int32_t get_offset_of_literalLengthCodeCount_19() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___literalLengthCodeCount_19)); }
	inline int32_t get_literalLengthCodeCount_19() const { return ___literalLengthCodeCount_19; }
	inline int32_t* get_address_of_literalLengthCodeCount_19() { return &___literalLengthCodeCount_19; }
	inline void set_literalLengthCodeCount_19(int32_t value)
	{
		___literalLengthCodeCount_19 = value;
	}

	inline static int32_t get_offset_of_distanceCodeCount_20() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___distanceCodeCount_20)); }
	inline int32_t get_distanceCodeCount_20() const { return ___distanceCodeCount_20; }
	inline int32_t* get_address_of_distanceCodeCount_20() { return &___distanceCodeCount_20; }
	inline void set_distanceCodeCount_20(int32_t value)
	{
		___distanceCodeCount_20 = value;
	}

	inline static int32_t get_offset_of_codeLengthCodeCount_21() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___codeLengthCodeCount_21)); }
	inline int32_t get_codeLengthCodeCount_21() const { return ___codeLengthCodeCount_21; }
	inline int32_t* get_address_of_codeLengthCodeCount_21() { return &___codeLengthCodeCount_21; }
	inline void set_codeLengthCodeCount_21(int32_t value)
	{
		___codeLengthCodeCount_21 = value;
	}

	inline static int32_t get_offset_of_codeArraySize_22() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___codeArraySize_22)); }
	inline int32_t get_codeArraySize_22() const { return ___codeArraySize_22; }
	inline int32_t* get_address_of_codeArraySize_22() { return &___codeArraySize_22; }
	inline void set_codeArraySize_22(int32_t value)
	{
		___codeArraySize_22 = value;
	}

	inline static int32_t get_offset_of_lengthCode_23() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___lengthCode_23)); }
	inline int32_t get_lengthCode_23() const { return ___lengthCode_23; }
	inline int32_t* get_address_of_lengthCode_23() { return &___lengthCode_23; }
	inline void set_lengthCode_23(int32_t value)
	{
		___lengthCode_23 = value;
	}

	inline static int32_t get_offset_of_codeList_24() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___codeList_24)); }
	inline ByteU5BU5D_t3397334013* get_codeList_24() const { return ___codeList_24; }
	inline ByteU5BU5D_t3397334013** get_address_of_codeList_24() { return &___codeList_24; }
	inline void set_codeList_24(ByteU5BU5D_t3397334013* value)
	{
		___codeList_24 = value;
		Il2CppCodeGenWriteBarrier(&___codeList_24, value);
	}

	inline static int32_t get_offset_of_codeLengthTreeCodeLength_25() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___codeLengthTreeCodeLength_25)); }
	inline ByteU5BU5D_t3397334013* get_codeLengthTreeCodeLength_25() const { return ___codeLengthTreeCodeLength_25; }
	inline ByteU5BU5D_t3397334013** get_address_of_codeLengthTreeCodeLength_25() { return &___codeLengthTreeCodeLength_25; }
	inline void set_codeLengthTreeCodeLength_25(ByteU5BU5D_t3397334013* value)
	{
		___codeLengthTreeCodeLength_25 = value;
		Il2CppCodeGenWriteBarrier(&___codeLengthTreeCodeLength_25, value);
	}

	inline static int32_t get_offset_of_codeLengthTree_26() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___codeLengthTree_26)); }
	inline HuffmanTree_t2729097889 * get_codeLengthTree_26() const { return ___codeLengthTree_26; }
	inline HuffmanTree_t2729097889 ** get_address_of_codeLengthTree_26() { return &___codeLengthTree_26; }
	inline void set_codeLengthTree_26(HuffmanTree_t2729097889 * value)
	{
		___codeLengthTree_26 = value;
		Il2CppCodeGenWriteBarrier(&___codeLengthTree_26, value);
	}

	inline static int32_t get_offset_of_formatReader_27() { return static_cast<int32_t>(offsetof(Inflater_t3697806625, ___formatReader_27)); }
	inline Il2CppObject * get_formatReader_27() const { return ___formatReader_27; }
	inline Il2CppObject ** get_address_of_formatReader_27() { return &___formatReader_27; }
	inline void set_formatReader_27(Il2CppObject * value)
	{
		___formatReader_27 = value;
		Il2CppCodeGenWriteBarrier(&___formatReader_27, value);
	}
};

struct Inflater_t3697806625_StaticFields
{
public:
	// System.Byte[] Mapbox.IO.Compression.Inflater::extraLengthBits
	ByteU5BU5D_t3397334013* ___extraLengthBits_0;
	// System.Int32[] Mapbox.IO.Compression.Inflater::lengthBase
	Int32U5BU5D_t3030399641* ___lengthBase_1;
	// System.Int32[] Mapbox.IO.Compression.Inflater::distanceBasePosition
	Int32U5BU5D_t3030399641* ___distanceBasePosition_2;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeOrder
	ByteU5BU5D_t3397334013* ___codeOrder_3;
	// System.Byte[] Mapbox.IO.Compression.Inflater::staticDistanceTreeTable
	ByteU5BU5D_t3397334013* ___staticDistanceTreeTable_4;

public:
	inline static int32_t get_offset_of_extraLengthBits_0() { return static_cast<int32_t>(offsetof(Inflater_t3697806625_StaticFields, ___extraLengthBits_0)); }
	inline ByteU5BU5D_t3397334013* get_extraLengthBits_0() const { return ___extraLengthBits_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_extraLengthBits_0() { return &___extraLengthBits_0; }
	inline void set_extraLengthBits_0(ByteU5BU5D_t3397334013* value)
	{
		___extraLengthBits_0 = value;
		Il2CppCodeGenWriteBarrier(&___extraLengthBits_0, value);
	}

	inline static int32_t get_offset_of_lengthBase_1() { return static_cast<int32_t>(offsetof(Inflater_t3697806625_StaticFields, ___lengthBase_1)); }
	inline Int32U5BU5D_t3030399641* get_lengthBase_1() const { return ___lengthBase_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_lengthBase_1() { return &___lengthBase_1; }
	inline void set_lengthBase_1(Int32U5BU5D_t3030399641* value)
	{
		___lengthBase_1 = value;
		Il2CppCodeGenWriteBarrier(&___lengthBase_1, value);
	}

	inline static int32_t get_offset_of_distanceBasePosition_2() { return static_cast<int32_t>(offsetof(Inflater_t3697806625_StaticFields, ___distanceBasePosition_2)); }
	inline Int32U5BU5D_t3030399641* get_distanceBasePosition_2() const { return ___distanceBasePosition_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_distanceBasePosition_2() { return &___distanceBasePosition_2; }
	inline void set_distanceBasePosition_2(Int32U5BU5D_t3030399641* value)
	{
		___distanceBasePosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___distanceBasePosition_2, value);
	}

	inline static int32_t get_offset_of_codeOrder_3() { return static_cast<int32_t>(offsetof(Inflater_t3697806625_StaticFields, ___codeOrder_3)); }
	inline ByteU5BU5D_t3397334013* get_codeOrder_3() const { return ___codeOrder_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_codeOrder_3() { return &___codeOrder_3; }
	inline void set_codeOrder_3(ByteU5BU5D_t3397334013* value)
	{
		___codeOrder_3 = value;
		Il2CppCodeGenWriteBarrier(&___codeOrder_3, value);
	}

	inline static int32_t get_offset_of_staticDistanceTreeTable_4() { return static_cast<int32_t>(offsetof(Inflater_t3697806625_StaticFields, ___staticDistanceTreeTable_4)); }
	inline ByteU5BU5D_t3397334013* get_staticDistanceTreeTable_4() const { return ___staticDistanceTreeTable_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_staticDistanceTreeTable_4() { return &___staticDistanceTreeTable_4; }
	inline void set_staticDistanceTreeTable_4(ByteU5BU5D_t3397334013* value)
	{
		___staticDistanceTreeTable_4 = value;
		Il2CppCodeGenWriteBarrier(&___staticDistanceTreeTable_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
