#pragma once
#include "Engine.h"
#include "ECharacterAssetVfxOperation.generated.h"

UENUM()
enum class ECharacterAssetVfxOperation : uint8 {
    Spawn,
    Cancel,
    Delete,
    Reset,
};

