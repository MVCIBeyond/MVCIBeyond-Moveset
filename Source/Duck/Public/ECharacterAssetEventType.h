#pragma once
#include "Engine.h"
#include "ECharacterAssetEventType.generated.h"

UENUM()
enum class ECharacterAssetEventType : uint8 {
    OWNER,
    SYSTEM,
    CHARA,
    FIELD,
    HUD,
    CAMERA,
    SOUND,
    UNIQUE,
    SHOT,
    STORY,
};

