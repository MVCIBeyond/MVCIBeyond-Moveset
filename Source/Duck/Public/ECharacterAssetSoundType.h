#pragma once
#include "Engine.h"
#include "ECharacterAssetSoundType.generated.h"

UENUM()
enum class ECharacterAssetSoundType : uint8 {
    SYSTEM,
    COMMON,
    CHARA_SE,
    CHARA_VOICE,
    FOOT,
};

