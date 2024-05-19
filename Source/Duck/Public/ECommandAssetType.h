#pragma once
#include "Engine.h"
#include "ECommandAssetType.generated.h"

UENUM()
enum class ECommandAssetType : uint8 {
    NORMAL,
    CHARGE,
    ROTATE,
    RAPID,
};

