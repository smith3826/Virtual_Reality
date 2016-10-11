#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NinjaStarController
struct  NinjaStarController_t2290409624  : public MonoBehaviour_t667441552
{
public:
	// System.Single NinjaStarController::starSpeed
	float ___starSpeed_2;
	// System.Single NinjaStarController::rotationSpeed
	float ___rotationSpeed_3;

public:
	inline static int32_t get_offset_of_starSpeed_2() { return static_cast<int32_t>(offsetof(NinjaStarController_t2290409624, ___starSpeed_2)); }
	inline float get_starSpeed_2() const { return ___starSpeed_2; }
	inline float* get_address_of_starSpeed_2() { return &___starSpeed_2; }
	inline void set_starSpeed_2(float value)
	{
		___starSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(NinjaStarController_t2290409624, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
