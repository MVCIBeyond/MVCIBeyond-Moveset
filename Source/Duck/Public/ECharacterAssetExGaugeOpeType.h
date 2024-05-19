#pragma once
#include "Engine.h"
#include "ECharacterAssetExGaugeOpeType.generated.h"

UENUM()
enum class ECharacterAssetExGaugeOpeType : uint8 {
    NOP,
    SET,
    ADD,
    MULTIPLY,
};

