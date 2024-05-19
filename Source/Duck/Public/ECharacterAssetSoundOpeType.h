#pragma once
#include "Engine.h"
#include "ECharacterAssetSoundOpeType.generated.h"

UENUM()
enum class ECharacterAssetSoundOpeType : uint8 {
    PLAYCUE,
    STOPCUE,
    VOLUMECONTROL,
    PITCHCONTROL,
    AISACCONTROL,
};

