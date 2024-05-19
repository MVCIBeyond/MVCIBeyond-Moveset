#pragma once
#include "Engine.h"
#include "EScrollEventType.generated.h"

UENUM()
enum class EScrollEventType : uint8 {
    EVENT_NONE,
    VIBRATION,
    HYPER_COMBO,
    BATTLE_FINISH,
    BATTLE_START,
};

