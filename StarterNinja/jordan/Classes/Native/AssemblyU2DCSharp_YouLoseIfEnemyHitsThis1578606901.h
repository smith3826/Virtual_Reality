#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YouLoseIfEnemyHitsThis
struct  YouLoseIfEnemyHitsThis_t1578606901  : public MonoBehaviour_t667441552
{
public:
	// GameController YouLoseIfEnemyHitsThis::gameController
	GameController_t2782302542 * ___gameController_2;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(YouLoseIfEnemyHitsThis_t1578606901, ___gameController_2)); }
	inline GameController_t2782302542 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t2782302542 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t2782302542 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
