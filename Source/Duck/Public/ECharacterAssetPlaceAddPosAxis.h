#pragma once
#include "Engine.h"
#include "ECharacterAssetPlaceAddPosAxis.generated.h"

UENUM()
enum class ECharacterAssetPlaceAddPosAxis : uint8 {
    NONE,
    X,
    Y,
    Z,
    XY,
    YZ,
    XZ,
    XYZ,
};

