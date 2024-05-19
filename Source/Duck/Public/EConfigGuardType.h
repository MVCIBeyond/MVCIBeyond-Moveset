#pragma once
#include "Engine.h"
#include "EConfigGuardType.generated.h"

UENUM()
enum class EConfigGuardType : uint8 {
    NONE,
    AUTO,
    ALL,
    ALL_MID_HI,
    ALL_LOW_HI,
    ALL_LOW,
    RANDOM,
};

