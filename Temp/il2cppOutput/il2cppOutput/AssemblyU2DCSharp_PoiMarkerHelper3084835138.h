#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoiMarkerHelper
struct  PoiMarkerHelper_t3084835138  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PoiMarkerHelper::_props
	Dictionary_2_t309261261 * ____props_2;

public:
	inline static int32_t get_offset_of__props_2() { return static_cast<int32_t>(offsetof(PoiMarkerHelper_t3084835138, ____props_2)); }
	inline Dictionary_2_t309261261 * get__props_2() const { return ____props_2; }
	inline Dictionary_2_t309261261 ** get_address_of__props_2() { return &____props_2; }
	inline void set__props_2(Dictionary_2_t309261261 * value)
	{
		____props_2 = value;
		Il2CppCodeGenWriteBarrier(&____props_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
