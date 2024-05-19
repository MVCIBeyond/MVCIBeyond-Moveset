#pragma once
#include "Engine.h"
#include "ERecordState.generated.h"

UENUM()
enum class ERecordState : uint8 {
    NONE,
    RECORD,
    PLAY,
    PLAY_RANDOM,
};

