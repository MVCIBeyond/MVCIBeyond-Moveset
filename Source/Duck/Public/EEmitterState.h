#pragma once
#include "Engine.h"
#include "EEmitterState.generated.h"

UENUM()
enum class EEmitterState : uint8 {
    SPAWNING,
    CANCELING,
    DELETELING,
    KILL,
    RESTORING,
};

