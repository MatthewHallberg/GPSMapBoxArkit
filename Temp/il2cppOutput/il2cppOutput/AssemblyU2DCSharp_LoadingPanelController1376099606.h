#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Mapbox.Unity.MeshGeneration.MapVisualizer
struct MapVisualizer_t1285568018;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingPanelController
struct  LoadingPanelController_t1376099606  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.MeshGeneration.MapVisualizer LoadingPanelController::MapVisualizer
	MapVisualizer_t1285568018 * ___MapVisualizer_2;
	// UnityEngine.GameObject LoadingPanelController::Content
	GameObject_t1756533147 * ___Content_3;

public:
	inline static int32_t get_offset_of_MapVisualizer_2() { return static_cast<int32_t>(offsetof(LoadingPanelController_t1376099606, ___MapVisualizer_2)); }
	inline MapVisualizer_t1285568018 * get_MapVisualizer_2() const { return ___MapVisualizer_2; }
	inline MapVisualizer_t1285568018 ** get_address_of_MapVisualizer_2() { return &___MapVisualizer_2; }
	inline void set_MapVisualizer_2(MapVisualizer_t1285568018 * value)
	{
		___MapVisualizer_2 = value;
		Il2CppCodeGenWriteBarrier(&___MapVisualizer_2, value);
	}

	inline static int32_t get_offset_of_Content_3() { return static_cast<int32_t>(offsetof(LoadingPanelController_t1376099606, ___Content_3)); }
	inline GameObject_t1756533147 * get_Content_3() const { return ___Content_3; }
	inline GameObject_t1756533147 ** get_address_of_Content_3() { return &___Content_3; }
	inline void set_Content_3(GameObject_t1756533147 * value)
	{
		___Content_3 = value;
		Il2CppCodeGenWriteBarrier(&___Content_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
