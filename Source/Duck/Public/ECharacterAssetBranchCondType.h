#pragma once
#include "Engine.h"
#include "ECharacterAssetBranchCondType.generated.h"

UENUM()
enum class ECharacterAssetBranchCondType : uint8 {
    EQUAL,
    NOT_EQUAL,
    LESS_THAN,
    GREATER_THAN,
};

