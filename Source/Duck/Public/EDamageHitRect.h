#pragma once
#include "Engine.h"
#include "EDamageHitRect.generated.h"

UENUM()
enum class EDamageHitRect : uint8 {
    Head,
    Body,
    Leg,
    Caught,
};

