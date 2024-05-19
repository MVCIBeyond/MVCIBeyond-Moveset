#pragma once
#include "Engine.h"
#include "ECharacterAssetShotOperation.generated.h"

UENUM()
enum class ECharacterAssetShotOperation : uint8 {
    SPAWN,
    CANCEL,
    DELETE_,
};

