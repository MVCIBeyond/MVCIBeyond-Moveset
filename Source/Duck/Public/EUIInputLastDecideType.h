#pragma once
#include "Engine.h"
#include "EUIInputLastDecideType.generated.h"

UENUM()
enum class EUIInputLastDecideType : uint8 {
    Invalid,
    Pad,
    Keyboard_Mouse,
    Num,
};

