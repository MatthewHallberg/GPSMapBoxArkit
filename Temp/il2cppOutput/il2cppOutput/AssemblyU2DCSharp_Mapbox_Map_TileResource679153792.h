#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.TileResource
struct  TileResource_t679153792  : public Il2CppObject
{
public:
	// System.String Mapbox.Map.TileResource::_query
	String_t* ____query_1;

public:
	inline static int32_t get_offset_of__query_1() { return static_cast<int32_t>(offsetof(TileResource_t679153792, ____query_1)); }
	inline String_t* get__query_1() const { return ____query_1; }
	inline String_t** get_address_of__query_1() { return &____query_1; }
	inline void set__query_1(String_t* value)
	{
		____query_1 = value;
		Il2CppCodeGenWriteBarrier(&____query_1, value);
	}
};

struct TileResource_t679153792_StaticFields
{
public:
	// System.String Mapbox.Map.TileResource::_eventQuery
	String_t* ____eventQuery_0;

public:
	inline static int32_t get_offset_of__eventQuery_0() { return static_cast<int32_t>(offsetof(TileResource_t679153792_StaticFields, ____eventQuery_0)); }
	inline String_t* get__eventQuery_0() const { return ____eventQuery_0; }
	inline String_t** get_address_of__eventQuery_0() { return &____eventQuery_0; }
	inline void set__eventQuery_0(String_t* value)
	{
		____eventQuery_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventQuery_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
