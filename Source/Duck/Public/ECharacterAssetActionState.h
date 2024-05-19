#pragma once
#include "Engine.h"
#include "ECharacterAssetActionState.generated.h"

UENUM()
enum class ECharacterAssetActionState : uint8 {
    STAND,
    CROUCH,
    AIR,
    DOWN,
    BOUND,
};

