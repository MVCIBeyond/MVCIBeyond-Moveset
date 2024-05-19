#pragma once
#include "Engine.h"
#include "ECharacterAssetMergeTarget.generated.h"

UENUM()
enum class ECharacterAssetMergeTarget : uint8 {
    OBJECT,
    CAMERA,
    FACIAL,
};

