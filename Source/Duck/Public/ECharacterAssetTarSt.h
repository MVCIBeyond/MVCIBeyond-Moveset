#pragma once
#include "Engine.h"
#include "ECharacterAssetTarSt.generated.h"

UENUM()
enum class ECharacterAssetTarSt : uint8 {
    Stand,
    Crouch,
    Air,
    Down,
    Hit,
    Guard,
    Attack,
};

