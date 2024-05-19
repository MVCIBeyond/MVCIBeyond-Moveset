#pragma once
#include "Engine.h"
#include "EAttackHitRect.generated.h"

UENUM()
enum class EAttackHitRect : uint8 {
    Attack,
    Catch,
    Atemi,
};

