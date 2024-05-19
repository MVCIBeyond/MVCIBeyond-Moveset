#pragma once
#include "Engine.h"
#include "EVolumeType.generated.h"

UENUM()
enum class EVolumeType : uint8 {
    BGM,
    SE,
    VOICE,
    ChatSpeaker,
    StoryMovie,
    VolumeTypeNum,
};

