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

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t1830709828;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestSession
struct  DigestSession_t3531077550  : public Il2CppObject
{
public:
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t693205669  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t2624936259 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t1830709828 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;

public:
	inline static int32_t get_offset_of_lastUse_1() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550, ___lastUse_1)); }
	inline DateTime_t693205669  get_lastUse_1() const { return ___lastUse_1; }
	inline DateTime_t693205669 * get_address_of_lastUse_1() { return &___lastUse_1; }
	inline void set_lastUse_1(DateTime_t693205669  value)
	{
		___lastUse_1 = value;
	}

	inline static int32_t get_offset_of__nc_2() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550, ____nc_2)); }
	inline int32_t get__nc_2() const { return ____nc_2; }
	inline int32_t* get_address_of__nc_2() { return &____nc_2; }
	inline void set__nc_2(int32_t value)
	{
		____nc_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550, ___hash_3)); }
	inline HashAlgorithm_t2624936259 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t2624936259 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t2624936259 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier(&___hash_3, value);
	}

	inline static int32_t get_offset_of_parser_4() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550, ___parser_4)); }
	inline DigestHeaderParser_t1830709828 * get_parser_4() const { return ___parser_4; }
	inline DigestHeaderParser_t1830709828 ** get_address_of_parser_4() { return &___parser_4; }
	inline void set_parser_4(DigestHeaderParser_t1830709828 * value)
	{
		___parser_4 = value;
		Il2CppCodeGenWriteBarrier(&___parser_4, value);
	}

	inline static int32_t get_offset_of__cnonce_5() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550, ____cnonce_5)); }
	inline String_t* get__cnonce_5() const { return ____cnonce_5; }
	inline String_t** get_address_of__cnonce_5() { return &____cnonce_5; }
	inline void set__cnonce_5(String_t* value)
	{
		____cnonce_5 = value;
		Il2CppCodeGenWriteBarrier(&____cnonce_5, value);
	}
};

struct DigestSession_t3531077550_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t2510243513 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(DigestSession_t3531077550_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t2510243513 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t2510243513 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier(&___rng_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
