#pragma once
#include "Engine.h"
#include "ECollectSoundRetType.generated.h"

UENUM()
enum class ECollectSoundRetType : uint8 {
    VALID,
    INVALID,
    NO_STORY_CLEAR,
    DLC_VOICE,
};

