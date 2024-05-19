#pragma once
#include "Engine.h"
#include "EInGameRewardRetType.generated.h"

UENUM()
enum class EInGameRewardRetType : uint8 {
    INVALID,
    CLOSE,
    OPEN,
    OPEN_NOW,
};

