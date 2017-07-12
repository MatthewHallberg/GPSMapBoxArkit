#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.String
struct String_t;
// System.TimeZoneInfo
struct TimeZoneInfo_t436210607;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t2338614759;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t436210607  : public Il2CppObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t3430258949  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t2338614759* ___adjustmentRules_9;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___baseUtcOffset_0)); }
	inline TimeSpan_t3430258949  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t3430258949 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t3430258949  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier(&___daylightDisplayName_1, value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier(&___displayName_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}

	inline static int32_t get_offset_of_standardDisplayName_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___standardDisplayName_5)); }
	inline String_t* get_standardDisplayName_5() const { return ___standardDisplayName_5; }
	inline String_t** get_address_of_standardDisplayName_5() { return &___standardDisplayName_5; }
	inline void set_standardDisplayName_5(String_t* value)
	{
		___standardDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier(&___standardDisplayName_5, value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___disableDaylightSavingTime_6)); }
	inline bool get_disableDaylightSavingTime_6() const { return ___disableDaylightSavingTime_6; }
	inline bool* get_address_of_disableDaylightSavingTime_6() { return &___disableDaylightSavingTime_6; }
	inline void set_disableDaylightSavingTime_6(bool value)
	{
		___disableDaylightSavingTime_6 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___adjustmentRules_9)); }
	inline AdjustmentRuleU5BU5D_t2338614759* get_adjustmentRules_9() const { return ___adjustmentRules_9; }
	inline AdjustmentRuleU5BU5D_t2338614759** get_address_of_adjustmentRules_9() { return &___adjustmentRules_9; }
	inline void set_adjustmentRules_9(AdjustmentRuleU5BU5D_t2338614759* value)
	{
		___adjustmentRules_9 = value;
		Il2CppCodeGenWriteBarrier(&___adjustmentRules_9, value);
	}
};

struct TimeZoneInfo_t436210607_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t436210607 * ___local_4;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t436210607 * ___utc_7;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_8;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t436210607 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t436210607 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t436210607 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier(&___local_4, value);
	}

	inline static int32_t get_offset_of_utc_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___utc_7)); }
	inline TimeZoneInfo_t436210607 * get_utc_7() const { return ___utc_7; }
	inline TimeZoneInfo_t436210607 ** get_address_of_utc_7() { return &___utc_7; }
	inline void set_utc_7(TimeZoneInfo_t436210607 * value)
	{
		___utc_7 = value;
		Il2CppCodeGenWriteBarrier(&___utc_7, value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___timeZoneDirectory_8)); }
	inline String_t* get_timeZoneDirectory_8() const { return ___timeZoneDirectory_8; }
	inline String_t** get_address_of_timeZoneDirectory_8() { return &___timeZoneDirectory_8; }
	inline void set_timeZoneDirectory_8(String_t* value)
	{
		___timeZoneDirectory_8 = value;
		Il2CppCodeGenWriteBarrier(&___timeZoneDirectory_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
