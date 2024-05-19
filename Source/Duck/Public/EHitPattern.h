#pragma once
#include "Engine.h"
#include "EHitPattern.generated.h"

UENUM()
enum class EHitPattern : uint8 {
    Attack,
    Damage,
    Push,
    Unique,
};

