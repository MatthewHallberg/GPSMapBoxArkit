#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.OpenUrlOnButtonClick
struct  OpenUrlOnButtonClick_t3313525014  : public MonoBehaviour_t1158329972
{
public:
	// System.String Mapbox.Unity.Utilities.OpenUrlOnButtonClick::_url
	String_t* ____url_2;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(OpenUrlOnButtonClick_t3313525014, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier(&____url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
