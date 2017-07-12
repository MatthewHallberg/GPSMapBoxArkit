#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"

// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent
struct  SweepEvent_t3747825302  : public Il2CppObject
{
public:
	// System.Double TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent::xkey
	double ___xkey_0;
	// System.Double TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent::ykey
	double ___ykey_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent::vertexEvent
	Vertex_t3430001018 * ___vertexEvent_2;
	// TriangleNet.Topology.Otri TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent::otriEvent
	Otri_t174839988  ___otriEvent_3;
	// System.Int32 TriangleNet.Meshing.Algorithm.SweepLine/SweepEvent::heapposition
	int32_t ___heapposition_4;

public:
	inline static int32_t get_offset_of_xkey_0() { return static_cast<int32_t>(offsetof(SweepEvent_t3747825302, ___xkey_0)); }
	inline double get_xkey_0() const { return ___xkey_0; }
	inline double* get_address_of_xkey_0() { return &___xkey_0; }
	inline void set_xkey_0(double value)
	{
		___xkey_0 = value;
	}

	inline static int32_t get_offset_of_ykey_1() { return static_cast<int32_t>(offsetof(SweepEvent_t3747825302, ___ykey_1)); }
	inline double get_ykey_1() const { return ___ykey_1; }
	inline double* get_address_of_ykey_1() { return &___ykey_1; }
	inline void set_ykey_1(double value)
	{
		___ykey_1 = value;
	}

	inline static int32_t get_offset_of_vertexEvent_2() { return static_cast<int32_t>(offsetof(SweepEvent_t3747825302, ___vertexEvent_2)); }
	inline Vertex_t3430001018 * get_vertexEvent_2() const { return ___vertexEvent_2; }
	inline Vertex_t3430001018 ** get_address_of_vertexEvent_2() { return &___vertexEvent_2; }
	inline void set_vertexEvent_2(Vertex_t3430001018 * value)
	{
		___vertexEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertexEvent_2, value);
	}

	inline static int32_t get_offset_of_otriEvent_3() { return static_cast<int32_t>(offsetof(SweepEvent_t3747825302, ___otriEvent_3)); }
	inline Otri_t174839988  get_otriEvent_3() const { return ___otriEvent_3; }
	inline Otri_t174839988 * get_address_of_otriEvent_3() { return &___otriEvent_3; }
	inline void set_otriEvent_3(Otri_t174839988  value)
	{
		___otriEvent_3 = value;
	}

	inline static int32_t get_offset_of_heapposition_4() { return static_cast<int32_t>(offsetof(SweepEvent_t3747825302, ___heapposition_4)); }
	inline int32_t get_heapposition_4() const { return ___heapposition_4; }
	inline int32_t* get_address_of_heapposition_4() { return &___heapposition_4; }
	inline void set_heapposition_4(int32_t value)
	{
		___heapposition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
