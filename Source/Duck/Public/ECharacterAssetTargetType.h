#pragma once
#include "Engine.h"
#include "ECharacterAssetTargetType.generated.h"

UENUM()
enum class ECharacterAssetTargetType : uint8 {
    OWNER,
    RIVAL,
    HIT_TARGET,
    PARENT,
};

