#pragma once
#include "Engine.h"
#include "ECharacterAssetFacialType.generated.h"

UENUM()
enum class ECharacterAssetFacialType : uint8 {
    FACIAL_MOTION,
    EYE_UV_OFFSET,
    SOUND_FACIAL,
};

