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
#include "AssemblyU2DCSharp_TriangleNet_Tools_Interpolation1799114208.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_IntersectionHel821143009.h"
#include "AssemblyU2DCSharp_TriangleNet_Tools_PolygonValidat1450041398.h"
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







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3000 = { sizeof (Interpolation_t1799114208), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3001 = { sizeof (IntersectionHelper_t821143009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3002 = { sizeof (PolygonValidator_t1450041398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3003 = { sizeof (QualityMeasure_t629742871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3003[4] = 
{
	QualityMeasure_t629742871::get_offset_of_areaMeasure_0(),
	QualityMeasure_t629742871::get_offset_of_alphaMeasure_1(),
	QualityMeasure_t629742871::get_offset_of_qMeasure_2(),
	QualityMeasure_t629742871::get_offset_of_mesh_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3004 = { sizeof (AreaMeasure_t2609477317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3004[4] = 
{
	AreaMeasure_t2609477317::get_offset_of_area_min_0(),
	AreaMeasure_t2609477317::get_offset_of_area_max_1(),
	AreaMeasure_t2609477317::get_offset_of_area_total_2(),
	AreaMeasure_t2609477317::get_offset_of_area_zero_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3005 = { sizeof (AlphaMeasure_t42523064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3005[4] = 
{
	AlphaMeasure_t42523064::get_offset_of_alpha_min_0(),
	AlphaMeasure_t42523064::get_offset_of_alpha_max_1(),
	AlphaMeasure_t42523064::get_offset_of_alpha_ave_2(),
	AlphaMeasure_t42523064::get_offset_of_alpha_area_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3006 = { sizeof (Q_Measure_t3930961000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3006[4] = 
{
	Q_Measure_t3930961000::get_offset_of_q_min_0(),
	Q_Measure_t3930961000::get_offset_of_q_max_1(),
	Q_Measure_t3930961000::get_offset_of_q_ave_2(),
	Q_Measure_t3930961000::get_offset_of_q_area_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3007 = { sizeof (Statistic_t3669938472), -1, sizeof(Statistic_t3669938472_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3007[22] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3008 = { sizeof (TriangleQuadTree_t2624374923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3008[4] = 
{
	TriangleQuadTree_t2624374923::get_offset_of_root_0(),
	TriangleQuadTree_t2624374923::get_offset_of_triangles_1(),
	TriangleQuadTree_t2624374923::get_offset_of_sizeBound_2(),
	TriangleQuadTree_t2624374923::get_offset_of_maxDepth_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3009 = { sizeof (QuadNode_t1733368551), -1, sizeof(QuadNode_t1733368551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3009[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3010 = { sizeof (VertexSorter_t288750371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3010[3] = 
{
	0,
	VertexSorter_t288750371::get_offset_of_rand_1(),
	VertexSorter_t288750371::get_offset_of_points_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3011 = { sizeof (DcelMesh_t3742056343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3011[3] = 
{
	DcelMesh_t3742056343::get_offset_of_vertices_0(),
	DcelMesh_t3742056343::get_offset_of_edges_1(),
	DcelMesh_t3742056343::get_offset_of_faces_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3012 = { sizeof (Face_t3682684903), -1, sizeof(Face_t3682684903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3012[6] = 
{
	Face_t3682684903_StaticFields::get_offset_of_Empty_0(),
	Face_t3682684903::get_offset_of_id_1(),
	Face_t3682684903::get_offset_of_mark_2(),
	Face_t3682684903::get_offset_of_generator_3(),
	Face_t3682684903::get_offset_of_edge_4(),
	Face_t3682684903::get_offset_of_bounded_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3013 = { sizeof (U3CEnumerateEdgesU3Ec__Iterator0_t153644287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3013[6] = 
{
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U3CedgeU3E__0_0(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U3CfirstU3E__0_1(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24this_2(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24current_3(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24disposing_4(),
	U3CEnumerateEdgesU3Ec__Iterator0_t153644287::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3014 = { sizeof (HalfEdge_t445267738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3014[6] = 
{
	HalfEdge_t445267738::get_offset_of_id_0(),
	HalfEdge_t445267738::get_offset_of_mark_1(),
	HalfEdge_t445267738::get_offset_of_origin_2(),
	HalfEdge_t445267738::get_offset_of_face_3(),
	HalfEdge_t445267738::get_offset_of_twin_4(),
	HalfEdge_t445267738::get_offset_of_next_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3015 = { sizeof (Vertex_t3185693932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3015[1] = 
{
	Vertex_t3185693932::get_offset_of_leaving_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3016 = { sizeof (U3CEnumerateEdgesU3Ec__Iterator0_t179549716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3016[6] = 
{
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U3CedgeU3E__0_0(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U3CfirstU3E__0_1(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24this_2(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24current_3(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24disposing_4(),
	U3CEnumerateEdgesU3Ec__Iterator0_t179549716::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3017 = { sizeof (Osub_t2903723171)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3017[2] = 
{
	Osub_t2903723171::get_offset_of_seg_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Osub_t2903723171::get_offset_of_orient_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3018 = { sizeof (Otri_t174839988)+ sizeof (Il2CppObject), -1, sizeof(Otri_t174839988_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3018[4] = 
{
	Otri_t174839988::get_offset_of_tri_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Otri_t174839988::get_offset_of_orient_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Otri_t174839988_StaticFields::get_offset_of_plus1Mod3_2(),
	Otri_t174839988_StaticFields::get_offset_of_minus1Mod3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3019 = { sizeof (SubSegment_t918625531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3019[5] = 
{
	SubSegment_t918625531::get_offset_of_hash_0(),
	SubSegment_t918625531::get_offset_of_subsegs_1(),
	SubSegment_t918625531::get_offset_of_vertices_2(),
	SubSegment_t918625531::get_offset_of_triangles_3(),
	SubSegment_t918625531::get_offset_of_boundary_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3020 = { sizeof (Triangle_t3965613618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3020[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3021 = { sizeof (TriangleLocator_t236619704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3021[4] = 
{
	TriangleLocator_t236619704::get_offset_of_sampler_0(),
	TriangleLocator_t236619704::get_offset_of_mesh_1(),
	TriangleLocator_t236619704::get_offset_of_predicates_2(),
	TriangleLocator_t236619704::get_offset_of_recenttri_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3022 = { sizeof (TrianglePool_t3592645624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3022[5] = 
{
	0,
	TrianglePool_t3592645624::get_offset_of_size_1(),
	TrianglePool_t3592645624::get_offset_of_count_2(),
	TrianglePool_t3592645624::get_offset_of_pool_3(),
	TrianglePool_t3592645624::get_offset_of_stack_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3023 = { sizeof (Enumerator_t371404912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3023[5] = 
{
	Enumerator_t371404912::get_offset_of_count_0(),
	Enumerator_t371404912::get_offset_of_pool_1(),
	Enumerator_t371404912::get_offset_of_current_2(),
	Enumerator_t371404912::get_offset_of_index_3(),
	Enumerator_t371404912::get_offset_of_offset_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3024 = { sizeof (U3CSampleU3Ec__Iterator0_t2172744821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3024[10] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3025 = { sizeof (TriangleSampler_t1615517784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3025[6] = 
{
	0,
	0,
	TriangleSampler_t1615517784::get_offset_of_random_2(),
	TriangleSampler_t1615517784::get_offset_of_mesh_3(),
	TriangleSampler_t1615517784::get_offset_of_samples_4(),
	TriangleSampler_t1615517784::get_offset_of_triangleCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3026 = { sizeof (BoundedVoronoi_t3118893497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3026[1] = 
{
	BoundedVoronoi_t3118893497::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3027 = { sizeof (DefaultVoronoiFactory_t2300926391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3028 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3029 = { sizeof (BoundedVoronoiLegacy_t1975431292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3029[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3031 = { sizeof (SimpleVoronoi_t3805366222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3031[7] = 
{
	SimpleVoronoi_t3805366222::get_offset_of_predicates_0(),
	SimpleVoronoi_t3805366222::get_offset_of_mesh_1(),
	SimpleVoronoi_t3805366222::get_offset_of_points_2(),
	SimpleVoronoi_t3805366222::get_offset_of_regions_3(),
	SimpleVoronoi_t3805366222::get_offset_of_rayPoints_4(),
	SimpleVoronoi_t3805366222::get_offset_of_rayIndex_5(),
	SimpleVoronoi_t3805366222::get_offset_of_bounds_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3032 = { sizeof (VoronoiRegion_t1224079960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3032[5] = 
{
	VoronoiRegion_t1224079960::get_offset_of_id_0(),
	VoronoiRegion_t1224079960::get_offset_of_generator_1(),
	VoronoiRegion_t1224079960::get_offset_of_vertices_2(),
	VoronoiRegion_t1224079960::get_offset_of_bounded_3(),
	VoronoiRegion_t1224079960::get_offset_of_neighbors_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3033 = { sizeof (StandardVoronoi_t2667488523), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3034 = { sizeof (VoronoiBase_t1875181573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3034[3] = 
{
	VoronoiBase_t1875181573::get_offset_of_predicates_3(),
	VoronoiBase_t1875181573::get_offset_of_factory_4(),
	VoronoiBase_t1875181573::get_offset_of_rays_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3035 = { sizeof (DirectionResource_t3043599327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3035[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3036 = { sizeof (Directions_t994913360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3036[1] = 
{
	Directions_t994913360::get_offset_of_fileSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3037 = { sizeof (U3CQueryU3Ec__AnonStorey0_t304254431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3037[2] = 
{
	U3CQueryU3Ec__AnonStorey0_t304254431::get_offset_of_callback_0(),
	U3CQueryU3Ec__AnonStorey0_t304254431::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3038 = { sizeof (Overview_t3658811743), -1, sizeof(Overview_t3658811743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3038[4] = 
{
	Overview_t3658811743_StaticFields::get_offset_of_Full_0(),
	Overview_t3658811743_StaticFields::get_offset_of_Simplified_1(),
	Overview_t3658811743_StaticFields::get_offset_of_False_2(),
	Overview_t3658811743::get_offset_of_overview_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3039 = { sizeof (DirectionsResponse_t3780718349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3039[3] = 
{
	DirectionsResponse_t3780718349::get_offset_of_U3CRoutesU3Ek__BackingField_0(),
	DirectionsResponse_t3780718349::get_offset_of_U3CWaypointsU3Ek__BackingField_1(),
	DirectionsResponse_t3780718349::get_offset_of_U3CCodeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3040 = { sizeof (Intersection_t2772636325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3040[5] = 
{
	Intersection_t2772636325::get_offset_of_U3COutU3Ek__BackingField_0(),
	Intersection_t2772636325::get_offset_of_U3CEntryU3Ek__BackingField_1(),
	Intersection_t2772636325::get_offset_of_U3CBearingsU3Ek__BackingField_2(),
	Intersection_t2772636325::get_offset_of_U3CLocationU3Ek__BackingField_3(),
	Intersection_t2772636325::get_offset_of_U3CInU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3041 = { sizeof (Leg_t3685481244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3041[4] = 
{
	Leg_t3685481244::get_offset_of_U3CStepsU3Ek__BackingField_0(),
	Leg_t3685481244::get_offset_of_U3CSummaryU3Ek__BackingField_1(),
	Leg_t3685481244::get_offset_of_U3CDurationU3Ek__BackingField_2(),
	Leg_t3685481244::get_offset_of_U3CDistanceU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3042 = { sizeof (Maneuver_t3359337115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3042[6] = 
{
	Maneuver_t3359337115::get_offset_of_U3CBearingAfterU3Ek__BackingField_0(),
	Maneuver_t3359337115::get_offset_of_U3CTypeU3Ek__BackingField_1(),
	Maneuver_t3359337115::get_offset_of_U3CModifierU3Ek__BackingField_2(),
	Maneuver_t3359337115::get_offset_of_U3CBearingBeforeU3Ek__BackingField_3(),
	Maneuver_t3359337115::get_offset_of_U3CLocationU3Ek__BackingField_4(),
	Maneuver_t3359337115::get_offset_of_U3CInstructionU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3043 = { sizeof (Route_t320467103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3043[4] = 
{
	Route_t320467103::get_offset_of_U3CLegsU3Ek__BackingField_0(),
	Route_t320467103::get_offset_of_U3CGeometryU3Ek__BackingField_1(),
	Route_t320467103::get_offset_of_U3CDurationU3Ek__BackingField_2(),
	Route_t320467103::get_offset_of_U3CDistanceU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3044 = { sizeof (Step_t3681463660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3044[7] = 
{
	Step_t3681463660::get_offset_of_U3CIntersectionsU3Ek__BackingField_0(),
	Step_t3681463660::get_offset_of_U3CGeometryU3Ek__BackingField_1(),
	Step_t3681463660::get_offset_of_U3CManeuverU3Ek__BackingField_2(),
	Step_t3681463660::get_offset_of_U3CDurationU3Ek__BackingField_3(),
	Step_t3681463660::get_offset_of_U3CDistanceU3Ek__BackingField_4(),
	Step_t3681463660::get_offset_of_U3CNameU3Ek__BackingField_5(),
	Step_t3681463660::get_offset_of_U3CModeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3045 = { sizeof (Waypoint_t2090135419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3045[2] = 
{
	Waypoint_t2090135419::get_offset_of_U3CNameU3Ek__BackingField_0(),
	Waypoint_t2090135419::get_offset_of_U3CLocationU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3046 = { sizeof (RoutingProfile_t3025365347), -1, sizeof(RoutingProfile_t3025365347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3046[4] = 
{
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Driving_0(),
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Walking_1(),
	RoutingProfile_t3025365347_StaticFields::get_offset_of_Cycling_2(),
	RoutingProfile_t3025365347::get_offset_of_profile_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3047 = { sizeof (ForwardGeocodeResource_t949712485), -1, sizeof(ForwardGeocodeResource_t949712485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3047[6] = 
{
	ForwardGeocodeResource_t949712485_StaticFields::get_offset_of_CountryCodes_8(),
	ForwardGeocodeResource_t949712485::get_offset_of_query_9(),
	ForwardGeocodeResource_t949712485::get_offset_of_autocomplete_10(),
	ForwardGeocodeResource_t949712485::get_offset_of_country_11(),
	ForwardGeocodeResource_t949712485::get_offset_of_proximity_12(),
	ForwardGeocodeResource_t949712485::get_offset_of_bbox_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3048 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3048[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3049 = { sizeof (Geocoder_t429800012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3049[1] = 
{
	Geocoder_t429800012::get_offset_of_fileSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3050 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3050[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3051 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3051[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3052 = { sizeof (Feature_t190893904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3052[11] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3053 = { sizeof (GeocodeResponse_t1492488371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3053[3] = 
{
	GeocodeResponse_t1492488371::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	GeocodeResponse_t1492488371::get_offset_of_U3CFeaturesU3Ek__BackingField_1(),
	GeocodeResponse_t1492488371::get_offset_of_U3CAttributionU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3054 = { sizeof (ReverseGeocodeResponse_t3646300659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3054[1] = 
{
	ReverseGeocodeResponse_t3646300659::get_offset_of_U3CQueryU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3055 = { sizeof (ForwardGeocodeResponse_t3120571778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3055[1] = 
{
	ForwardGeocodeResponse_t3120571778::get_offset_of_U3CQueryU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3056 = { sizeof (Geometry_t3071474686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3056[2] = 
{
	Geometry_t3071474686::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	Geometry_t3071474686::get_offset_of_U3CCoordinatesU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3057 = { sizeof (ReverseGeocodeResource_t910734276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3057[1] = 
{
	ReverseGeocodeResource_t910734276::get_offset_of_query_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3058 = { sizeof (CanonicalTileId_t3196769505)+ sizeof (Il2CppObject), sizeof(CanonicalTileId_t3196769505 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3058[3] = 
{
	CanonicalTileId_t3196769505::get_offset_of_Z_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CanonicalTileId_t3196769505::get_offset_of_X_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CanonicalTileId_t3196769505::get_offset_of_Y_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3059 = { sizeof (ClassicRasterTile_t4030752251), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3060 = { sizeof (ClassicRetinaRasterTile_t687167236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3061 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3061[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3062 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3062[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3063 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3063[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3064 = { sizeof (MapUtils_t76549171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3065 = { sizeof (RasterTile_t2968865301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3065[1] = 
{
	RasterTile_t2968865301::get_offset_of_data_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3066 = { sizeof (RawPngRasterTile_t4084098188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3067 = { sizeof (RetinaRasterTile_t3288531872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3068 = { sizeof (Tile_t1819912606), -1, sizeof(Tile_t1819912606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3068[6] = 
{
	Tile_t1819912606::get_offset_of__id_0(),
	Tile_t1819912606::get_offset_of__exceptions_1(),
	Tile_t1819912606::get_offset_of__state_2(),
	Tile_t1819912606::get_offset_of__request_3(),
	Tile_t1819912606::get_offset_of__callback_4(),
	Tile_t1819912606_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3069 = { sizeof (State_t2242625883)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3069[5] = 
{
	State_t2242625883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3070 = { sizeof (Parameters_t1432943040)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3070[3] = 
{
	Parameters_t1432943040::get_offset_of_Id_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Parameters_t1432943040::get_offset_of_MapId_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Parameters_t1432943040::get_offset_of_Fs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3071 = { sizeof (TileCover_t438232185), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3072 = { sizeof (TileResource_t679153792), -1, sizeof(TileResource_t679153792_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3072[2] = 
{
	TileResource_t679153792_StaticFields::get_offset_of__eventQuery_0(),
	TileResource_t679153792::get_offset_of__query_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3073 = { sizeof (UnwrappedTileId_t2874398135)+ sizeof (Il2CppObject), sizeof(UnwrappedTileId_t2874398135 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3073[3] = 
{
	UnwrappedTileId_t2874398135::get_offset_of_Z_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnwrappedTileId_t2874398135::get_offset_of_X_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnwrappedTileId_t2874398135::get_offset_of_Y_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3074 = { sizeof (VectorTile_t1808184891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3074[2] = 
{
	VectorTile_t1808184891::get_offset_of_data_6(),
	VectorTile_t1808184891::get_offset_of_isDisposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3075 = { sizeof (CachingWebFileSource_t1821968684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3075[2] = 
{
	CachingWebFileSource_t1821968684::get_offset_of__caches_0(),
	CachingWebFileSource_t1821968684::get_offset_of__accessToken_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3076 = { sizeof (MemoryCacheAsyncRequest_t753213365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3076[1] = 
{
	MemoryCacheAsyncRequest_t753213365::get_offset_of_U3CRequestUrlU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3077 = { sizeof (U3CRequestU3Ec__AnonStorey1_t3909649282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3077[2] = 
{
	U3CRequestU3Ec__AnonStorey1_t3909649282::get_offset_of_callback_0(),
	U3CRequestU3Ec__AnonStorey1_t3909649282::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3078 = { sizeof (U3CRequestU3Ec__AnonStorey0_t1180765927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3078[2] = 
{
	U3CRequestU3Ec__AnonStorey0_t1180765927::get_offset_of_cacheKey_0(),
	U3CRequestU3Ec__AnonStorey0_t1180765927::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3079 = { sizeof (DiskCache_t1154126551), -1, sizeof(DiskCache_t1154126551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3079[5] = 
{
	DiskCache_t1154126551::get_offset_of__maxCacheSize_0(),
	DiskCache_t1154126551::get_offset_of__lock_1(),
	DiskCache_t1154126551::get_offset_of__cachedResponses_2(),
	DiskCache_t1154126551_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
	DiskCache_t1154126551_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3080 = { sizeof (CacheItem_t2357247121)+ sizeof (Il2CppObject), sizeof(CacheItem_t2357247121_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3080[2] = 
{
	CacheItem_t2357247121::get_offset_of_Timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CacheItem_t2357247121::get_offset_of_Data_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3081 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3082 = { sizeof (MemoryCache_t1161932639), -1, sizeof(MemoryCache_t1161932639_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3082[4] = 
{
	MemoryCache_t1161932639::get_offset_of__maxCacheSize_0(),
	MemoryCache_t1161932639::get_offset_of__lock_1(),
	MemoryCache_t1161932639::get_offset_of__cachedResponses_2(),
	MemoryCache_t1161932639_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3083 = { sizeof (CacheItem_t3349332897)+ sizeof (Il2CppObject), sizeof(CacheItem_t3349332897_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3083[2] = 
{
	CacheItem_t3349332897::get_offset_of_Timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CacheItem_t3349332897::get_offset_of_Data_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3084 = { sizeof (FileSource_t1347159135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3084[6] = 
{
	FileSource_t1347159135::get_offset_of__requests_0(),
	FileSource_t1347159135::get_offset_of__accessToken_1(),
	FileSource_t1347159135::get_offset_of__lock_2(),
	FileSource_t1347159135::get_offset_of_XRateLimitInterval_3(),
	FileSource_t1347159135::get_offset_of_XRateLimitLimit_4(),
	FileSource_t1347159135::get_offset_of_XRateLimitReset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3085 = { sizeof (U3CproxyResponseU3Ec__AnonStorey0_t3931330398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3085[2] = 
{
	U3CproxyResponseU3Ec__AnonStorey0_t3931330398::get_offset_of_callback_0(),
	U3CproxyResponseU3Ec__AnonStorey0_t3931330398::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3086 = { sizeof (U3CWaitForAllRequestsU3Ec__AnonStorey1_t727404279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3086[1] = 
{
	U3CWaitForAllRequestsU3Ec__AnonStorey1_t727404279::get_offset_of_waitTimeMs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3087 = { sizeof (U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3087[2] = 
{
	U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282::get_offset_of_resetEvent_0(),
	U3CWaitForAllRequestsU3Ec__AnonStorey2_t727404282::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3088 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3089 = { sizeof (IAsyncRequestFactory_t2941902086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3090 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3091 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3092 = { sizeof (Resource_t2839633034), -1, sizeof(Resource_t2839633034_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3092[4] = 
{
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	Resource_t2839633034_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3093 = { sizeof (Response_t557144579), -1, sizeof(Response_t557144579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3093[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3094 = { sizeof (BearingFilter_t3685642986)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3094[2] = 
{
	BearingFilter_t3685642986::get_offset_of_Bearing_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BearingFilter_t3685642986::get_offset_of_Range_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3095 = { sizeof (Compression_t35425688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3096 = { sizeof (Constants_t3012120737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3096[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3097 = { sizeof (Vector2dBounds_t2768535998)+ sizeof (Il2CppObject), sizeof(Vector2dBounds_t2768535998 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3097[2] = 
{
	Vector2dBounds_t2768535998::get_offset_of_SouthWest_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Vector2dBounds_t2768535998::get_offset_of_NorthEast_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3098 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3099 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
