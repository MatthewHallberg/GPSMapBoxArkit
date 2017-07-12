#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mapbox.Json.Linq.JToken
struct JToken_t221585239;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JProperty/JPropertyList
struct  JPropertyList_t2656545778  : public Il2CppObject
{
public:
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty/JPropertyList::_token
	JToken_t221585239 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t2656545778, ____token_0)); }
	inline JToken_t221585239 * get__token_0() const { return ____token_0; }
	inline JToken_t221585239 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t221585239 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier(&____token_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
