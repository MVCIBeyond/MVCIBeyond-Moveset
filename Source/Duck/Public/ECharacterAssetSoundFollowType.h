#pragma once
#include "Engine.h"
#include "ECharacterAssetSoundFollowType.generated.h"

UENUM()
enum class ECharacterAssetSoundFollowType : uint8 {
    NON_FOLLOW,
    FOLLOW_PARENT,
    FOLLOW_REFER_GIMMICK,
};

