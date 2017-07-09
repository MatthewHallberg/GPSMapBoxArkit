#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TriangleNet_Geometry_Point124225758.h"
#include "AssemblyU2DCSharp_TriangleNet_VertexType1410000526.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Geometry.Vertex
struct  Vertex_t3430001018  : public Point_t124225758
{
public:
	// System.Int32 TriangleNet.Geometry.Vertex::hash
	int32_t ___hash_4;
	// System.Double TriangleNet.Geometry.Vertex::z
	double ___z_5;
	// TriangleNet.VertexType TriangleNet.Geometry.Vertex::type
	int32_t ___type_6;
	// TriangleNet.Topology.Otri TriangleNet.Geometry.Vertex::tri
	Otri_t174839988  ___tri_7;

public:
	inline static int32_t get_offset_of_hash_4() { return static_cast<int32_t>(offsetof(Vertex_t3430001018, ___hash_4)); }
	inline int32_t get_hash_4() const { return ___hash_4; }
	inline int32_t* get_address_of_hash_4() { return &___hash_4; }
	inline void set_hash_4(int32_t value)
	{
		___hash_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(Vertex_t3430001018, ___z_5)); }
	inline double get_z_5() const { return ___z_5; }
	inline double* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(double value)
	{
		___z_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Vertex_t3430001018, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_tri_7() { return static_cast<int32_t>(offsetof(Vertex_t3430001018, ___tri_7)); }
	inline Otri_t174839988  get_tri_7() const { return ___tri_7; }
	inline Otri_t174839988 * get_address_of_tri_7() { return &___tri_7; }
	inline void set_tri_7(Otri_t174839988  value)
	{
		___tri_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
