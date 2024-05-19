#pragma once
#include "Engine.h"
#include "EConfigDamageLevel.generated.h"

UENUM()
enum class EConfigDamageLevel : uint8 {
    LOWEST,
    LOW,
    MEDIUM,
    HIGH,
    HIGHEST,
};

