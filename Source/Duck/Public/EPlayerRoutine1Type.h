#pragma once
#include "Engine.h"
#include "EPlayerRoutine1Type.generated.h"

UENUM()
enum class EPlayerRoutine1Type : uint8 {
    PL_NORM,
    PL_CATCH,
    PL_HOLD,
    PL_DAMAGE,
};

