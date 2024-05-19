#pragma once
#include "Engine.h"
#include "EChargeAssetType.generated.h"

UENUM()
enum class EChargeAssetType : uint8 {
    NORMAL,
    CHARGE,
    ROTATE,
    RAPID,
};

