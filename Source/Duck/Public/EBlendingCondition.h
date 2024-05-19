#pragma once
#include "Engine.h"
#include "EBlendingCondition.generated.h"

UENUM()
enum class EBlendingCondition : uint8 {
    ALWAYS,
    COMMON_MOTION,
    NON_COMMON_MOTION,
};

