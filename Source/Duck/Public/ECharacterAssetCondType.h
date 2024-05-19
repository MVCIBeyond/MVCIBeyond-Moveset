#pragma once
#include "Engine.h"
#include "ECharacterAssetCondType.generated.h"

UENUM()
enum class ECharacterAssetCondType : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

