#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mapbox_Json_Mapbox_Json_Converters_XmlNodeWrapper422542994.h"

// System.Xml.XmlDocument
struct XmlDocument_t3649534162;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.XmlDocumentWrapper
struct  XmlDocumentWrapper_t321363087  : public XmlNodeWrapper_t422542994
{
public:
	// System.Xml.XmlDocument Mapbox.Json.Converters.XmlDocumentWrapper::_document
	XmlDocument_t3649534162 * ____document_3;

public:
	inline static int32_t get_offset_of__document_3() { return static_cast<int32_t>(offsetof(XmlDocumentWrapper_t321363087, ____document_3)); }
	inline XmlDocument_t3649534162 * get__document_3() const { return ____document_3; }
	inline XmlDocument_t3649534162 ** get_address_of__document_3() { return &____document_3; }
	inline void set__document_3(XmlDocument_t3649534162 * value)
	{
		____document_3 = value;
		Il2CppCodeGenWriteBarrier(&____document_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
