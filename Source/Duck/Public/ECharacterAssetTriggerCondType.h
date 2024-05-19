#pragma once
#include "Engine.h"
#include "ECharacterAssetTriggerCondType.generated.h"

UENUM()
enum class ECharacterAssetTriggerCondType : uint8 {
    NONE,
    LESS_THAN,
    GREATER_THAN,
};

