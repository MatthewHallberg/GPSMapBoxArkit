#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlReader
struct XmlReader_t3675626668;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataReader
struct  XmlDataReader_t1109197734  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDataReader::dataset
	DataSet_t3097402844 * ___dataset_0;
	// System.Xml.XmlReader System.Data.XmlDataReader::reader
	XmlReader_t3675626668 * ___reader_1;
	// System.Data.XmlReadMode System.Data.XmlDataReader::mode
	int32_t ___mode_2;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataReader_t1109197734, ___dataset_0)); }
	inline DataSet_t3097402844 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t3097402844 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t3097402844 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_0, value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlDataReader_t1109197734, ___reader_1)); }
	inline XmlReader_t3675626668 * get_reader_1() const { return ___reader_1; }
	inline XmlReader_t3675626668 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(XmlReader_t3675626668 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataReader_t1109197734, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
