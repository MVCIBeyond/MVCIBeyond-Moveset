#pragma once
#include "Engine.h"
#include "ECharacterAssetSwitchDoubleOperation.generated.h"

UENUM()
enum class ECharacterAssetSwitchDoubleOperation : uint8 {
    OPE_NONE,
    DELETE_,
    DISP_ON,
    DISP_OFF,
};

