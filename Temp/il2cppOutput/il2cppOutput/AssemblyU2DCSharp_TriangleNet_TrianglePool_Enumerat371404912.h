#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t454219838;
// TriangleNet.Topology.Triangle
struct Triangle_t3965613618;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.TrianglePool/Enumerator
struct  Enumerator_t371404912  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.TrianglePool/Enumerator::count
	int32_t ___count_0;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool/Enumerator::pool
	TriangleU5BU5DU5BU5D_t454219838* ___pool_1;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/Enumerator::current
	Triangle_t3965613618 * ___current_2;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::index
	int32_t ___index_3;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::offset
	int32_t ___offset_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Enumerator_t371404912, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(Enumerator_t371404912, ___pool_1)); }
	inline TriangleU5BU5DU5BU5D_t454219838* get_pool_1() const { return ___pool_1; }
	inline TriangleU5BU5DU5BU5D_t454219838** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(TriangleU5BU5DU5BU5D_t454219838* value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier(&___pool_1, value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Enumerator_t371404912, ___current_2)); }
	inline Triangle_t3965613618 * get_current_2() const { return ___current_2; }
	inline Triangle_t3965613618 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Triangle_t3965613618 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Enumerator_t371404912, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(Enumerator_t371404912, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
