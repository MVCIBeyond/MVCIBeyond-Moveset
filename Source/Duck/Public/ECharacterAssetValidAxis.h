#pragma once
#include "Engine.h"
#include "ECharacterAssetValidAxis.generated.h"

UENUM()
enum class ECharacterAssetValidAxis : uint8 {
    NONE,
    X,
    Y,
    XY,
    Z,
    XZ,
    YZ,
    XYZ,
};

