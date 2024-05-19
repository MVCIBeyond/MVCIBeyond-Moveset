#pragma once
#include "Engine.h"
#include "ECharacterAssetPhysicsOverride.generated.h"

UENUM()
enum class ECharacterAssetPhysicsOverride : uint8 {
    DEFAULT,
    FORCE_APPLY,
    FORCE_NON_APPLY,
};

