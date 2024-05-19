#pragma once
#include "Engine.h"
#include "EConfigBreakFall.generated.h"

UENUM()
enum class EConfigBreakFall : uint8 {
    DIR_N,
    DIR_F,
    DIR_FU,
    DIR_U,
    DIR_BU,
    DIR_B,
    DIR_BD,
    DIR_D,
    DIR_FD,
    RANDOM,
};

