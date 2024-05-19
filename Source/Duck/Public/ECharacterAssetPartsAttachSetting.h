#pragma once
#include "Engine.h"
#include "ECharacterAssetPartsAttachSetting.generated.h"

UENUM()
enum class ECharacterAssetPartsAttachSetting : uint8 {
    BOTH,
    POS_ONLY,
    ROT_ONLY,
};

