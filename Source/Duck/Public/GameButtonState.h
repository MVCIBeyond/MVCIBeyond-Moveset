#pragma once
#include "Engine.h"
#include "GameButtonState.generated.h"

UENUM()
enum class GameButtonState : uint8 {
    Press,
    PressTrg,
    Release,
    ReleaseTrg,
    _Invalid,
};

