#pragma once
#include "Engine.h"
#include "EBattleFlow.generated.h"

UENUM()
enum class EBattleFlow : uint8 {
    INIT,
    WAIT,
    APPEAR,
    READY,
    NOW,
    NEXT,
    END,
    WIPE_WAIT,
    WIPE,
    WIN,
    FINISH,
    DUMMY,
    CAPT_WAIT,
};

