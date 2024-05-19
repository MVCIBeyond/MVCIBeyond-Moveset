#pragma once
#include "Engine.h"
#include "ECharacterAssetMergeType.generated.h"

UENUM()
enum class ECharacterAssetMergeType : uint8 {
    PREVIOUS,
    NEXT,
    STARTSTATE,
    ENDSTATE,
    SMOOTH,
};

