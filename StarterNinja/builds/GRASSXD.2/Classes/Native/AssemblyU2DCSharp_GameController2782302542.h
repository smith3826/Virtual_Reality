#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GameController::isGameOver
	bool ___isGameOver_2;
	// UnityEngine.UI.Text GameController::scoreTxt
	Text_t9039225 * ___scoreTxt_3;
	// UnityEngine.UI.Text GameController::gameOverTxt
	Text_t9039225 * ___gameOverTxt_4;
	// UnityEngine.Canvas GameController::gameOverCanvas
	Canvas_t2727140764 * ___gameOverCanvas_5;
	// UnityEngine.Canvas GameController::VRGameOverCanvas
	Canvas_t2727140764 * ___VRGameOverCanvas_6;
	// UnityEngine.UI.Text GameController::VRGameOverTxt
	Text_t9039225 * ___VRGameOverTxt_7;
	// UnityEngine.UI.Text GameController::VRScoreTxt
	Text_t9039225 * ___VRScoreTxt_8;
	// System.Int32 GameController::_currScore
	int32_t ____currScore_9;
	// System.Int32 GameController::_scoreToWin
	int32_t ____scoreToWin_10;
	// System.Boolean GameController::_didIWin
	bool ____didIWin_11;

public:
	inline static int32_t get_offset_of_isGameOver_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___isGameOver_2)); }
	inline bool get_isGameOver_2() const { return ___isGameOver_2; }
	inline bool* get_address_of_isGameOver_2() { return &___isGameOver_2; }
	inline void set_isGameOver_2(bool value)
	{
		___isGameOver_2 = value;
	}

	inline static int32_t get_offset_of_scoreTxt_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreTxt_3)); }
	inline Text_t9039225 * get_scoreTxt_3() const { return ___scoreTxt_3; }
	inline Text_t9039225 ** get_address_of_scoreTxt_3() { return &___scoreTxt_3; }
	inline void set_scoreTxt_3(Text_t9039225 * value)
	{
		___scoreTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTxt_3, value);
	}

	inline static int32_t get_offset_of_gameOverTxt_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverTxt_4)); }
	inline Text_t9039225 * get_gameOverTxt_4() const { return ___gameOverTxt_4; }
	inline Text_t9039225 ** get_address_of_gameOverTxt_4() { return &___gameOverTxt_4; }
	inline void set_gameOverTxt_4(Text_t9039225 * value)
	{
		___gameOverTxt_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverTxt_4, value);
	}

	inline static int32_t get_offset_of_gameOverCanvas_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverCanvas_5)); }
	inline Canvas_t2727140764 * get_gameOverCanvas_5() const { return ___gameOverCanvas_5; }
	inline Canvas_t2727140764 ** get_address_of_gameOverCanvas_5() { return &___gameOverCanvas_5; }
	inline void set_gameOverCanvas_5(Canvas_t2727140764 * value)
	{
		___gameOverCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverCanvas_5, value);
	}

	inline static int32_t get_offset_of_VRGameOverCanvas_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___VRGameOverCanvas_6)); }
	inline Canvas_t2727140764 * get_VRGameOverCanvas_6() const { return ___VRGameOverCanvas_6; }
	inline Canvas_t2727140764 ** get_address_of_VRGameOverCanvas_6() { return &___VRGameOverCanvas_6; }
	inline void set_VRGameOverCanvas_6(Canvas_t2727140764 * value)
	{
		___VRGameOverCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___VRGameOverCanvas_6, value);
	}

	inline static int32_t get_offset_of_VRGameOverTxt_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___VRGameOverTxt_7)); }
	inline Text_t9039225 * get_VRGameOverTxt_7() const { return ___VRGameOverTxt_7; }
	inline Text_t9039225 ** get_address_of_VRGameOverTxt_7() { return &___VRGameOverTxt_7; }
	inline void set_VRGameOverTxt_7(Text_t9039225 * value)
	{
		___VRGameOverTxt_7 = value;
		Il2CppCodeGenWriteBarrier(&___VRGameOverTxt_7, value);
	}

	inline static int32_t get_offset_of_VRScoreTxt_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___VRScoreTxt_8)); }
	inline Text_t9039225 * get_VRScoreTxt_8() const { return ___VRScoreTxt_8; }
	inline Text_t9039225 ** get_address_of_VRScoreTxt_8() { return &___VRScoreTxt_8; }
	inline void set_VRScoreTxt_8(Text_t9039225 * value)
	{
		___VRScoreTxt_8 = value;
		Il2CppCodeGenWriteBarrier(&___VRScoreTxt_8, value);
	}

	inline static int32_t get_offset_of__currScore_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ____currScore_9)); }
	inline int32_t get__currScore_9() const { return ____currScore_9; }
	inline int32_t* get_address_of__currScore_9() { return &____currScore_9; }
	inline void set__currScore_9(int32_t value)
	{
		____currScore_9 = value;
	}

	inline static int32_t get_offset_of__scoreToWin_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ____scoreToWin_10)); }
	inline int32_t get__scoreToWin_10() const { return ____scoreToWin_10; }
	inline int32_t* get_address_of__scoreToWin_10() { return &____scoreToWin_10; }
	inline void set__scoreToWin_10(int32_t value)
	{
		____scoreToWin_10 = value;
	}

	inline static int32_t get_offset_of__didIWin_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ____didIWin_11)); }
	inline bool get__didIWin_11() const { return ____didIWin_11; }
	inline bool* get_address_of__didIWin_11() { return &____didIWin_11; }
	inline void set__didIWin_11(bool value)
	{
		____didIWin_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
