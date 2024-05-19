#pragma once
#include "Engine.h"
#include "EFinishType.generated.h"

UENUM()
enum class EFinishType : uint8 {
    TYPE_NONE,
    TYPE_NORMAL,
    TYPE_KEZURI,
    TYPE_TIMEUP,
    TYPE_DRAW,
    TYPE_HYPER,
    TYPE_PERFECT,
};

