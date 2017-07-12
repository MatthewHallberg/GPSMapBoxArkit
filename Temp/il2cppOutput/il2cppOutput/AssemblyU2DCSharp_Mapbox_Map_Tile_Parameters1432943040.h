#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Mapbox_Map_CanonicalTileId3196769505.h"

// System.String
struct String_t;
// Mapbox.Platform.IFileSource
struct IFileSource_t1542108046;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.Tile/Parameters
struct  Parameters_t1432943040 
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile/Parameters::Id
	CanonicalTileId_t3196769505  ___Id_0;
	// System.String Mapbox.Map.Tile/Parameters::MapId
	String_t* ___MapId_1;
	// Mapbox.Platform.IFileSource Mapbox.Map.Tile/Parameters::Fs
	Il2CppObject * ___Fs_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(Parameters_t1432943040, ___Id_0)); }
	inline CanonicalTileId_t3196769505  get_Id_0() const { return ___Id_0; }
	inline CanonicalTileId_t3196769505 * get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(CanonicalTileId_t3196769505  value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_MapId_1() { return static_cast<int32_t>(offsetof(Parameters_t1432943040, ___MapId_1)); }
	inline String_t* get_MapId_1() const { return ___MapId_1; }
	inline String_t** get_address_of_MapId_1() { return &___MapId_1; }
	inline void set_MapId_1(String_t* value)
	{
		___MapId_1 = value;
		Il2CppCodeGenWriteBarrier(&___MapId_1, value);
	}

	inline static int32_t get_offset_of_Fs_2() { return static_cast<int32_t>(offsetof(Parameters_t1432943040, ___Fs_2)); }
	inline Il2CppObject * get_Fs_2() const { return ___Fs_2; }
	inline Il2CppObject ** get_address_of_Fs_2() { return &___Fs_2; }
	inline void set_Fs_2(Il2CppObject * value)
	{
		___Fs_2 = value;
		Il2CppCodeGenWriteBarrier(&___Fs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Map.Tile/Parameters
struct Parameters_t1432943040_marshaled_pinvoke
{
	CanonicalTileId_t3196769505  ___Id_0;
	char* ___MapId_1;
	Il2CppObject * ___Fs_2;
};
// Native definition for COM marshalling of Mapbox.Map.Tile/Parameters
struct Parameters_t1432943040_marshaled_com
{
	CanonicalTileId_t3196769505  ___Id_0;
	Il2CppChar* ___MapId_1;
	Il2CppObject * ___Fs_2;
};
