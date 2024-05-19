#pragma once
#include "Engine.h"
#include "EDuckAnimNodeType.generated.h"

UENUM()
enum class EDuckAnimNodeType : uint8 {
    NON,
    MOTION,
    BLEND,
    FACIAL,
};

