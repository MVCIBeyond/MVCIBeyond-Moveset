#pragma once
#include "Engine.h"
#include "ECharacterAssetSteerValType.generated.h"

UENUM()
enum class ECharacterAssetSteerValType : uint8 {
    VELOCITY_X,
    VELOCITY_Y,
    VELOCITY_Z,
    ACCELERATION_X,
    ACCELERATION_Y,
    ACCELERATION_Z,
};

