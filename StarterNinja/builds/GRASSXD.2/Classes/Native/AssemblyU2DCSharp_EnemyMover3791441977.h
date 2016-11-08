#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_EnemyMover_EnemyState2378115487.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMover
struct  EnemyMover_t3791441977  : public MonoBehaviour_t667441552
{
public:
	// System.Single EnemyMover::speedMin
	float ___speedMin_2;
	// System.Single EnemyMover::speedMax
	float ___speedMax_3;
	// EnemyMover/EnemyState EnemyMover::_state
	int32_t ____state_4;

public:
	inline static int32_t get_offset_of_speedMin_2() { return static_cast<int32_t>(offsetof(EnemyMover_t3791441977, ___speedMin_2)); }
	inline float get_speedMin_2() const { return ___speedMin_2; }
	inline float* get_address_of_speedMin_2() { return &___speedMin_2; }
	inline void set_speedMin_2(float value)
	{
		___speedMin_2 = value;
	}

	inline static int32_t get_offset_of_speedMax_3() { return static_cast<int32_t>(offsetof(EnemyMover_t3791441977, ___speedMax_3)); }
	inline float get_speedMax_3() const { return ___speedMax_3; }
	inline float* get_address_of_speedMax_3() { return &___speedMax_3; }
	inline void set_speedMax_3(float value)
	{
		___speedMax_3 = value;
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(EnemyMover_t3791441977, ____state_4)); }
	inline int32_t get__state_4() const { return ____state_4; }
	inline int32_t* get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(int32_t value)
	{
		____state_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
