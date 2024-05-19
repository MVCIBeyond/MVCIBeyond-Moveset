#pragma once
#include "Engine.h"
#include "ECharacterAssetCompCond.generated.h"

UENUM()
enum class ECharacterAssetCompCond : uint8 {
    EQ,
    NE,
    LT,
    LE,
    GT,
    GE,
};

