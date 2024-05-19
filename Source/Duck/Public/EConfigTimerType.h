#pragma once
#include "Engine.h"
#include "EConfigTimerType.generated.h"

UENUM()
enum class EConfigTimerType : uint8 {
    COUNT_NONE,
    COUNT_INF,
    COUNT_99,
    COUNT_60,
    COUNT_30,
};

