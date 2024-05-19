#pragma once
#include "Engine.h"
#include "EMissionCheckType.generated.h"

UENUM()
enum class EMissionCheckType : uint8 {
    COMBO_ACTION_CHECK,
    ACTION_CHECK,
    TRIGGER_CHECK,
    TOUCH_CHECK,
};

