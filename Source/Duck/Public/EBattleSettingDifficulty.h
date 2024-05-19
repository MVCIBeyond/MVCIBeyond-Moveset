#pragma once
#include "Engine.h"
#include "EBattleSettingDifficulty.generated.h"

UENUM()
enum class EBattleSettingDifficulty : uint8 {
    DIFFICULTY_VERY_EASY,
    DIFFICULTY_EASY,
    DIFFICULTY_NORMAL,
    DIFFICULTY_HARD,
    DIFFICULTY_VERY_HARD,
};

