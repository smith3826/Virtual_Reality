#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeadLookWalk
struct HeadLookWalk_t3974368040;
// HeadGesture
struct HeadGesture_t1643017001;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureWalk
struct  GestureWalk_t1319583378  : public MonoBehaviour_t667441552
{
public:
	// HeadLookWalk GestureWalk::lookWalk
	HeadLookWalk_t3974368040 * ___lookWalk_2;
	// HeadGesture GestureWalk::gesture
	HeadGesture_t1643017001 * ___gesture_3;

public:
	inline static int32_t get_offset_of_lookWalk_2() { return static_cast<int32_t>(offsetof(GestureWalk_t1319583378, ___lookWalk_2)); }
	inline HeadLookWalk_t3974368040 * get_lookWalk_2() const { return ___lookWalk_2; }
	inline HeadLookWalk_t3974368040 ** get_address_of_lookWalk_2() { return &___lookWalk_2; }
	inline void set_lookWalk_2(HeadLookWalk_t3974368040 * value)
	{
		___lookWalk_2 = value;
		Il2CppCodeGenWriteBarrier(&___lookWalk_2, value);
	}

	inline static int32_t get_offset_of_gesture_3() { return static_cast<int32_t>(offsetof(GestureWalk_t1319583378, ___gesture_3)); }
	inline HeadGesture_t1643017001 * get_gesture_3() const { return ___gesture_3; }
	inline HeadGesture_t1643017001 ** get_address_of_gesture_3() { return &___gesture_3; }
	inline void set_gesture_3(HeadGesture_t1643017001 * value)
	{
		___gesture_3 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
