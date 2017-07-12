#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2d3730485367.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3194695850;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Directions.Intersection
struct  Intersection_t2772636325  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.Directions.Intersection::<Out>k__BackingField
	int32_t ___U3COutU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Boolean> Mapbox.Directions.Intersection::<Entry>k__BackingField
	List_1_t3194695850 * ___U3CEntryU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.Directions.Intersection::<Bearings>k__BackingField
	List_1_t1440998580 * ___U3CBearingsU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Directions.Intersection::<Location>k__BackingField
	Vector2d_t3730485367  ___U3CLocationU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Mapbox.Directions.Intersection::<In>k__BackingField
	Nullable_1_t334943763  ___U3CInU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3COutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Intersection_t2772636325, ___U3COutU3Ek__BackingField_0)); }
	inline int32_t get_U3COutU3Ek__BackingField_0() const { return ___U3COutU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3COutU3Ek__BackingField_0() { return &___U3COutU3Ek__BackingField_0; }
	inline void set_U3COutU3Ek__BackingField_0(int32_t value)
	{
		___U3COutU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CEntryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Intersection_t2772636325, ___U3CEntryU3Ek__BackingField_1)); }
	inline List_1_t3194695850 * get_U3CEntryU3Ek__BackingField_1() const { return ___U3CEntryU3Ek__BackingField_1; }
	inline List_1_t3194695850 ** get_address_of_U3CEntryU3Ek__BackingField_1() { return &___U3CEntryU3Ek__BackingField_1; }
	inline void set_U3CEntryU3Ek__BackingField_1(List_1_t3194695850 * value)
	{
		___U3CEntryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEntryU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CBearingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Intersection_t2772636325, ___U3CBearingsU3Ek__BackingField_2)); }
	inline List_1_t1440998580 * get_U3CBearingsU3Ek__BackingField_2() const { return ___U3CBearingsU3Ek__BackingField_2; }
	inline List_1_t1440998580 ** get_address_of_U3CBearingsU3Ek__BackingField_2() { return &___U3CBearingsU3Ek__BackingField_2; }
	inline void set_U3CBearingsU3Ek__BackingField_2(List_1_t1440998580 * value)
	{
		___U3CBearingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBearingsU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Intersection_t2772636325, ___U3CLocationU3Ek__BackingField_3)); }
	inline Vector2d_t3730485367  get_U3CLocationU3Ek__BackingField_3() const { return ___U3CLocationU3Ek__BackingField_3; }
	inline Vector2d_t3730485367 * get_address_of_U3CLocationU3Ek__BackingField_3() { return &___U3CLocationU3Ek__BackingField_3; }
	inline void set_U3CLocationU3Ek__BackingField_3(Vector2d_t3730485367  value)
	{
		___U3CLocationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Intersection_t2772636325, ___U3CInU3Ek__BackingField_4)); }
	inline Nullable_1_t334943763  get_U3CInU3Ek__BackingField_4() const { return ___U3CInU3Ek__BackingField_4; }
	inline Nullable_1_t334943763 * get_address_of_U3CInU3Ek__BackingField_4() { return &___U3CInU3Ek__BackingField_4; }
	inline void set_U3CInU3Ek__BackingField_4(Nullable_1_t334943763  value)
	{
		___U3CInU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
