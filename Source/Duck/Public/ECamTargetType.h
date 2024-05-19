#pragma once
#include "Engine.h"
#include "ECamTargetType.generated.h"

UENUM()
enum class ECamTargetType : uint8 {
    NONE,
    OWNER,
    OPPONENT,
    WORLD,
    BATTLE_CAMERA,
};

