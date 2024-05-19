#pragma once
#include "Engine.h"
#include "EMovieFadeInType.generated.h"

UENUM()
enum class EMovieFadeInType : uint8 {
    NONE,
    BLACK_10F,
    BLACK_20F,
    BLACK_30F,
    WHITE_10F,
    WHITE_20F,
    WHITE_30F,
};

