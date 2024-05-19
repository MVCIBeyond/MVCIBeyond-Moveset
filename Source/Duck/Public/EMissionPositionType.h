#pragma once
#include "Engine.h"
#include "EMissionPositionType.generated.h"

UENUM()
enum class EMissionPositionType : uint8 {
    NONE,
    CENTER_ONLY,
    ENEMY_EOS_ONLY,
    PLAYER_EOS_ONLY,
};

