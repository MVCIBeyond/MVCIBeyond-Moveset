#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchSideType.generated.h"

UENUM()
enum class ECharacterAssetBranchSideType : uint8 {
    UNKNOWN,
    THIS_SIDE,
    OTHER_SIDE,
    LEFT_SIDE,
    RIGHT_SIDE,
};

