#pragma once
#include "Engine.h"
#include "ECharacterAssetEventTargetType.generated.h"

UENUM()
enum class ECharacterAssetEventTargetType : uint8 {
    OWNER,
    OWNER_MASTER,
    RIVAL_MASTER,
    HIT_TARGET,
    LOCK_TARGET,
};

