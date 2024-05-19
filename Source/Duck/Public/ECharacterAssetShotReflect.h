#pragma once
#include "Engine.h"
#include "ECharacterAssetShotReflect.generated.h"

UENUM()
enum class ECharacterAssetShotReflect : uint8 {
    NOT_REFLECT,
    HIT_DELETE,
    DAMAGE_DELETE,
    NATURAL_DELETE,
    INSTANT_DELETE,
    HIT_COUNT_ZERO,
    AXIS_NONE,
    AXIS_X,
    AXIS_Y,
    AXIS_Y_G,
    AXIS_XY,
    AXIS_XY_G,
    AXIS_Y_G_FLIP,
    AXIS_XY_G_FLIP,
};

