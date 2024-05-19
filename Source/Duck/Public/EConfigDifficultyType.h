#pragma once
#include "Engine.h"
#include "EConfigDifficultyType.generated.h"

UENUM()
enum class EConfigDifficultyType : uint8 {
    VERYEASY,
    EASY,
    NORMAL,
    HARD,
    VERYHARD,
};

