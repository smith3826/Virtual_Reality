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

// HeadGesture
struct  HeadGesture_t1643017001  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean HeadGesture::isFacingDown
	bool ___isFacingDown_2;
	// System.Boolean HeadGesture::isMovingDown
	bool ___isMovingDown_3;
	// System.Single HeadGesture::sweepRate
	float ___sweepRate_4;
	// System.Single HeadGesture::previousCameraAngle
	float ___previousCameraAngle_5;

public:
	inline static int32_t get_offset_of_isFacingDown_2() { return static_cast<int32_t>(offsetof(HeadGesture_t1643017001, ___isFacingDown_2)); }
	inline bool get_isFacingDown_2() const { return ___isFacingDown_2; }
	inline bool* get_address_of_isFacingDown_2() { return &___isFacingDown_2; }
	inline void set_isFacingDown_2(bool value)
	{
		___isFacingDown_2 = value;
	}

	inline static int32_t get_offset_of_isMovingDown_3() { return static_cast<int32_t>(offsetof(HeadGesture_t1643017001, ___isMovingDown_3)); }
	inline bool get_isMovingDown_3() const { return ___isMovingDown_3; }
	inline bool* get_address_of_isMovingDown_3() { return &___isMovingDown_3; }
	inline void set_isMovingDown_3(bool value)
	{
		___isMovingDown_3 = value;
	}

	inline static int32_t get_offset_of_sweepRate_4() { return static_cast<int32_t>(offsetof(HeadGesture_t1643017001, ___sweepRate_4)); }
	inline float get_sweepRate_4() const { return ___sweepRate_4; }
	inline float* get_address_of_sweepRate_4() { return &___sweepRate_4; }
	inline void set_sweepRate_4(float value)
	{
		___sweepRate_4 = value;
	}

	inline static int32_t get_offset_of_previousCameraAngle_5() { return static_cast<int32_t>(offsetof(HeadGesture_t1643017001, ___previousCameraAngle_5)); }
	inline float get_previousCameraAngle_5() const { return ___previousCameraAngle_5; }
	inline float* get_address_of_previousCameraAngle_5() { return &___previousCameraAngle_5; }
	inline void set_previousCameraAngle_5(float value)
	{
		___previousCameraAngle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
