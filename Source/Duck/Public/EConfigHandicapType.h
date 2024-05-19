#pragma once
#include "Engine.h"
#include "EConfigHandicapType.generated.h"

UENUM()
enum class EConfigHandicapType : uint8 {
    LOWEST,
    LOW,
    MEDIUM,
    HIGH,
    HIGHEST,
};

