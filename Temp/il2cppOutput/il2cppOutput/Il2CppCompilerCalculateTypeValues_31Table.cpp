#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_QualityMeasure629742871.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_QualityMeasure2609477317.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_QualityMeasure_A42523064.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_QualityMeasure3930961000.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_Statistic3669938472.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_TriangleQuadTr2624374923.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_TriangleQuadTr1733368551.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_VertexSorter288750371.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_DcelMe3742056343.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_Face3682684903.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_Face_U3153644287.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_HalfEdg445267738.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_Vertex3185693932.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_DCEL_Vertex_179549716.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Osub2903723171.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Otri174839988.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_SubSegment918625531.h"
#include "AssemblyU2DCSharp_TriangleNet_Topology_Triangle3965613618.h"
#include "AssemblyU2DCSharp_TriangleNet_TriangleLocator236619704.h"
#include "AssemblyU2DCSharp_TriangleNet_TrianglePool3592645624.h"
#include "AssemblyU2DCSharp_TriangleNet_TrianglePool_Enumerat371404912.h"
#include "AssemblyU2DCSharp_TriangleNet_TrianglePool_U3CSamp2172744821.h"
#include "AssemblyU2DCSharp_TriangleNet_TriangleSampler1615517784.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_BoundedVoron3118893497.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_DefaultVoron2300926391.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_Legacy_Bound1975431292.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_Legacy_Simpl3805366222.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_Legacy_Voron1224079960.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_StandardVoro2667488523.h"
#include "AssemblyU2DCSharp_TriangleNet_Voronoi_VoronoiBase1875181573.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_DirectionResou3043599327.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Directions994913360.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Directions_U3CQ304254431.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Overview3658811743.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_DirectionsResp3780718349.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Intersection2772636325.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Leg3685481244.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Maneuver3359337115.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Route320467103.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Step3681463660.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_Waypoint2090135419.h"
#include "AssemblyU2DCSharp_Mapbox_Directions_RoutingProfile3025365347.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_ForwardGeocodeRe949712485.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_Geocoder429800012.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_Feature190893904.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_GeocodeResponse1492488371.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_ReverseGeocodeR3646300659.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_ForwardGeocodeR3120571778.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_Geometry3071474686.h"
#include "AssemblyU2DCSharp_Mapbox_Geocoding_ReverseGeocodeRe910734276.h"
#include "AssemblyU2DCSharp_Mapbox_Map_CanonicalTileId3196769505.h"
#include "AssemblyU2DCSharp_Mapbox_Map_ClassicRasterTile4030752251.h"
#include "AssemblyU2DCSharp_Mapbox_Map_ClassicRetinaRasterTil687167236.h"
#include "AssemblyU2DCSharp_Mapbox_Map_MapUtils76549171.h"
#include "AssemblyU2DCSharp_Mapbox_Map_RasterTile2968865301.h"
#include "AssemblyU2DCSharp_Mapbox_Map_RawPngRasterTile4084098188.h"
#include "AssemblyU2DCSharp_Mapbox_Map_RetinaRasterTile3288531872.h"
#include "AssemblyU2DCSharp_Mapbox_Map_Tile1819912606.h"
#include "AssemblyU2DCSharp_Mapbox_Map_Tile_State2242625883.h"
#include "AssemblyU2DCSharp_Mapbox_Map_Tile_Parameters1432943040.h"
#include "AssemblyU2DCSharp_Mapbox_Map_TileCover438232185.h"
#include "AssemblyU2DCSharp_Mapbox_Map_TileResource679153792.h"
#include "AssemblyU2DCSharp_Mapbox_Map_UnwrappedTileId2874398135.h"
#include "AssemblyU2DCSharp_Mapbox_Map_VectorTile1808184891.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_CachingWeb1821968684.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_CachingWebF753213365.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_CachingWeb3909649282.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_CachingWeb1180765927.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_DiskCache1154126551.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_DiskCache_2357247121.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_MemoryCach1161932639.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Cache_MemoryCach3349332897.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_FileSource1347159135.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_FileSource_U3Cpr3931330398.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_FileSource_U3CWai727404279.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_FileSource_U3CWai727404282.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_IAsyncRequestFac2941902086.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Resource2839633034.h"
#include "AssemblyU2DCSharp_Mapbox_Platform_Response557144579.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_BearingFilter3685642986.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Compression35425688.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Constants3012120737.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2dBounds2768535998.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_JsonConverters_BboxT914855120.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_JsonConverters_Json3738359027.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_JsonConverters_LonL4098085794.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (QualityMeasure_t629742871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3100[4] = 
{
	QualityMeasure_t629742871::get_offset_of_areaMeasure_0(),
	QualityMeasure_t629742871::get_offset_of_alphaMeasure_1(),
	QualityMeasure_t629742871::get_offset_of_qMeasure_2(),
	QualityMeasure_t629742871::get_offset_of_mesh_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (AreaMeasure_t2609477317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3101[4] = 
{
	AreaMeasure_t2609477317::get_offset_of_area_min_0(),
	AreaMeasure_t2609477317::get_offset_of_area_max_1(),
	AreaMeasure_t2609477317::get_offset_of_area_total_2(),
	AreaMeasure_t2609477317::get_offset_of_area_zero_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (AlphaMeasure_t42523064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3102[4] = 
{
	AlphaMeasure_t42523064::get_offset_of_alpha_min_0(),
	AlphaMeasure_t42523064::get_offset_of_alpha_max_1(),
	AlphaMeasure_t42523064::get_offset_of_alpha_ave_2(),
	AlphaMeasure_t42523064::get_offset_of_alpha_area_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (Q_Measure_t3930961000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3103[4] = 
{
	Q_Measure_t3930961000::get_offset_of_q_min_0(),
	Q_Measure_t3930961000::get_offset_of_q_max_1(),
	Q_Measure_t3930961000::get_offset_of_q_ave_2(),
	Q_Measure_t3930961000::get_offset_of_q_area_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (Statistic_t3669938472), -1, sizeof(Statistic_t3669938472_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3104[22] = 
{
	Statistic_t3669938472_StaticFields::get_offset_of_InCircleCount_0(),
	Statistic_t3669938472_StaticFields::get_offset_of_InCircleAdaptCount_1(),
	Statistic_t3669938472_StaticFields::get_offset_of_CounterClockwiseCount_2(),
	Statistic_t3669938472_StaticFields::get_offset_of_CounterClockwiseAdaptCount_3(),
	Statistic_t3669938472_StaticFields::get_offset_of_Orient3dCount_4(),
	Statistic_t3669938472_StaticFields::get_offset_of_HyperbolaCount_5(),
	Statistic_t3669938472_StaticFields::get_offset_of_CircumcenterCount_6(),
	Statistic_t3669938472_StaticFields::get_offset_of_CircleTopCount_7(),
	Statistic_t3669938472_StaticFields::get_offset_of_RelocationCount_8(),
	Statistic_t3669938472::get_offset_of_minEdge_9(),
	Statistic_t3669938472::get_offset_of_maxEdge_10(),
	Statistic_t3669938472::get_offset_of_minAspect_11(),
	Statistic_t3669938472::get_offset_of_maxAspect_12(),
	Statistic_t3669938472::get_offset_of_minArea_13(),
	Statistic_t3669938472::get_offset_of_maxArea_14(),
	Statistic_t3669938472::get_offset_of_minAngle_15(),
	Statistic_t3669938472::get_offset_of_maxAngle_16(),
	Statistic_t3669938472::get_offset_of_angleTable_17(),
	Statistic_t3669938472::get_offset_of_minAngles_18(),
	Statistic_t3669938472::get_offset_of_maxAngles_19(),
	Statistic_t3669938472_StaticFields::get_offset_of_plus1Mod3_20(),
	Statistic_t3669938472_StaticFields::get_offset_of_minus1Mod3_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (TriangleQuadTree_t2624374923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3105[4] = 
{
	TriangleQuadTree_t2624374923::get_offset_of_root_0(),
	TriangleQuadTree_t2624374923::get_offset_of_triangles_1(),
	TriangleQuadTree_t2624374923::get_offset_of_sizeBound_2(),
	TriangleQuadTree_t2624374923::get_offset_of_maxDepth_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (QuadNode_t1733368551), -1, sizeof(QuadNode_t1733368551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3106[12] = 
{
	0,
	0,
	0,
	0,
	0,
	QuadNode_t1733368551_StaticFields::get_offset_of_BITVECTOR_5(),
	QuadNode_t1733368551::get_offset_of_bounds_6(),
	QuadNode_t1733368551::get_offset_of_pivot_7(),
	QuadNode_t1733368551::get_offset_of_tree_8(),
	QuadNode_t1733368551::get_offset_of_regions_9(),
	QuadNode_t1733368551::get_offset_of_triangles_10(),
	QuadNode_t1733368551::get_offset_of_bitRegions_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (VertexSorter_t288750371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3107[3] = 
{
	0,
	VertexSorter_t288750371::get_offset_of_rand_1(),
	VertexSorter_t288750371::get_offset_of_points_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { sizeof (DcelMesh_t3742056343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3108[3] = 
{
	DcelMesh_t3742056343::get_offset_of_vertices_0(),
	DcelMesh_t3742056343::get_offset_of_edges_1(),
	DcelMesh_t3742056343::get_offset_of_faces_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { sizeof (Face_t3682684903), -1, sizeof(Face_t3682684903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3109[6] = 
{
	Face_t3682684903_StaticFields::get_offset_of_Empty_0(),
	Face_t3682684903::get_offset_of_id_1(),
	Face_t3682684903::get_offset_of_mark_2(),
	Face_t3682684903::get_offset_of_generator_3(),
	Face_t3682684903::get_offset_of_edge_4(),
	Face_t3682684903::get_offset_of_bounded_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (U3CEnumerateEdgesU3Ec__Iterator0_t153644287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3110[6] = 
{
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U3CedgeU3E__0_0(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U3CfirstU3E__0_1(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24this_2(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24current_3(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24disposing_4(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (HalfEdge_t445267738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[6] = 
{
	HalfEdge_t445267738::get_offset_of_id_0(),
	HalfEdge_t445267738::get_offset_of_mark_1(),
	HalfEdge_t445267738::get_offset_of_origin_2(),
	HalfEdge_t445267738::get_offset_of_face_3(),
	HalfEdge_t445267738::get_offset_of_twin_4(),
	HalfEdge_t445267738::get_offset_of_next_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (Vertex_t3185693932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3112[1] = 
{
	Vertex_t3185693932::get_offset_of_leaving_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (U3CEnumerateEdgesU3Ec__Iterator0_t179549716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3113[6] = 
{
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U3CedgeU3E__0_0(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U3CfirstU3E__0_1(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24this_2(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24current_3(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24disposing_4(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (Osub_t2903723171)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3114[2] = 
{
	Osub_t2903723171::get_offset_of_seg_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Osub_t2903723171::get_offset_of_orient_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (Otri_t174839988)+ sizeof (Il2CppObject), -1, sizeof(Otri_t174839988_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3115[4] = 
{
	Otri_t174839988::get_offset_of_tri_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Otri_t174839988::get_offset_of_orient_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Otri_t174839988_StaticFields::get_offset_of_plus1Mod3_2(),
	Otri_t174839988_StaticFields::get_offset_of_minus1Mod3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (SubSegment_t918625531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3116[5] = 
{
	SubSegment_t918625531::get_offset_of_hash_0(),
	SubSegment_t918625531::get_offset_of_subsegs_1(),
	SubSegment_t918625531::get_offset_of_vertices_2(),
	SubSegment_t918625531::get_offset_of_triangles_3(),
	SubSegment_t918625531::get_offset_of_boundary_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (Triangle_t3965613618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3117[8] = 
{
	Triangle_t3965613618::get_offset_of_hash_0(),
	Triangle_t3965613618::get_offset_of_id_1(),
	Triangle_t3965613618::get_offset_of_neighbors_2(),
	Triangle_t3965613618::get_offset_of_vertices_3(),
	Triangle_t3965613618::get_offset_of_subsegs_4(),
	Triangle_t3965613618::get_offset_of_label_5(),
	Triangle_t3965613618::get_offset_of_area_6(),
	Triangle_t3965613618::get_offset_of_infected_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (TriangleLocator_t236619704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3118[4] = 
{
	TriangleLocator_t236619704::get_offset_of_sampler_0(),
	TriangleLocator_t236619704::get_offset_of_mesh_1(),
	TriangleLocator_t236619704::get_offset_of_predicates_2(),
	TriangleLocator_t236619704::get_offset_of_recenttri_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (TrianglePool_t3592645624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3119[5] = 
{
	0,
	TrianglePool_t3592645624::get_offset_of_size_1(),
	TrianglePool_t3592645624::get_offset_of_count_2(),
	TrianglePool_t3592645624::get_offset_of_pool_3(),
	TrianglePool_t3592645624::get_offset_of_stack_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (Enumerator_t371404912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3120[5] = 
{
	Enumerator_t371404912::get_offset_of_count_0(),
	Enumerator_t371404912::get_offset_of_pool_1(),
	Enumerator_t371404912::get_offset_of_current_2(),
	Enumerator_t371404912::get_offset_of_index_3(),
	Enumerator_t371404912::get_offset_of_offset_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (U3CSampleU3Ec__Iterator0_t2172744821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3121[10] = 
{
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U3CcountU3E__0_0(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_k_1(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_random_2(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U3CiU3E__1_3(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U3CtU3E__1_4(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U24this_5(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U24current_6(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U24disposing_7(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U3CU24U3Ek_8(),
	U3CSampleU3Ec__Iterator0_t2172744821::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (TriangleSampler_t1615517784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3122[6] = 
{
	0,
	0,
	TriangleSampler_t1615517784::get_offset_of_random_2(),
	TriangleSampler_t1615517784::get_offset_of_mesh_3(),
	TriangleSampler_t1615517784::get_offset_of_samples_4(),
	TriangleSampler_t1615517784::get_offset_of_triangleCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (BoundedVoronoi_t3118893497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3123[1] = 
{
	BoundedVoronoi_t3118893497::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (DefaultVoronoiFactory_t2300926391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (BoundedVoronoiLegacy_t1975431292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3126[8] = 
{
	BoundedVoronoiLegacy_t1975431292::get_offset_of_predicates_0(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_mesh_1(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_points_2(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_regions_3(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_segPoints_4(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_segIndex_5(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_subsegMap_6(),
	BoundedVoronoiLegacy_t1975431292::get_offset_of_includeBoundary_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (SimpleVoronoi_t3805366222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3128[7] = 
{
	SimpleVoronoi_t3805366222::get_offset_of_predicates_0(),
	SimpleVoronoi_t3805366222::get_offset_of_mesh_1(),
	SimpleVoronoi_t3805366222::get_offset_of_points_2(),
	SimpleVoronoi_t3805366222::get_offset_of_regions_3(),
	SimpleVoronoi_t3805366222::get_offset_of_rayPoints_4(),
	SimpleVoronoi_t3805366222::get_offset_of_rayIndex_5(),
	SimpleVoronoi_t3805366222::get_offset_of_bounds_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (VoronoiRegion_t1224079960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3129[5] = 
{
	VoronoiRegion_t1224079960::get_offset_of_id_0(),
	VoronoiRegion_t1224079960::get_offset_of_generator_1(),
	VoronoiRegion_t1224079960::get_offset_of_vertices_2(),
	VoronoiRegion_t1224079960::get_offset_of_bounded_3(),
	VoronoiRegion_t1224079960::get_offset_of_neighbors_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (StandardVoronoi_t2667488523), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { sizeof (VoronoiBase_t1875181573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3131[3] = 
{
	VoronoiBase_t1875181573::get_offset_of_predicates_3(),
	VoronoiBase_t1875181573::get_offset_of_factory_4(),
	VoronoiBase_t1875181573::get_offset_of_rays_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { sizeof (DirectionResource_t3043599327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3132[9] = 
{
	DirectionResource_t3043599327::get_offset_of_apiEndpoint_4(),
	DirectionResource_t3043599327::get_offset_of_profile_5(),
	DirectionResource_t3043599327::get_offset_of_coordinates_6(),
	DirectionResource_t3043599327::get_offset_of_alternatives_7(),
	DirectionResource_t3043599327::get_offset_of_bearings_8(),
	DirectionResource_t3043599327::get_offset_of_continueStraight_9(),
	DirectionResource_t3043599327::get_offset_of_overview_10(),
	DirectionResource_t3043599327::get_offset_of_radiuses_11(),
	DirectionResource_t3043599327::get_offset_of_steps_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { sizeof (Directions_t994913360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3133[1] = 
{
	Directions_t994913360::get_offset_of_fileSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { sizeof (U3CQueryU3Ec__AnonStorey0_t304254431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3134[2] = 
{
	U3CQueryU3Ec__AnonStorey0_t304254431::get_offset_of_callback_0(),
	U3CQueryU3Ec__AnonStorey0_t304254431::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { sizeof (Overview_t3658811743), -1, sizeof(Overview_t3658811743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3135[4] = 
{
	Overview_t3658811743_StaticFields::get_offset_of_Full_0(),
	Overview_t3658811743_StaticFields::get_offset_of_Simplified_1(),
	Overview_t3658811743_StaticFields::get_offset_of_False_2(),
	Overview_t3658811743::get_offset_of_overview_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { sizeof (DirectionsResponse_t3780718349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3136[3] = 
{
	DirectionsResponse_t3780718349::get_offset_of_U3CRoutesU3Ek__BackingField_0(),
	DirectionsResponse_t3780718349::get_offset_of_U3CWaypointsU3Ek__BackingField_1(),
	DirectionsResponse_t3780718349::get_offset_of_U3CCodeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { sizeof (Intersection_t2772636325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3137[5] = 
{
	Intersection_t2772636325::get_offset_of_U3COutU3Ek__BackingField_0(),
	Intersection_t2772636325::get_offset_of_U3CEntryU3Ek__BackingField_1(),
	Intersection_t2772636325::get_offset_of_U3CBearingsU3Ek__BackingField_2(),
	Intersection_t2772636325::get_offset_of_U3CLocationU3Ek__BackingField_3(),
	Intersection_t2772636325::get_offset_of_U3CInU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { sizeof (Leg_t3685481244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3138[4] = 
{
	Leg_t3685481244::get_offset_of_U3CStepsU3Ek__BackingField_0(),
	Leg_t3685481244::get_offset_of_U3CSummaryU3Ek__BackingField_1(),
	Leg_t3685481244::get_offset_of_U3CDurationU3Ek__BackingField_2(),
	Leg_t3685481244::get_offset_of_U3CDistanceU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { sizeof (Maneuver_t3359337115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3139[6] = 
{
	Maneuver_t3359337115::get_offset_of_U3CBearingAfterU3Ek__BackingField_0(),
	Maneuver_t3359337115::get_offset_of_U3CTypeU3Ek__BackingField_1(),
	Maneuver_t3359337115::get_offset_of_U3CModifierU3Ek__BackingField_2(),
	Maneuver_t3359337115::get_offset_of_U3CBearingBeforeU3Ek__BackingField_3(),
	Maneuver_t3359337115::get_offset_of_U3CLocationU3Ek__BackingField_4(),
	Maneuver_t3359337115::get_offset_of_U3CInstructionU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { sizeof (Route_t320467103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3140[4] = 
{
	Route_t320467103::get_offset_of_U3CLegsU3Ek__BackingField_0(),
	Route_t320467103::get_offset_of_U3CGeometryU3Ek__BackingField_1(),
	Route_t320467103::get_offset_of_U3CDurationU3Ek__BackingField_2(),
	Route_t320467103::get_offset_of_U3CDistanceU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { sizeof (Step_t3681463660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3141[7] = 
{
	Step_t3681463660::get_offset_of_U3CIntersectionsU3Ek__BackingField_0(),
	Step_t3681463660::get_offset_of_U3CGeometryU3Ek__BackingField_1(),
	Step_t3681463660::get_offset_of_U3CManeuverU3Ek__BackingField_2(),
	Step_t3681463660::get_offset_of_U3CDurationU3Ek__BackingField_3(),
	Step_t3681463660::get_offset_of_U3CDistanceU3Ek__BackingField_4(),
	Step_t3681463660::get_offset_of_U3CNameU3Ek__BackingField_5(),
	Step_t3681463660::get_offset_of_U3CModeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { sizeof (Waypoint_t2090135419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3142[2] = 
{
	Waypoint_t2090135419::get_offset_of_U3CNameU3Ek__BackingField_0(),
	Waypoint_t2090135419::get_offset_of_U3CLocationU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { sizeof (RoutingProfile_t3025365347), -1, sizeof(RoutingProfile_t3025365347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3143[4] = 
{
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Driving_0(),
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Walking_1(),
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Cycling_2(),
	RoutingProfile_t3025365347::get_offset_of_profile_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { sizeof (ForwardGeocodeResource_t949712485), -1, sizeof(ForwardGeocodeResource_t949712485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3144[6] = 
{
	ForwardGeocodeResource_t949712485_StaticFields::get_offset_of_CountryCodes_8(),
	ForwardGeocodeResource_t949712485::get_offset_of_query_9(),
	ForwardGeocodeResource_t949712485::get_offset_of_autocomplete_10(),
	ForwardGeocodeResource_t949712485::get_offset_of_country_11(),
	ForwardGeocodeResource_t949712485::get_offset_of_proximity_12(),
	ForwardGeocodeResource_t949712485::get_offset_of_bbox_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3145[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3146 = { sizeof (Geocoder_t429800012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3146[1] = 
{
	Geocoder_t429800012::get_offset_of_fileSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3147 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3147[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3148 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3148[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3149 = { sizeof (Feature_t190893904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3149[11] = 
{
	Feature_t190893904::get_offset_of_U3CIdU3Ek__BackingField_0(),
	Feature_t190893904::get_offset_of_U3CTypeU3Ek__BackingField_1(),
	Feature_t190893904::get_offset_of_U3CTextU3Ek__BackingField_2(),
	Feature_t190893904::get_offset_of_U3CPlaceNameU3Ek__BackingField_3(),
	Feature_t190893904::get_offset_of_U3CRelevanceU3Ek__BackingField_4(),
	Feature_t190893904::get_offset_of_U3CPropertiesU3Ek__BackingField_5(),
	Feature_t190893904::get_offset_of_U3CBboxU3Ek__BackingField_6(),
	Feature_t190893904::get_offset_of_U3CCenterU3Ek__BackingField_7(),
	Feature_t190893904::get_offset_of_U3CGeometryU3Ek__BackingField_8(),
	Feature_t190893904::get_offset_of_U3CAddressU3Ek__BackingField_9(),
	Feature_t190893904::get_offset_of_U3CContextU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3150 = { sizeof (GeocodeResponse_t1492488371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3150[3] = 
{
	GeocodeResponse_t1492488371::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	GeocodeResponse_t1492488371::get_offset_of_U3CFeaturesU3Ek__BackingField_1(),
	GeocodeResponse_t1492488371::get_offset_of_U3CAttributionU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3151 = { sizeof (ReverseGeocodeResponse_t3646300659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3151[1] = 
{
	ReverseGeocodeResponse_t3646300659::get_offset_of_U3CQueryU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3152 = { sizeof (ForwardGeocodeResponse_t3120571778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3152[1] = 
{
	ForwardGeocodeResponse_t3120571778::get_offset_of_U3CQueryU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3153 = { sizeof (Geometry_t3071474686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3153[2] = 
{
	Geometry_t3071474686::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	Geometry_t3071474686::get_offset_of_U3CCoordinatesU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3154 = { sizeof (ReverseGeocodeResource_t910734276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3154[1] = 
{
	ReverseGeocodeResource_t910734276::get_offset_of_query_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3155 = { sizeof (CanonicalTileId_t3196769505)+ sizeof (Il2CppObject), sizeof(CanonicalTileId_t3196769505 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3155[3] = 
{
	CanonicalTileId_t3196769505::get_offset_of_Z_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CanonicalTileId_t3196769505::get_offset_of_X_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CanonicalTileId_t3196769505::get_offset_of_Y_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3156 = { sizeof (ClassicRasterTile_t4030752251), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3157 = { sizeof (ClassicRetinaRasterTile_t687167236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3158[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3159 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3159[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3160 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3160[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3161 = { sizeof (MapUtils_t76549171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3162 = { sizeof (RasterTile_t2968865301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3162[1] = 
{
	RasterTile_t2968865301::get_offset_of_data_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3163 = { sizeof (RawPngRasterTile_t4084098188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3164 = { sizeof (RetinaRasterTile_t3288531872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3165 = { sizeof (Tile_t1819912606), -1, sizeof(Tile_t1819912606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3165[6] = 
{
	Tile_t1819912606::get_offset_of__id_0(),
	Tile_t1819912606::get_offset_of__exceptions_1(),
	Tile_t1819912606::get_offset_of__state_2(),
	Tile_t1819912606::get_offset_of__request_3(),
	Tile_t1819912606::get_offset_of__callback_4(),
	Tile_t1819912606_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3166 = { sizeof (State_t2242625883)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3166[5] = 
{
	State_t2242625883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3167 = { sizeof (Parameters_t1432943040)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3167[3] = 
{
	Parameters_t1432943040::get_offset_of_Id_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Parameters_t1432943040::get_offset_of_MapId_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Parameters_t1432943040::get_offset_of_Fs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3168 = { sizeof (TileCover_t438232185), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3169 = { sizeof (TileResource_t679153792), -1, sizeof(TileResource_t679153792_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3169[2] = 
{
	TileResource_t679153792_StaticFields::get_offset_of__eventQuery_0(),
	TileResource_t679153792::get_offset_of__query_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3170 = { sizeof (UnwrappedTileId_t2874398135)+ sizeof (Il2CppObject), sizeof(UnwrappedTileId_t2874398135 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3170[3] = 
{
	UnwrappedTileId_t2874398135::get_offset_of_Z_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnwrappedTileId_t2874398135::get_offset_of_X_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnwrappedTileId_t2874398135::get_offset_of_Y_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3171 = { sizeof (VectorTile_t1808184891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3171[2] = 
{
	VectorTile_t1808184891::get_offset_of_data_6(),
	VectorTile_t1808184891::get_offset_of_isDisposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3172 = { sizeof (CachingWebFileSource_t1821968684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3172[2] = 
{
	CachingWebFileSource_t1821968684::get_offset_of__caches_0(),
	CachingWebFileSource_t1821968684::get_offset_of__accessToken_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3173 = { sizeof (MemoryCacheAsyncRequest_t753213365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3173[1] = 
{
	MemoryCacheAsyncRequest_t753213365::get_offset_of_U3CRequestUrlU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3174 = { sizeof (U3CRequestU3Ec__AnonStorey1_t3909649282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3174[2] = 
{
	U3CRequestU3Ec__AnonStorey1_t3909649282::get_offset_of_callback_0(),
	U3CRequestU3Ec__AnonStorey1_t3909649282::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3175 = { sizeof (U3CRequestU3Ec__AnonStorey0_t1180765927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3175[2] = 
{
	U3CRequestU3Ec__AnonStorey0_t1180765927::get_offset_of_cacheKey_0(),
	U3CRequestU3Ec__AnonStorey0_t1180765927::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3176 = { sizeof (DiskCache_t1154126551), -1, sizeof(DiskCache_t1154126551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3176[5] = 
{
	DiskCache_t1154126551::get_offset_of__maxCacheSize_0(),
	DiskCache_t1154126551::get_offset_of__lock_1(),
	DiskCache_t1154126551::get_offset_of__cachedResponses_2(),
	DiskCache_t1154126551_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
	DiskCache_t1154126551_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3177 = { sizeof (CacheItem_t2357247121)+ sizeof (Il2CppObject), sizeof(CacheItem_t2357247121_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3177[2] = 
{
	CacheItem_t2357247121::get_offset_of_Timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CacheItem_t2357247121::get_offset_of_Data_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3178 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3179 = { sizeof (MemoryCache_t1161932639), -1, sizeof(MemoryCache_t1161932639_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3179[4] = 
{
	MemoryCache_t1161932639::get_offset_of__maxCacheSize_0(),
	MemoryCache_t1161932639::get_offset_of__lock_1(),
	MemoryCache_t1161932639::get_offset_of__cachedResponses_2(),
	MemoryCache_t1161932639_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3180 = { sizeof (CacheItem_t3349332897)+ sizeof (Il2CppObject), sizeof(CacheItem_t3349332897_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3180[2] = 
{
	CacheItem_t3349332897::get_offset_of_Timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CacheItem_t3349332897::get_offset_of_Data_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3181 = { sizeof (FileSource_t1347159135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3181[6] = 
{
	FileSource_t1347159135::get_offset_of__requests_0(),
	FileSource_t1347159135::get_offset_of__accessToken_1(),
	FileSource_t1347159135::get_offset_of__lock_2(),
	FileSource_t1347159135::get_offset_of_XRateLimitInterval_3(),
	FileSource_t1347159135::get_offset_of_XRateLimitLimit_4(),
	FileSource_t1347159135::get_offset_of_XRateLimitReset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3182 = { sizeof (U3CproxyResponseU3Ec__AnonStorey0_t3931330398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3182[2] = 
{
	U3CproxyResponseU3Ec__AnonStorey0_t3931330398::get_offset_of_callback_0(),
	U3CproxyResponseU3Ec__AnonStorey0_t3931330398::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3183 = { sizeof (U3CWaitForAllRequestsU3Ec__AnonStorey1_t727404279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3183[1] = 
{
	U3CWaitForAllRequestsU3Ec__AnonStorey1_t727404279::get_offset_of_waitTimeMs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3184 = { sizeof (U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3184[2] = 
{
	U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282::get_offset_of_resetEvent_0(),
	U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3185 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3186 = { sizeof (IAsyncRequestFactory_t2941902086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3187 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3188 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3189 = { sizeof (Resource_t2839633034), -1, sizeof(Resource_t2839633034_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3189[4] = 
{
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3190 = { sizeof (Response_t557144579), -1, sizeof(Response_t557144579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3190[12] = 
{
	Response_t557144579::get_offset_of_U3CRequestU3Ek__BackingField_0(),
	Response_t557144579::get_offset_of_LoadedFromCache_1(),
	Response_t557144579::get_offset_of_RequestUrl_2(),
	Response_t557144579::get_offset_of_StatusCode_3(),
	Response_t557144579::get_offset_of_ContentType_4(),
	Response_t557144579::get_offset_of_XRateLimitInterval_5(),
	Response_t557144579::get_offset_of_XRateLimitLimit_6(),
	Response_t557144579::get_offset_of_XRateLimitReset_7(),
	Response_t557144579::get_offset_of__exceptions_8(),
	Response_t557144579::get_offset_of_Headers_9(),
	Response_t557144579::get_offset_of_Data_10(),
	Response_t557144579_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3191 = { sizeof (BearingFilter_t3685642986)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3191[2] = 
{
	BearingFilter_t3685642986::get_offset_of_Bearing_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BearingFilter_t3685642986::get_offset_of_Range_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3192 = { sizeof (Compression_t35425688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3193 = { sizeof (Constants_t3012120737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3193[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3194 = { sizeof (Vector2dBounds_t2768535998)+ sizeof (Il2CppObject), sizeof(Vector2dBounds_t2768535998 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3194[2] = 
{
	Vector2dBounds_t2768535998::get_offset_of_SouthWest_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Vector2dBounds_t2768535998::get_offset_of_NorthEast_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3195 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3196 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3197 = { sizeof (BboxToVector2dBoundsConverter_t914855120), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3198 = { sizeof (JsonConverters_t3738359027), -1, sizeof(JsonConverters_t3738359027_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3198[1] = 
{
	JsonConverters_t3738359027_StaticFields::get_offset_of_converters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3199 = { sizeof (LonLatToVector2dConverter_t4098085794), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
