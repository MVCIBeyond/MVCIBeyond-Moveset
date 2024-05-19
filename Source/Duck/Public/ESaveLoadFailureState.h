#pragma once
#include "Engine.h"
#include "ESaveLoadFailureState.generated.h"

UENUM()
enum class ESaveLoadFailureState : uint8 {
    Selecting,
    DecideRetry,
    DecideIgnore,
};

