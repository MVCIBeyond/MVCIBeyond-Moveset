#pragma once
#include "Engine.h"
#include "EBattleSettingHandicap.generated.h"

UENUM()
enum class EBattleSettingHandicap : uint8 {
    HANDICAP_LOWEST,
    HANDICAP_LOW,
    HANDICAP_MEDIUM,
    HANDICAP_HIGH,
    HANDICAP_HIGHEST,
};

