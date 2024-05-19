#pragma once
#include "Engine.h"
#include "ECharacterAssetSoundAisacType.generated.h"

UENUM()
enum class ECharacterAssetSoundAisacType : uint8 {
    PAN,
    PITCH,
    VOLUME,
    PAN3D,
    EQUALIZER,
    REVERB,
    PAN_HUD,
};

