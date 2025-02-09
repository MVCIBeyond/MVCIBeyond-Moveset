#pragma once
#include "Engine.h"
#include "EConfigFinishCond.generated.h"

UENUM()
enum class EConfigFinishCond : uint8 {
    NONE,
    TIMER_COUNT,
    TEAM_VITAL,
    VS_TOTAL_VITAL,
    KILL_COUNT,
    EX_GAUGE,
    COMPLETE_MISSION,
    EXTINCTION,
};

