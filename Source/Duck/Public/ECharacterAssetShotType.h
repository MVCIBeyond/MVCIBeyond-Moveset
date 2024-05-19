#pragma once
#include "Engine.h"
#include "ECharacterAssetShotType.generated.h"

UENUM()
enum class ECharacterAssetShotType : uint8 {
    NORMAL,
    BEAM,
    MODEL,
    DOUBLE,
    OUROBOROS,
    REALITY_GEM,
    REALITY_BEAM,
    REALITY_SURGE,
    PARTNER,
};

