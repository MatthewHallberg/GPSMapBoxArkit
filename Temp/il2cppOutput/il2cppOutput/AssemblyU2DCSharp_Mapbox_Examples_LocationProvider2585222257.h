#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.Transform
struct Transform_t3275118058;
// Mapbox.Examples.LocationProvider.PokemonFactory
struct PokemonFactory_t711136535;
// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_t1382569190;
// Mapbox.Unity.Location.ILocationProvider
struct ILocationProvider_t1903064329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.LocationProvider.PositionWithLocationProvider
struct  PositionWithLocationProvider_t2585222257  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation Mapbox.Examples.LocationProvider.PositionWithLocationProvider::trainerAnim
	Animation_t2068071072 * ___trainerAnim_2;
	// UnityEngine.Transform Mapbox.Examples.LocationProvider.PositionWithLocationProvider::trainer
	Transform_t3275118058 * ___trainer_3;
	// Mapbox.Examples.LocationProvider.PokemonFactory Mapbox.Examples.LocationProvider.PositionWithLocationProvider::pokemonFactory
	PokemonFactory_t711136535 * ___pokemonFactory_4;
	// System.Boolean Mapbox.Examples.LocationProvider.PositionWithLocationProvider::pokemonGenerated
	bool ___pokemonGenerated_5;
	// Mapbox.Unity.Map.AbstractMap Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_map
	AbstractMap_t1382569190 * ____map_6;
	// System.Single Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_positionFollowFactor
	float ____positionFollowFactor_7;
	// System.Boolean Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_useTransformLocationProvider
	bool ____useTransformLocationProvider_8;
	// System.Boolean Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_isInitialized
	bool ____isInitialized_9;
	// Mapbox.Unity.Location.ILocationProvider Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_locationProvider
	Il2CppObject * ____locationProvider_10;
	// UnityEngine.Vector3 Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_targetPosition
	Vector3_t2243707580  ____targetPosition_11;

public:
	inline static int32_t get_offset_of_trainerAnim_2() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ___trainerAnim_2)); }
	inline Animation_t2068071072 * get_trainerAnim_2() const { return ___trainerAnim_2; }
	inline Animation_t2068071072 ** get_address_of_trainerAnim_2() { return &___trainerAnim_2; }
	inline void set_trainerAnim_2(Animation_t2068071072 * value)
	{
		___trainerAnim_2 = value;
		Il2CppCodeGenWriteBarrier(&___trainerAnim_2, value);
	}

	inline static int32_t get_offset_of_trainer_3() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ___trainer_3)); }
	inline Transform_t3275118058 * get_trainer_3() const { return ___trainer_3; }
	inline Transform_t3275118058 ** get_address_of_trainer_3() { return &___trainer_3; }
	inline void set_trainer_3(Transform_t3275118058 * value)
	{
		___trainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___trainer_3, value);
	}

	inline static int32_t get_offset_of_pokemonFactory_4() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ___pokemonFactory_4)); }
	inline PokemonFactory_t711136535 * get_pokemonFactory_4() const { return ___pokemonFactory_4; }
	inline PokemonFactory_t711136535 ** get_address_of_pokemonFactory_4() { return &___pokemonFactory_4; }
	inline void set_pokemonFactory_4(PokemonFactory_t711136535 * value)
	{
		___pokemonFactory_4 = value;
		Il2CppCodeGenWriteBarrier(&___pokemonFactory_4, value);
	}

	inline static int32_t get_offset_of_pokemonGenerated_5() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ___pokemonGenerated_5)); }
	inline bool get_pokemonGenerated_5() const { return ___pokemonGenerated_5; }
	inline bool* get_address_of_pokemonGenerated_5() { return &___pokemonGenerated_5; }
	inline void set_pokemonGenerated_5(bool value)
	{
		___pokemonGenerated_5 = value;
	}

	inline static int32_t get_offset_of__map_6() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____map_6)); }
	inline AbstractMap_t1382569190 * get__map_6() const { return ____map_6; }
	inline AbstractMap_t1382569190 ** get_address_of__map_6() { return &____map_6; }
	inline void set__map_6(AbstractMap_t1382569190 * value)
	{
		____map_6 = value;
		Il2CppCodeGenWriteBarrier(&____map_6, value);
	}

	inline static int32_t get_offset_of__positionFollowFactor_7() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____positionFollowFactor_7)); }
	inline float get__positionFollowFactor_7() const { return ____positionFollowFactor_7; }
	inline float* get_address_of__positionFollowFactor_7() { return &____positionFollowFactor_7; }
	inline void set__positionFollowFactor_7(float value)
	{
		____positionFollowFactor_7 = value;
	}

	inline static int32_t get_offset_of__useTransformLocationProvider_8() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____useTransformLocationProvider_8)); }
	inline bool get__useTransformLocationProvider_8() const { return ____useTransformLocationProvider_8; }
	inline bool* get_address_of__useTransformLocationProvider_8() { return &____useTransformLocationProvider_8; }
	inline void set__useTransformLocationProvider_8(bool value)
	{
		____useTransformLocationProvider_8 = value;
	}

	inline static int32_t get_offset_of__isInitialized_9() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____isInitialized_9)); }
	inline bool get__isInitialized_9() const { return ____isInitialized_9; }
	inline bool* get_address_of__isInitialized_9() { return &____isInitialized_9; }
	inline void set__isInitialized_9(bool value)
	{
		____isInitialized_9 = value;
	}

	inline static int32_t get_offset_of__locationProvider_10() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____locationProvider_10)); }
	inline Il2CppObject * get__locationProvider_10() const { return ____locationProvider_10; }
	inline Il2CppObject ** get_address_of__locationProvider_10() { return &____locationProvider_10; }
	inline void set__locationProvider_10(Il2CppObject * value)
	{
		____locationProvider_10 = value;
		Il2CppCodeGenWriteBarrier(&____locationProvider_10, value);
	}

	inline static int32_t get_offset_of__targetPosition_11() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____targetPosition_11)); }
	inline Vector3_t2243707580  get__targetPosition_11() const { return ____targetPosition_11; }
	inline Vector3_t2243707580 * get_address_of__targetPosition_11() { return &____targetPosition_11; }
	inline void set__targetPosition_11(Vector3_t2243707580  value)
	{
		____targetPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
