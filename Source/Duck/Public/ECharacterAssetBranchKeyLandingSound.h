#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchKeyLandingSound.generated.h"

UENUM()
enum class ECharacterAssetBranchKeyLandingSound : uint8 {
    NOT_SPECIFIED,
    SHOT,
    BULLET,
    PLAYER,
    NO_SOUND,
};

