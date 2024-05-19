#pragma once
#include "Engine.h"
#include "ECharacterAssetRangeCond.generated.h"

UENUM()
enum class ECharacterAssetRangeCond : uint8 {
    NONE,
    X_GE,
    X_LE,
    Y_GE,
    Y_LE,
    Z_GE,
    Z_LE,
};

