#pragma once
#include "Engine.h"
#include "EConfigRecoveryType.generated.h"

UENUM()
enum class EConfigRecoveryType : uint8 {
    NONE,
    FORWARD,
    BACK,
    RANDOM,
};

