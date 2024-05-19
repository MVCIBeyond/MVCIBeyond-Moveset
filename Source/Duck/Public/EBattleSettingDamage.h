#pragma once
#include "Engine.h"
#include "EBattleSettingDamage.generated.h"

UENUM()
enum class EBattleSettingDamage : uint8 {
    DAMAGE_LOWEST,
    DAMAGE_LOW,
    DAMAGE_MEDIUM,
    DAMAGE_HIGH,
    DAMAGE_HIGHEST,
};

