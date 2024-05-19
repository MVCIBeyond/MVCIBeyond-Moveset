#pragma once
#include "Engine.h"
#include "EUIInputTypePG.generated.h"

UENUM()
enum class EUIInputTypePG : uint8 {
    Left,
    Right,
    Up,
    Down,
    Decide,
    Cancel,
};

