#pragma once
#include "Engine.h"
#include "ECharacterAssetValidPlane.generated.h"

UENUM()
enum class ECharacterAssetValidPlane : uint8 {
    NONE,
    XY,
    YZ,
    ZX,
};

