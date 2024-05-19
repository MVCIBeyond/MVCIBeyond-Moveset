#pragma once
#include "Engine.h"
#include "ECharacterAssetRangeList.generated.h"

UENUM()
enum class ECharacterAssetRangeList : uint8 {
    Nearest,
    Near,
    Middle,
    Far,
    Farthest,
};

