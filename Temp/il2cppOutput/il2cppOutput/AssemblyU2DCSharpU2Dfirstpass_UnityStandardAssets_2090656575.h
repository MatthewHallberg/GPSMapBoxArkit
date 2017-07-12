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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t2090656575  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t2243707580  ___originalPosition_2;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t4030073918  ___originalRotation_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t2644239190 * ___originalStructure_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t4233889191 * ___Rigidbody_5;

public:
	inline static int32_t get_offset_of_originalPosition_2() { return static_cast<int32_t>(offsetof(ObjectResetter_t2090656575, ___originalPosition_2)); }
	inline Vector3_t2243707580  get_originalPosition_2() const { return ___originalPosition_2; }
	inline Vector3_t2243707580 * get_address_of_originalPosition_2() { return &___originalPosition_2; }
	inline void set_originalPosition_2(Vector3_t2243707580  value)
	{
		___originalPosition_2 = value;
	}

	inline static int32_t get_offset_of_originalRotation_3() { return static_cast<int32_t>(offsetof(ObjectResetter_t2090656575, ___originalRotation_3)); }
	inline Quaternion_t4030073918  get_originalRotation_3() const { return ___originalRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_originalRotation_3() { return &___originalRotation_3; }
	inline void set_originalRotation_3(Quaternion_t4030073918  value)
	{
		___originalRotation_3 = value;
	}

	inline static int32_t get_offset_of_originalStructure_4() { return static_cast<int32_t>(offsetof(ObjectResetter_t2090656575, ___originalStructure_4)); }
	inline List_1_t2644239190 * get_originalStructure_4() const { return ___originalStructure_4; }
	inline List_1_t2644239190 ** get_address_of_originalStructure_4() { return &___originalStructure_4; }
	inline void set_originalStructure_4(List_1_t2644239190 * value)
	{
		___originalStructure_4 = value;
		Il2CppCodeGenWriteBarrier(&___originalStructure_4, value);
	}

	inline static int32_t get_offset_of_Rigidbody_5() { return static_cast<int32_t>(offsetof(ObjectResetter_t2090656575, ___Rigidbody_5)); }
	inline Rigidbody_t4233889191 * get_Rigidbody_5() const { return ___Rigidbody_5; }
	inline Rigidbody_t4233889191 ** get_address_of_Rigidbody_5() { return &___Rigidbody_5; }
	inline void set_Rigidbody_5(Rigidbody_t4233889191 * value)
	{
		___Rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___Rigidbody_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
