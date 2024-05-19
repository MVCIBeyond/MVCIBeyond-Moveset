#pragma once
#include "Engine.h"
#include "EStorySetOperation.generated.h"

UENUM()
enum class EStorySetOperation : uint8 {
    SET,
    WAIT_TIME,
    WAIT_VITAL,
    WAIT_COUNT,
    LOOP,
};

