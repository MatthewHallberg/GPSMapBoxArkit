#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_VectorTile_Contants_WireTy299527412.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.PbfReader
struct  PbfReader_t1678926567  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.VectorTile.PbfReader::<Tag>k__BackingField
	int32_t ___U3CTagU3Ek__BackingField_0;
	// System.UInt64 Mapbox.VectorTile.PbfReader::<Value>k__BackingField
	uint64_t ___U3CValueU3Ek__BackingField_1;
	// Mapbox.VectorTile.Contants.WireTypes Mapbox.VectorTile.PbfReader::<WireType>k__BackingField
	int32_t ___U3CWireTypeU3Ek__BackingField_2;
	// System.Byte[] Mapbox.VectorTile.PbfReader::_buffer
	ByteU5BU5D_t3397334013* ____buffer_3;
	// System.UInt64 Mapbox.VectorTile.PbfReader::_length
	uint64_t ____length_4;
	// System.UInt64 Mapbox.VectorTile.PbfReader::_pos
	uint64_t ____pos_5;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ___U3CTagU3Ek__BackingField_0)); }
	inline int32_t get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(int32_t value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ___U3CValueU3Ek__BackingField_1)); }
	inline uint64_t get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(uint64_t value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CWireTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ___U3CWireTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CWireTypeU3Ek__BackingField_2() const { return ___U3CWireTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CWireTypeU3Ek__BackingField_2() { return &___U3CWireTypeU3Ek__BackingField_2; }
	inline void set_U3CWireTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CWireTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of__buffer_3() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ____buffer_3)); }
	inline ByteU5BU5D_t3397334013* get__buffer_3() const { return ____buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_3() { return &____buffer_3; }
	inline void set__buffer_3(ByteU5BU5D_t3397334013* value)
	{
		____buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_3, value);
	}

	inline static int32_t get_offset_of__length_4() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ____length_4)); }
	inline uint64_t get__length_4() const { return ____length_4; }
	inline uint64_t* get_address_of__length_4() { return &____length_4; }
	inline void set__length_4(uint64_t value)
	{
		____length_4 = value;
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(PbfReader_t1678926567, ____pos_5)); }
	inline uint64_t get__pos_5() const { return ____pos_5; }
	inline uint64_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(uint64_t value)
	{
		____pos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
