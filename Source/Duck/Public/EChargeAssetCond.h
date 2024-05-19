#pragma once
#include "Engine.h"
#include "EChargeAssetCond.generated.h"

UENUM()
enum class EChargeAssetCond : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

