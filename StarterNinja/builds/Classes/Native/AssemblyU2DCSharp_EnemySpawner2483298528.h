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
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2483298528  : public MonoBehaviour_t667441552
{
public:
	// System.Single EnemySpawner::maxZSpawn
	float ___maxZSpawn_2;
	// System.Single EnemySpawner::minZSpawn
	float ___minZSpawn_3;
	// System.Single EnemySpawner::xSpawn
	float ___xSpawn_4;
	// System.Single EnemySpawner::launchRangeMinTime
	float ___launchRangeMinTime_5;
	// System.Single EnemySpawner::launchRangeMaxTime
	float ___launchRangeMaxTime_6;
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t3674682005 * ___enemyPrefab_7;
	// System.Single EnemySpawner::_nextLaunchTime
	float ____nextLaunchTime_8;
	// System.Single EnemySpawner::_ySpawn
	float ____ySpawn_9;
	// GameController EnemySpawner::_gameController
	GameController_t2782302542 * ____gameController_10;
	// UnityEngine.Quaternion EnemySpawner::_launchRotation
	Quaternion_t1553702882  ____launchRotation_11;

public:
	inline static int32_t get_offset_of_maxZSpawn_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___maxZSpawn_2)); }
	inline float get_maxZSpawn_2() const { return ___maxZSpawn_2; }
	inline float* get_address_of_maxZSpawn_2() { return &___maxZSpawn_2; }
	inline void set_maxZSpawn_2(float value)
	{
		___maxZSpawn_2 = value;
	}

	inline static int32_t get_offset_of_minZSpawn_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___minZSpawn_3)); }
	inline float get_minZSpawn_3() const { return ___minZSpawn_3; }
	inline float* get_address_of_minZSpawn_3() { return &___minZSpawn_3; }
	inline void set_minZSpawn_3(float value)
	{
		___minZSpawn_3 = value;
	}

	inline static int32_t get_offset_of_xSpawn_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___xSpawn_4)); }
	inline float get_xSpawn_4() const { return ___xSpawn_4; }
	inline float* get_address_of_xSpawn_4() { return &___xSpawn_4; }
	inline void set_xSpawn_4(float value)
	{
		___xSpawn_4 = value;
	}

	inline static int32_t get_offset_of_launchRangeMinTime_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___launchRangeMinTime_5)); }
	inline float get_launchRangeMinTime_5() const { return ___launchRangeMinTime_5; }
	inline float* get_address_of_launchRangeMinTime_5() { return &___launchRangeMinTime_5; }
	inline void set_launchRangeMinTime_5(float value)
	{
		___launchRangeMinTime_5 = value;
	}

	inline static int32_t get_offset_of_launchRangeMaxTime_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___launchRangeMaxTime_6)); }
	inline float get_launchRangeMaxTime_6() const { return ___launchRangeMaxTime_6; }
	inline float* get_address_of_launchRangeMaxTime_6() { return &___launchRangeMaxTime_6; }
	inline void set_launchRangeMaxTime_6(float value)
	{
		___launchRangeMaxTime_6 = value;
	}

	inline static int32_t get_offset_of_enemyPrefab_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___enemyPrefab_7)); }
	inline GameObject_t3674682005 * get_enemyPrefab_7() const { return ___enemyPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of_enemyPrefab_7() { return &___enemyPrefab_7; }
	inline void set_enemyPrefab_7(GameObject_t3674682005 * value)
	{
		___enemyPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_7, value);
	}

	inline static int32_t get_offset_of__nextLaunchTime_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ____nextLaunchTime_8)); }
	inline float get__nextLaunchTime_8() const { return ____nextLaunchTime_8; }
	inline float* get_address_of__nextLaunchTime_8() { return &____nextLaunchTime_8; }
	inline void set__nextLaunchTime_8(float value)
	{
		____nextLaunchTime_8 = value;
	}

	inline static int32_t get_offset_of__ySpawn_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ____ySpawn_9)); }
	inline float get__ySpawn_9() const { return ____ySpawn_9; }
	inline float* get_address_of__ySpawn_9() { return &____ySpawn_9; }
	inline void set__ySpawn_9(float value)
	{
		____ySpawn_9 = value;
	}

	inline static int32_t get_offset_of__gameController_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ____gameController_10)); }
	inline GameController_t2782302542 * get__gameController_10() const { return ____gameController_10; }
	inline GameController_t2782302542 ** get_address_of__gameController_10() { return &____gameController_10; }
	inline void set__gameController_10(GameController_t2782302542 * value)
	{
		____gameController_10 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_10, value);
	}

	inline static int32_t get_offset_of__launchRotation_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ____launchRotation_11)); }
	inline Quaternion_t1553702882  get__launchRotation_11() const { return ____launchRotation_11; }
	inline Quaternion_t1553702882 * get_address_of__launchRotation_11() { return &____launchRotation_11; }
	inline void set__launchRotation_11(Quaternion_t1553702882  value)
	{
		____launchRotation_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
