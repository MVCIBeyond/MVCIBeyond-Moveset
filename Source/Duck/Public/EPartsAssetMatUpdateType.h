#pragma once
#include "Engine.h"
#include "EPartsAssetMatUpdateType.generated.h"

UENUM()
enum class EPartsAssetMatUpdateType : uint8 {
    ALL_UPDATE,
    ONLY_COMMON,
    ONLY_GIMMICK,
    NON_UPDATE,
};

