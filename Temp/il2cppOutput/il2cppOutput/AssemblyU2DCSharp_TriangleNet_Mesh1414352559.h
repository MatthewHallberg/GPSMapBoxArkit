#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TriangleNet_NodeNumbering59217167.h"

// TriangleNet.IPredicates
struct IPredicates_t3101063573;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_t846826848;
// TriangleNet.Meshing.QualityMesher
struct QualityMesher_t265812823;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>
struct Stack_1_t1262568142;
// TriangleNet.TrianglePool
struct TrianglePool_t3592645624;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t4221418462;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_t2437826653;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t3788314186;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_t1611033753;
// TriangleNet.Geometry.Rectangle
struct Rectangle_t3983541573;
// TriangleNet.Geometry.Vertex
struct Vertex_t3430001018;
// TriangleNet.TriangleLocator
struct TriangleLocator_t236619704;
// TriangleNet.Behavior
struct Behavior_t3353801546;
// TriangleNet.Topology.Triangle
struct Triangle_t3965613618;
// TriangleNet.Topology.SubSegment
struct SubSegment_t918625531;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Mesh
struct  Mesh_t1414352559  : public Il2CppObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Mesh::predicates
	Il2CppObject * ___predicates_0;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Mesh::logger
	Il2CppObject* ___logger_1;
	// TriangleNet.Meshing.QualityMesher TriangleNet.Mesh::qualityMesher
	QualityMesher_t265812823 * ___qualityMesher_2;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri> TriangleNet.Mesh::flipstack
	Stack_1_t1262568142 * ___flipstack_3;
	// TriangleNet.TrianglePool TriangleNet.Mesh::triangles
	TrianglePool_t3592645624 * ___triangles_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment> TriangleNet.Mesh::subsegs
	Dictionary_2_t4221418462 * ___subsegs_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex> TriangleNet.Mesh::vertices
	Dictionary_2_t2437826653 * ___vertices_6;
	// System.Int32 TriangleNet.Mesh::hash_vtx
	int32_t ___hash_vtx_7;
	// System.Int32 TriangleNet.Mesh::hash_seg
	int32_t ___hash_seg_8;
	// System.Int32 TriangleNet.Mesh::hash_tri
	int32_t ___hash_tri_9;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.Mesh::holes
	List_1_t3788314186 * ___holes_10;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.Mesh::regions
	List_1_t1611033753 * ___regions_11;
	// TriangleNet.Geometry.Rectangle TriangleNet.Mesh::bounds
	Rectangle_t3983541573 * ___bounds_12;
	// System.Int32 TriangleNet.Mesh::invertices
	int32_t ___invertices_13;
	// System.Int32 TriangleNet.Mesh::insegments
	int32_t ___insegments_14;
	// System.Int32 TriangleNet.Mesh::undeads
	int32_t ___undeads_15;
	// System.Int32 TriangleNet.Mesh::mesh_dim
	int32_t ___mesh_dim_16;
	// System.Int32 TriangleNet.Mesh::nextras
	int32_t ___nextras_17;
	// System.Int32 TriangleNet.Mesh::hullsize
	int32_t ___hullsize_18;
	// System.Int32 TriangleNet.Mesh::steinerleft
	int32_t ___steinerleft_19;
	// System.Boolean TriangleNet.Mesh::checksegments
	bool ___checksegments_20;
	// System.Boolean TriangleNet.Mesh::checkquality
	bool ___checkquality_21;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex1
	Vertex_t3430001018 * ___infvertex1_22;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex2
	Vertex_t3430001018 * ___infvertex2_23;
	// TriangleNet.Geometry.Vertex TriangleNet.Mesh::infvertex3
	Vertex_t3430001018 * ___infvertex3_24;
	// TriangleNet.TriangleLocator TriangleNet.Mesh::locator
	TriangleLocator_t236619704 * ___locator_25;
	// TriangleNet.Behavior TriangleNet.Mesh::behavior
	Behavior_t3353801546 * ___behavior_26;
	// TriangleNet.NodeNumbering TriangleNet.Mesh::numbering
	int32_t ___numbering_27;
	// TriangleNet.Topology.Triangle TriangleNet.Mesh::dummytri
	Triangle_t3965613618 * ___dummytri_29;
	// TriangleNet.Topology.SubSegment TriangleNet.Mesh::dummysub
	SubSegment_t918625531 * ___dummysub_30;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___predicates_0)); }
	inline Il2CppObject * get_predicates_0() const { return ___predicates_0; }
	inline Il2CppObject ** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(Il2CppObject * value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicates_0, value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___logger_1)); }
	inline Il2CppObject* get_logger_1() const { return ___logger_1; }
	inline Il2CppObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(Il2CppObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier(&___logger_1, value);
	}

	inline static int32_t get_offset_of_qualityMesher_2() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___qualityMesher_2)); }
	inline QualityMesher_t265812823 * get_qualityMesher_2() const { return ___qualityMesher_2; }
	inline QualityMesher_t265812823 ** get_address_of_qualityMesher_2() { return &___qualityMesher_2; }
	inline void set_qualityMesher_2(QualityMesher_t265812823 * value)
	{
		___qualityMesher_2 = value;
		Il2CppCodeGenWriteBarrier(&___qualityMesher_2, value);
	}

	inline static int32_t get_offset_of_flipstack_3() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___flipstack_3)); }
	inline Stack_1_t1262568142 * get_flipstack_3() const { return ___flipstack_3; }
	inline Stack_1_t1262568142 ** get_address_of_flipstack_3() { return &___flipstack_3; }
	inline void set_flipstack_3(Stack_1_t1262568142 * value)
	{
		___flipstack_3 = value;
		Il2CppCodeGenWriteBarrier(&___flipstack_3, value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___triangles_4)); }
	inline TrianglePool_t3592645624 * get_triangles_4() const { return ___triangles_4; }
	inline TrianglePool_t3592645624 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(TrianglePool_t3592645624 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_4, value);
	}

	inline static int32_t get_offset_of_subsegs_5() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___subsegs_5)); }
	inline Dictionary_2_t4221418462 * get_subsegs_5() const { return ___subsegs_5; }
	inline Dictionary_2_t4221418462 ** get_address_of_subsegs_5() { return &___subsegs_5; }
	inline void set_subsegs_5(Dictionary_2_t4221418462 * value)
	{
		___subsegs_5 = value;
		Il2CppCodeGenWriteBarrier(&___subsegs_5, value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___vertices_6)); }
	inline Dictionary_2_t2437826653 * get_vertices_6() const { return ___vertices_6; }
	inline Dictionary_2_t2437826653 ** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Dictionary_2_t2437826653 * value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_6, value);
	}

	inline static int32_t get_offset_of_hash_vtx_7() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___hash_vtx_7)); }
	inline int32_t get_hash_vtx_7() const { return ___hash_vtx_7; }
	inline int32_t* get_address_of_hash_vtx_7() { return &___hash_vtx_7; }
	inline void set_hash_vtx_7(int32_t value)
	{
		___hash_vtx_7 = value;
	}

	inline static int32_t get_offset_of_hash_seg_8() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___hash_seg_8)); }
	inline int32_t get_hash_seg_8() const { return ___hash_seg_8; }
	inline int32_t* get_address_of_hash_seg_8() { return &___hash_seg_8; }
	inline void set_hash_seg_8(int32_t value)
	{
		___hash_seg_8 = value;
	}

	inline static int32_t get_offset_of_hash_tri_9() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___hash_tri_9)); }
	inline int32_t get_hash_tri_9() const { return ___hash_tri_9; }
	inline int32_t* get_address_of_hash_tri_9() { return &___hash_tri_9; }
	inline void set_hash_tri_9(int32_t value)
	{
		___hash_tri_9 = value;
	}

	inline static int32_t get_offset_of_holes_10() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___holes_10)); }
	inline List_1_t3788314186 * get_holes_10() const { return ___holes_10; }
	inline List_1_t3788314186 ** get_address_of_holes_10() { return &___holes_10; }
	inline void set_holes_10(List_1_t3788314186 * value)
	{
		___holes_10 = value;
		Il2CppCodeGenWriteBarrier(&___holes_10, value);
	}

	inline static int32_t get_offset_of_regions_11() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___regions_11)); }
	inline List_1_t1611033753 * get_regions_11() const { return ___regions_11; }
	inline List_1_t1611033753 ** get_address_of_regions_11() { return &___regions_11; }
	inline void set_regions_11(List_1_t1611033753 * value)
	{
		___regions_11 = value;
		Il2CppCodeGenWriteBarrier(&___regions_11, value);
	}

	inline static int32_t get_offset_of_bounds_12() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___bounds_12)); }
	inline Rectangle_t3983541573 * get_bounds_12() const { return ___bounds_12; }
	inline Rectangle_t3983541573 ** get_address_of_bounds_12() { return &___bounds_12; }
	inline void set_bounds_12(Rectangle_t3983541573 * value)
	{
		___bounds_12 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_12, value);
	}

	inline static int32_t get_offset_of_invertices_13() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___invertices_13)); }
	inline int32_t get_invertices_13() const { return ___invertices_13; }
	inline int32_t* get_address_of_invertices_13() { return &___invertices_13; }
	inline void set_invertices_13(int32_t value)
	{
		___invertices_13 = value;
	}

	inline static int32_t get_offset_of_insegments_14() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___insegments_14)); }
	inline int32_t get_insegments_14() const { return ___insegments_14; }
	inline int32_t* get_address_of_insegments_14() { return &___insegments_14; }
	inline void set_insegments_14(int32_t value)
	{
		___insegments_14 = value;
	}

	inline static int32_t get_offset_of_undeads_15() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___undeads_15)); }
	inline int32_t get_undeads_15() const { return ___undeads_15; }
	inline int32_t* get_address_of_undeads_15() { return &___undeads_15; }
	inline void set_undeads_15(int32_t value)
	{
		___undeads_15 = value;
	}

	inline static int32_t get_offset_of_mesh_dim_16() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___mesh_dim_16)); }
	inline int32_t get_mesh_dim_16() const { return ___mesh_dim_16; }
	inline int32_t* get_address_of_mesh_dim_16() { return &___mesh_dim_16; }
	inline void set_mesh_dim_16(int32_t value)
	{
		___mesh_dim_16 = value;
	}

	inline static int32_t get_offset_of_nextras_17() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___nextras_17)); }
	inline int32_t get_nextras_17() const { return ___nextras_17; }
	inline int32_t* get_address_of_nextras_17() { return &___nextras_17; }
	inline void set_nextras_17(int32_t value)
	{
		___nextras_17 = value;
	}

	inline static int32_t get_offset_of_hullsize_18() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___hullsize_18)); }
	inline int32_t get_hullsize_18() const { return ___hullsize_18; }
	inline int32_t* get_address_of_hullsize_18() { return &___hullsize_18; }
	inline void set_hullsize_18(int32_t value)
	{
		___hullsize_18 = value;
	}

	inline static int32_t get_offset_of_steinerleft_19() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___steinerleft_19)); }
	inline int32_t get_steinerleft_19() const { return ___steinerleft_19; }
	inline int32_t* get_address_of_steinerleft_19() { return &___steinerleft_19; }
	inline void set_steinerleft_19(int32_t value)
	{
		___steinerleft_19 = value;
	}

	inline static int32_t get_offset_of_checksegments_20() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___checksegments_20)); }
	inline bool get_checksegments_20() const { return ___checksegments_20; }
	inline bool* get_address_of_checksegments_20() { return &___checksegments_20; }
	inline void set_checksegments_20(bool value)
	{
		___checksegments_20 = value;
	}

	inline static int32_t get_offset_of_checkquality_21() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___checkquality_21)); }
	inline bool get_checkquality_21() const { return ___checkquality_21; }
	inline bool* get_address_of_checkquality_21() { return &___checkquality_21; }
	inline void set_checkquality_21(bool value)
	{
		___checkquality_21 = value;
	}

	inline static int32_t get_offset_of_infvertex1_22() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___infvertex1_22)); }
	inline Vertex_t3430001018 * get_infvertex1_22() const { return ___infvertex1_22; }
	inline Vertex_t3430001018 ** get_address_of_infvertex1_22() { return &___infvertex1_22; }
	inline void set_infvertex1_22(Vertex_t3430001018 * value)
	{
		___infvertex1_22 = value;
		Il2CppCodeGenWriteBarrier(&___infvertex1_22, value);
	}

	inline static int32_t get_offset_of_infvertex2_23() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___infvertex2_23)); }
	inline Vertex_t3430001018 * get_infvertex2_23() const { return ___infvertex2_23; }
	inline Vertex_t3430001018 ** get_address_of_infvertex2_23() { return &___infvertex2_23; }
	inline void set_infvertex2_23(Vertex_t3430001018 * value)
	{
		___infvertex2_23 = value;
		Il2CppCodeGenWriteBarrier(&___infvertex2_23, value);
	}

	inline static int32_t get_offset_of_infvertex3_24() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___infvertex3_24)); }
	inline Vertex_t3430001018 * get_infvertex3_24() const { return ___infvertex3_24; }
	inline Vertex_t3430001018 ** get_address_of_infvertex3_24() { return &___infvertex3_24; }
	inline void set_infvertex3_24(Vertex_t3430001018 * value)
	{
		___infvertex3_24 = value;
		Il2CppCodeGenWriteBarrier(&___infvertex3_24, value);
	}

	inline static int32_t get_offset_of_locator_25() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___locator_25)); }
	inline TriangleLocator_t236619704 * get_locator_25() const { return ___locator_25; }
	inline TriangleLocator_t236619704 ** get_address_of_locator_25() { return &___locator_25; }
	inline void set_locator_25(TriangleLocator_t236619704 * value)
	{
		___locator_25 = value;
		Il2CppCodeGenWriteBarrier(&___locator_25, value);
	}

	inline static int32_t get_offset_of_behavior_26() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___behavior_26)); }
	inline Behavior_t3353801546 * get_behavior_26() const { return ___behavior_26; }
	inline Behavior_t3353801546 ** get_address_of_behavior_26() { return &___behavior_26; }
	inline void set_behavior_26(Behavior_t3353801546 * value)
	{
		___behavior_26 = value;
		Il2CppCodeGenWriteBarrier(&___behavior_26, value);
	}

	inline static int32_t get_offset_of_numbering_27() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___numbering_27)); }
	inline int32_t get_numbering_27() const { return ___numbering_27; }
	inline int32_t* get_address_of_numbering_27() { return &___numbering_27; }
	inline void set_numbering_27(int32_t value)
	{
		___numbering_27 = value;
	}

	inline static int32_t get_offset_of_dummytri_29() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___dummytri_29)); }
	inline Triangle_t3965613618 * get_dummytri_29() const { return ___dummytri_29; }
	inline Triangle_t3965613618 ** get_address_of_dummytri_29() { return &___dummytri_29; }
	inline void set_dummytri_29(Triangle_t3965613618 * value)
	{
		___dummytri_29 = value;
		Il2CppCodeGenWriteBarrier(&___dummytri_29, value);
	}

	inline static int32_t get_offset_of_dummysub_30() { return static_cast<int32_t>(offsetof(Mesh_t1414352559, ___dummysub_30)); }
	inline SubSegment_t918625531 * get_dummysub_30() const { return ___dummysub_30; }
	inline SubSegment_t918625531 ** get_address_of_dummysub_30() { return &___dummysub_30; }
	inline void set_dummysub_30(SubSegment_t918625531 * value)
	{
		___dummysub_30 = value;
		Il2CppCodeGenWriteBarrier(&___dummysub_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
