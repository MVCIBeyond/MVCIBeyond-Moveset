#pragma once
#include "Engine.h"
#include "ECharacterAssetUParamOpeType.generated.h"

UENUM()
enum class ECharacterAssetUParamOpeType : uint8 {
    SET,
    ADD,
    AND,
    OR,
    XOR,
};

