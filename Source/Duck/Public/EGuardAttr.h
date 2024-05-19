#pragma once
#include "Engine.h"
#include "EGuardAttr.generated.h"

UENUM()
enum class EGuardAttr : uint8 {
    ATTR_NONE,
    ATTR_UP,
    ATTR_MID,
    ATTR_LOW,
    ATTR_THROW,
    ATTR_IGNORE,
};

