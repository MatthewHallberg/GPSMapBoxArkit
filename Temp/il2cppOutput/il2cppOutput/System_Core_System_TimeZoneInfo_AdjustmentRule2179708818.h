#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_Core_System_TimeZoneInfo_TransitionTime3441274853.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t2179708818  : public Il2CppObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateEnd
	DateTime_t693205669  ___dateEnd_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateStart
	DateTime_t693205669  ___dateStart_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::daylightDelta
	TimeSpan_t3430258949  ___daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionEnd
	TransitionTime_t3441274853  ___daylightTransitionEnd_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionStart
	TransitionTime_t3441274853  ___daylightTransitionStart_4;

public:
	inline static int32_t get_offset_of_dateEnd_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t2179708818, ___dateEnd_0)); }
	inline DateTime_t693205669  get_dateEnd_0() const { return ___dateEnd_0; }
	inline DateTime_t693205669 * get_address_of_dateEnd_0() { return &___dateEnd_0; }
	inline void set_dateEnd_0(DateTime_t693205669  value)
	{
		___dateEnd_0 = value;
	}

	inline static int32_t get_offset_of_dateStart_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t2179708818, ___dateStart_1)); }
	inline DateTime_t693205669  get_dateStart_1() const { return ___dateStart_1; }
	inline DateTime_t693205669 * get_address_of_dateStart_1() { return &___dateStart_1; }
	inline void set_dateStart_1(DateTime_t693205669  value)
	{
		___dateStart_1 = value;
	}

	inline static int32_t get_offset_of_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t2179708818, ___daylightDelta_2)); }
	inline TimeSpan_t3430258949  get_daylightDelta_2() const { return ___daylightDelta_2; }
	inline TimeSpan_t3430258949 * get_address_of_daylightDelta_2() { return &___daylightDelta_2; }
	inline void set_daylightDelta_2(TimeSpan_t3430258949  value)
	{
		___daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionEnd_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t2179708818, ___daylightTransitionEnd_3)); }
	inline TransitionTime_t3441274853  get_daylightTransitionEnd_3() const { return ___daylightTransitionEnd_3; }
	inline TransitionTime_t3441274853 * get_address_of_daylightTransitionEnd_3() { return &___daylightTransitionEnd_3; }
	inline void set_daylightTransitionEnd_3(TransitionTime_t3441274853  value)
	{
		___daylightTransitionEnd_3 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionStart_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t2179708818, ___daylightTransitionStart_4)); }
	inline TransitionTime_t3441274853  get_daylightTransitionStart_4() const { return ___daylightTransitionStart_4; }
	inline TransitionTime_t3441274853 * get_address_of_daylightTransitionStart_4() { return &___daylightTransitionStart_4; }
	inline void set_daylightTransitionStart_4(TransitionTime_t3441274853  value)
	{
		___daylightTransitionStart_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
