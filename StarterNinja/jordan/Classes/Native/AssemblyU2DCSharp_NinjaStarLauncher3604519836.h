#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// NinjaStarController
struct NinjaStarController_t2290409624;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NinjaStarLauncher
struct  NinjaStarLauncher_t3604519836  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject NinjaStarLauncher::ninja
	GameObject_t3674682005 * ___ninja_2;
	// NinjaStarController NinjaStarLauncher::ninjaStar
	NinjaStarController_t2290409624 * ___ninjaStar_3;
	// UnityEngine.AudioSource NinjaStarLauncher::whooshSound
	AudioSource_t1740077639 * ___whooshSound_4;
	// GameController NinjaStarLauncher::_gameController
	GameController_t2782302542 * ____gameController_5;
	// UnityEngine.Vector3 NinjaStarLauncher::_shooterOffset
	Vector3_t4282066566  ____shooterOffset_6;

public:
	inline static int32_t get_offset_of_ninja_2() { return static_cast<int32_t>(offsetof(NinjaStarLauncher_t3604519836, ___ninja_2)); }
	inline GameObject_t3674682005 * get_ninja_2() const { return ___ninja_2; }
	inline GameObject_t3674682005 ** get_address_of_ninja_2() { return &___ninja_2; }
	inline void set_ninja_2(GameObject_t3674682005 * value)
	{
		___ninja_2 = value;
		Il2CppCodeGenWriteBarrier(&___ninja_2, value);
	}

	inline static int32_t get_offset_of_ninjaStar_3() { return static_cast<int32_t>(offsetof(NinjaStarLauncher_t3604519836, ___ninjaStar_3)); }
	inline NinjaStarController_t2290409624 * get_ninjaStar_3() const { return ___ninjaStar_3; }
	inline NinjaStarController_t2290409624 ** get_address_of_ninjaStar_3() { return &___ninjaStar_3; }
	inline void set_ninjaStar_3(NinjaStarController_t2290409624 * value)
	{
		___ninjaStar_3 = value;
		Il2CppCodeGenWriteBarrier(&___ninjaStar_3, value);
	}

	inline static int32_t get_offset_of_whooshSound_4() { return static_cast<int32_t>(offsetof(NinjaStarLauncher_t3604519836, ___whooshSound_4)); }
	inline AudioSource_t1740077639 * get_whooshSound_4() const { return ___whooshSound_4; }
	inline AudioSource_t1740077639 ** get_address_of_whooshSound_4() { return &___whooshSound_4; }
	inline void set_whooshSound_4(AudioSource_t1740077639 * value)
	{
		___whooshSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___whooshSound_4, value);
	}

	inline static int32_t get_offset_of__gameController_5() { return static_cast<int32_t>(offsetof(NinjaStarLauncher_t3604519836, ____gameController_5)); }
	inline GameController_t2782302542 * get__gameController_5() const { return ____gameController_5; }
	inline GameController_t2782302542 ** get_address_of__gameController_5() { return &____gameController_5; }
	inline void set__gameController_5(GameController_t2782302542 * value)
	{
		____gameController_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_5, value);
	}

	inline static int32_t get_offset_of__shooterOffset_6() { return static_cast<int32_t>(offsetof(NinjaStarLauncher_t3604519836, ____shooterOffset_6)); }
	inline Vector3_t4282066566  get__shooterOffset_6() const { return ____shooterOffset_6; }
	inline Vector3_t4282066566 * get_address_of__shooterOffset_6() { return &____shooterOffset_6; }
	inline void set__shooterOffset_6(Vector3_t4282066566  value)
	{
		____shooterOffset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
