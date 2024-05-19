#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchKeyCheckType.generated.h"

UENUM()
enum class ECharacterAssetBranchKeyCheckType : uint8 {
    DIRECT_OFF,
    DIRECT,
    PRESS,
    RELEASE,
    DIRECT_EXCLUSIVE,
    PRESS_EXCLUSIVE,
    RELEASE_EXCLUSIVE,
    UNKNOWN,
};

