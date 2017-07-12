#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_RectD1598124772.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// TriangleNet.Meshing.IMesh
struct IMesh_t3927617924;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_t810119712;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t981949843;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Data.MeshData
struct  MeshData_t1635666189  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> Mapbox.Unity.MeshGeneration.Data.MeshData::<Edges>k__BackingField
	List_1_t1440998580 * ___U3CEdgesU3Ek__BackingField_0;
	// TriangleNet.Meshing.IMesh Mapbox.Unity.MeshGeneration.Data.MeshData::<PolygonMesh>k__BackingField
	Il2CppObject * ___U3CPolygonMeshU3Ek__BackingField_1;
	// UnityEngine.Vector2 Mapbox.Unity.MeshGeneration.Data.MeshData::<MercatorCenter>k__BackingField
	Vector2_t2243707579  ___U3CMercatorCenterU3Ek__BackingField_2;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.MeshData::<TileRect>k__BackingField
	RectD_t1598124772  ___U3CTileRectU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Mapbox.Unity.MeshGeneration.Data.MeshData::<Vertices>k__BackingField
	List_1_t1612828712 * ___U3CVerticesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Mapbox.Unity.MeshGeneration.Data.MeshData::<Normals>k__BackingField
	List_1_t1612828712 * ___U3CNormalsU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> Mapbox.Unity.MeshGeneration.Data.MeshData::<Triangles>k__BackingField
	List_1_t810119712 * ___U3CTrianglesU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> Mapbox.Unity.MeshGeneration.Data.MeshData::<UV>k__BackingField
	List_1_t981949843 * ___U3CUVU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CEdgesU3Ek__BackingField_0)); }
	inline List_1_t1440998580 * get_U3CEdgesU3Ek__BackingField_0() const { return ___U3CEdgesU3Ek__BackingField_0; }
	inline List_1_t1440998580 ** get_address_of_U3CEdgesU3Ek__BackingField_0() { return &___U3CEdgesU3Ek__BackingField_0; }
	inline void set_U3CEdgesU3Ek__BackingField_0(List_1_t1440998580 * value)
	{
		___U3CEdgesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEdgesU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CPolygonMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CPolygonMeshU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CPolygonMeshU3Ek__BackingField_1() const { return ___U3CPolygonMeshU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CPolygonMeshU3Ek__BackingField_1() { return &___U3CPolygonMeshU3Ek__BackingField_1; }
	inline void set_U3CPolygonMeshU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CPolygonMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPolygonMeshU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CMercatorCenterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CMercatorCenterU3Ek__BackingField_2)); }
	inline Vector2_t2243707579  get_U3CMercatorCenterU3Ek__BackingField_2() const { return ___U3CMercatorCenterU3Ek__BackingField_2; }
	inline Vector2_t2243707579 * get_address_of_U3CMercatorCenterU3Ek__BackingField_2() { return &___U3CMercatorCenterU3Ek__BackingField_2; }
	inline void set_U3CMercatorCenterU3Ek__BackingField_2(Vector2_t2243707579  value)
	{
		___U3CMercatorCenterU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTileRectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CTileRectU3Ek__BackingField_3)); }
	inline RectD_t1598124772  get_U3CTileRectU3Ek__BackingField_3() const { return ___U3CTileRectU3Ek__BackingField_3; }
	inline RectD_t1598124772 * get_address_of_U3CTileRectU3Ek__BackingField_3() { return &___U3CTileRectU3Ek__BackingField_3; }
	inline void set_U3CTileRectU3Ek__BackingField_3(RectD_t1598124772  value)
	{
		___U3CTileRectU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CVerticesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CVerticesU3Ek__BackingField_4)); }
	inline List_1_t1612828712 * get_U3CVerticesU3Ek__BackingField_4() const { return ___U3CVerticesU3Ek__BackingField_4; }
	inline List_1_t1612828712 ** get_address_of_U3CVerticesU3Ek__BackingField_4() { return &___U3CVerticesU3Ek__BackingField_4; }
	inline void set_U3CVerticesU3Ek__BackingField_4(List_1_t1612828712 * value)
	{
		___U3CVerticesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CVerticesU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CNormalsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CNormalsU3Ek__BackingField_5)); }
	inline List_1_t1612828712 * get_U3CNormalsU3Ek__BackingField_5() const { return ___U3CNormalsU3Ek__BackingField_5; }
	inline List_1_t1612828712 ** get_address_of_U3CNormalsU3Ek__BackingField_5() { return &___U3CNormalsU3Ek__BackingField_5; }
	inline void set_U3CNormalsU3Ek__BackingField_5(List_1_t1612828712 * value)
	{
		___U3CNormalsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNormalsU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CTrianglesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CTrianglesU3Ek__BackingField_6)); }
	inline List_1_t810119712 * get_U3CTrianglesU3Ek__BackingField_6() const { return ___U3CTrianglesU3Ek__BackingField_6; }
	inline List_1_t810119712 ** get_address_of_U3CTrianglesU3Ek__BackingField_6() { return &___U3CTrianglesU3Ek__BackingField_6; }
	inline void set_U3CTrianglesU3Ek__BackingField_6(List_1_t810119712 * value)
	{
		___U3CTrianglesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrianglesU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CUVU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MeshData_t1635666189, ___U3CUVU3Ek__BackingField_7)); }
	inline List_1_t981949843 * get_U3CUVU3Ek__BackingField_7() const { return ___U3CUVU3Ek__BackingField_7; }
	inline List_1_t981949843 ** get_address_of_U3CUVU3Ek__BackingField_7() { return &___U3CUVU3Ek__BackingField_7; }
	inline void set_U3CUVU3Ek__BackingField_7(List_1_t981949843 * value)
	{
		___U3CUVU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUVU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
