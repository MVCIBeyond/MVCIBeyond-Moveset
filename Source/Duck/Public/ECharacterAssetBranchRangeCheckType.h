#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchRangeCheckType.generated.h"

UENUM()
enum class ECharacterAssetBranchRangeCheckType : uint8 {
    UNKNOWN,
    MASTER_GE,
    MASTER_LE,
    PARTNER_GE,
    PARTNER_LE,
    ANYONE_GE,
    ANYONE_LE,
};

