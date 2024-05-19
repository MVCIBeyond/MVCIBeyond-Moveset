#pragma once
#include "Engine.h"
#include "ECommandAssetCond.generated.h"

UENUM()
enum class ECommandAssetCond : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

