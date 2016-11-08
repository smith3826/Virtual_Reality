#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardSwapper
struct  CardboardSwapper_t2012328980  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] CardboardSwapper::cardboardObjects
	GameObjectU5BU5D_t2662109048* ___cardboardObjects_2;
	// UnityEngine.GameObject[] CardboardSwapper::monoObjects
	GameObjectU5BU5D_t2662109048* ___monoObjects_3;

public:
	inline static int32_t get_offset_of_cardboardObjects_2() { return static_cast<int32_t>(offsetof(CardboardSwapper_t2012328980, ___cardboardObjects_2)); }
	inline GameObjectU5BU5D_t2662109048* get_cardboardObjects_2() const { return ___cardboardObjects_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_cardboardObjects_2() { return &___cardboardObjects_2; }
	inline void set_cardboardObjects_2(GameObjectU5BU5D_t2662109048* value)
	{
		___cardboardObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___cardboardObjects_2, value);
	}

	inline static int32_t get_offset_of_monoObjects_3() { return static_cast<int32_t>(offsetof(CardboardSwapper_t2012328980, ___monoObjects_3)); }
	inline GameObjectU5BU5D_t2662109048* get_monoObjects_3() const { return ___monoObjects_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_monoObjects_3() { return &___monoObjects_3; }
	inline void set_monoObjects_3(GameObjectU5BU5D_t2662109048* value)
	{
		___monoObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___monoObjects_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
