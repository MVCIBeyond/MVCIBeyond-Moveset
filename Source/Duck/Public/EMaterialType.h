#pragma once
#include "Engine.h"
#include "EMaterialType.generated.h"

UENUM()
enum class EMaterialType : uint8 {
    DEFAULT,
    BODY,
    METAL,
    NO_SOUND,
};

