#pragma once
#include "Engine.h"
#include "ECameraFlag.generated.h"

UENUM()
enum class ECameraFlag : uint8 {
    DEF,
    FIX,
    DAMAGE,
    NO_TOUCH,
    FIX_BATTLE_CAM,
};

