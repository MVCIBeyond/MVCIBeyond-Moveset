#pragma once
#include "Engine.h"
#include "EConfigReadyType.generated.h"

UENUM()
enum class EConfigReadyType : uint8 {
    NONE,
    ROUND,
    READY,
};

