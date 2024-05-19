#pragma once
#include "Engine.h"
#include "EWinType.generated.h"

UENUM()
enum class EWinType : uint8 {
    TYPE_NONE,
    TYPE_KO,
    TYPE_TIMEOVER,
    TYPE_CLEAR,
    TYPE_FAIL,
    TYPE_WIN,
    TYPE_LOSE,
};

