#pragma once
#include "Engine.h"
#include "ECharacterAssetSoundGroupID.generated.h"

UENUM()
enum class ECharacterAssetSoundGroupID : uint8 {
    DEFAULT,
    CHANGESTATE,
    CHANGEACTION,
    STUN,
};

