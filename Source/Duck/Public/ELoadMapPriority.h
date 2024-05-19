#pragma once
#include "Engine.h"
#include "ELoadMapPriority.generated.h"

UENUM()
enum class ELoadMapPriority : uint8 {
    LOAD_MAP_PRIORITY_NORMAL,
    LOAD_MAP_PRIORITY_HIGH,
    LOAD_MAP_PRIORITY_CRITICAL,
};

