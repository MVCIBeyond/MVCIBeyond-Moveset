#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchKeyActionSP.generated.h"

UENUM()
enum class ECharacterAssetBranchKeyActionSP : uint8 {
    NONE,
    SUPER_JUMP,
    SUPER_JUMP_AIR,
    NORMAL_JUMP,
    NORMAL_JUMP_AIR,
};

