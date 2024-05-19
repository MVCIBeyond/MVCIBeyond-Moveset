#pragma once
#include "Engine.h"
#include "EAutoMatchType_UI.generated.h"

UENUM()
enum class EAutoMatchType_UI : uint8 {
    Off,
    RankMatch,
    CasualMatch,
    Rookies,
    RankCasual,
};

