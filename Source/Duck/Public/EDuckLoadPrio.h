#pragma once
#include "Engine.h"
#include "EDuckLoadPrio.generated.h"

UENUM()
enum class EDuckLoadPrio : uint8 {
    DUCK_LOAD_PRIO_LOW,
    DUCK_LOAD_PRIO_MID,
    DUCK_LOAD_PRIO_HIGH,
};

