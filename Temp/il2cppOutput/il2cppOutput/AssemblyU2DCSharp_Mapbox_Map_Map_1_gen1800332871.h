#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Mapbox_Utils_Vector2dBounds2768535998.h"

// Mapbox.Platform.IFileSource
struct IFileSource_t1542108046;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<Mapbox.Map.VectorTile>
struct HashSet_1_t141645745;
// System.Collections.Generic.List`1<Mapbox.Utils.IObserver`1<Mapbox.Map.VectorTile>>
struct List_1_t2493461844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Map`1<Mapbox.Map.VectorTile>
struct  Map_1_t1800332871  : public Il2CppObject
{
public:
	// Mapbox.Platform.IFileSource Mapbox.Map.Map`1::fs
	Il2CppObject * ___fs_1;
	// Mapbox.Utils.Vector2dBounds Mapbox.Map.Map`1::latLngBounds
	Vector2dBounds_t2768535998  ___latLngBounds_2;
	// System.Int32 Mapbox.Map.Map`1::zoom
	int32_t ___zoom_3;
	// System.String Mapbox.Map.Map`1::mapId
	String_t* ___mapId_4;
	// System.Collections.Generic.HashSet`1<T> Mapbox.Map.Map`1::tiles
	HashSet_1_t141645745 * ___tiles_5;
	// System.Collections.Generic.List`1<Mapbox.Utils.IObserver`1<T>> Mapbox.Map.Map`1::observers
	List_1_t2493461844 * ___observers_6;

public:
	inline static int32_t get_offset_of_fs_1() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___fs_1)); }
	inline Il2CppObject * get_fs_1() const { return ___fs_1; }
	inline Il2CppObject ** get_address_of_fs_1() { return &___fs_1; }
	inline void set_fs_1(Il2CppObject * value)
	{
		___fs_1 = value;
		Il2CppCodeGenWriteBarrier(&___fs_1, value);
	}

	inline static int32_t get_offset_of_latLngBounds_2() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___latLngBounds_2)); }
	inline Vector2dBounds_t2768535998  get_latLngBounds_2() const { return ___latLngBounds_2; }
	inline Vector2dBounds_t2768535998 * get_address_of_latLngBounds_2() { return &___latLngBounds_2; }
	inline void set_latLngBounds_2(Vector2dBounds_t2768535998  value)
	{
		___latLngBounds_2 = value;
	}

	inline static int32_t get_offset_of_zoom_3() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___zoom_3)); }
	inline int32_t get_zoom_3() const { return ___zoom_3; }
	inline int32_t* get_address_of_zoom_3() { return &___zoom_3; }
	inline void set_zoom_3(int32_t value)
	{
		___zoom_3 = value;
	}

	inline static int32_t get_offset_of_mapId_4() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___mapId_4)); }
	inline String_t* get_mapId_4() const { return ___mapId_4; }
	inline String_t** get_address_of_mapId_4() { return &___mapId_4; }
	inline void set_mapId_4(String_t* value)
	{
		___mapId_4 = value;
		Il2CppCodeGenWriteBarrier(&___mapId_4, value);
	}

	inline static int32_t get_offset_of_tiles_5() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___tiles_5)); }
	inline HashSet_1_t141645745 * get_tiles_5() const { return ___tiles_5; }
	inline HashSet_1_t141645745 ** get_address_of_tiles_5() { return &___tiles_5; }
	inline void set_tiles_5(HashSet_1_t141645745 * value)
	{
		___tiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_5, value);
	}

	inline static int32_t get_offset_of_observers_6() { return static_cast<int32_t>(offsetof(Map_1_t1800332871, ___observers_6)); }
	inline List_1_t2493461844 * get_observers_6() const { return ___observers_6; }
	inline List_1_t2493461844 ** get_address_of_observers_6() { return &___observers_6; }
	inline void set_observers_6(List_1_t2493461844 * value)
	{
		___observers_6 = value;
		Il2CppCodeGenWriteBarrier(&___observers_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
