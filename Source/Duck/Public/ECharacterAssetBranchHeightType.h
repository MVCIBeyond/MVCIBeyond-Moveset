#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchHeightType.generated.h"

UENUM()
enum class ECharacterAssetBranchHeightType : uint8 {
    OWNER_IMMIDIATE,
    TARGET_IMMIDIATE,
    TARGET_OFFSET,
};

