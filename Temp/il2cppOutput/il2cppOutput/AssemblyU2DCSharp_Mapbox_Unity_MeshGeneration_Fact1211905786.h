#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modu3264578301.h"

// Mapbox.Platform.IFileSource
struct IFileSource_t1542108046;
// System.Action`1<Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory>
struct Action_1_t1013705168;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory
struct  AbstractTileFactory_t1211905786  : public ScriptableObject_t1975622470
{
public:
	// Mapbox.Platform.IFileSource Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory::_fileSource
	Il2CppObject * ____fileSource_2;
	// Mapbox.Unity.MeshGeneration.ModuleState Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.Int32 Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory::_progress
	int32_t ____progress_4;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory> Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory::OnFactoryStateChanged
	Action_1_t1013705168 * ___OnFactoryStateChanged_5;

public:
	inline static int32_t get_offset_of__fileSource_2() { return static_cast<int32_t>(offsetof(AbstractTileFactory_t1211905786, ____fileSource_2)); }
	inline Il2CppObject * get__fileSource_2() const { return ____fileSource_2; }
	inline Il2CppObject ** get_address_of__fileSource_2() { return &____fileSource_2; }
	inline void set__fileSource_2(Il2CppObject * value)
	{
		____fileSource_2 = value;
		Il2CppCodeGenWriteBarrier(&____fileSource_2, value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AbstractTileFactory_t1211905786, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of__progress_4() { return static_cast<int32_t>(offsetof(AbstractTileFactory_t1211905786, ____progress_4)); }
	inline int32_t get__progress_4() const { return ____progress_4; }
	inline int32_t* get_address_of__progress_4() { return &____progress_4; }
	inline void set__progress_4(int32_t value)
	{
		____progress_4 = value;
	}

	inline static int32_t get_offset_of_OnFactoryStateChanged_5() { return static_cast<int32_t>(offsetof(AbstractTileFactory_t1211905786, ___OnFactoryStateChanged_5)); }
	inline Action_1_t1013705168 * get_OnFactoryStateChanged_5() const { return ___OnFactoryStateChanged_5; }
	inline Action_1_t1013705168 ** get_address_of_OnFactoryStateChanged_5() { return &___OnFactoryStateChanged_5; }
	inline void set_OnFactoryStateChanged_5(Action_1_t1013705168 * value)
	{
		___OnFactoryStateChanged_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnFactoryStateChanged_5, value);
	}
};

struct AbstractTileFactory_t1211905786_StaticFields
{
public:
	// System.Action`1<Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory> Mapbox.Unity.MeshGeneration.Factories.AbstractTileFactory::<>f__am$cache0
	Action_1_t1013705168 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(AbstractTileFactory_t1211905786_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t1013705168 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t1013705168 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t1013705168 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
