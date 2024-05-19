#pragma once
#include "Engine.h"
#include "ECharacterAssetCollisionType.generated.h"

UENUM()
enum class ECharacterAssetCollisionType : uint8 {
    NONE,
    HEAD,
    BODY,
    LEG,
    ATTACK,
    CATCH,
    CAUGHT,
    PUSH,
    ATEMI,
};

