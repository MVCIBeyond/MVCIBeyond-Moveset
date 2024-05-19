#pragma once
#include "Engine.h"
#include "ECharacterAssetActionGroup.generated.h"

UENUM()
enum class ECharacterAssetActionGroup : uint8 {
    BASIC,
    GUARD,
    DAMAGE,
    NORMAL_ATTACK,
    CATCH,
    SPECIAL,
    HYPER,
    PERFORM,
    DEMO,
    INTERRUPT,
    SHOT,
    DEBUG,
    ALL,
};

