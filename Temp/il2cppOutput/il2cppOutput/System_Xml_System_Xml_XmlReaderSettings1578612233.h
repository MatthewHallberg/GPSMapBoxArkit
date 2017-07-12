#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_ConformanceLevel3761201363.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t1578612233  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_conformance_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___conformance_1)); }
	inline int32_t get_conformance_1() const { return ___conformance_1; }
	inline int32_t* get_address_of_conformance_1() { return &___conformance_1; }
	inline void set_conformance_1(int32_t value)
	{
		___conformance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
