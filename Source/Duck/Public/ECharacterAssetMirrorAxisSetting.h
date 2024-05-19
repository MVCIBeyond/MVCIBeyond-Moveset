#pragma once
#include "Engine.h"
#include "ECharacterAssetMirrorAxisSetting.generated.h"

UENUM()
enum class ECharacterAssetMirrorAxisSetting : uint8 {
    NONE,
    X_YZ,
    Y_ZX,
    Z_XY,
};

