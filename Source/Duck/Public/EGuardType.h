#pragma once
#include "Engine.h"
#include "EGuardType.generated.h"

UENUM()
enum class EGuardType : uint8 {
    GD_ALL,
    GD_LOW,
    GD_HIGH,
    GD_IGNORE,
};

