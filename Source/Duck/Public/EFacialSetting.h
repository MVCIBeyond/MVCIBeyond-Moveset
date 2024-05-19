#pragma once
#include "Engine.h"
#include "EFacialSetting.generated.h"

UENUM()
enum class EFacialSetting : uint8 {
    DEFAULT,
    CONTAIN_BODY,
    USE_FACIAL,
};

