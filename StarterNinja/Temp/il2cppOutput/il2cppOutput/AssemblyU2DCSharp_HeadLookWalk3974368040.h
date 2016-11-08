#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t1618060635;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeadLookWalk
struct  HeadLookWalk_t3974368040  : public MonoBehaviour_t667441552
{
public:
	// System.Single HeadLookWalk::velocity
	float ___velocity_2;
	// System.Boolean HeadLookWalk::isWalking
	bool ___isWalking_3;
	// UnityEngine.CharacterController HeadLookWalk::controller
	CharacterController_t1618060635 * ___controller_4;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___velocity_2)); }
	inline float get_velocity_2() const { return ___velocity_2; }
	inline float* get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(float value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_isWalking_3() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___isWalking_3)); }
	inline bool get_isWalking_3() const { return ___isWalking_3; }
	inline bool* get_address_of_isWalking_3() { return &___isWalking_3; }
	inline void set_isWalking_3(bool value)
	{
		___isWalking_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___controller_4)); }
	inline CharacterController_t1618060635 * get_controller_4() const { return ___controller_4; }
	inline CharacterController_t1618060635 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_t1618060635 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
