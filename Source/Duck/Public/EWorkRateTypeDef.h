#pragma once
#include "Engine.h"
#include "EWorkRateTypeDef.generated.h"

UENUM()
enum class EWorkRateTypeDef : uint8 {
    WR_SYSTEM,
    WR_GAME,
    WR_STAGE,
    WR_UI,
    WR_PLAYER,
    WR_UI_ALWAYS_MOVE,
};

