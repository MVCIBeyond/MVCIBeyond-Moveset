#pragma once
#include "Engine.h"
#include "EUIInputUserTypePG.generated.h"

UENUM()
enum class EUIInputUserTypePG : uint8 {
    DialogNormal,
    DialogError,
    Reward,
    Etc,
};

