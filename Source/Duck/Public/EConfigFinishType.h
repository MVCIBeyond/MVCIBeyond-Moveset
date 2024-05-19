#pragma once
#include "Engine.h"
#include "EConfigFinishType.generated.h"

UENUM()
enum class EConfigFinishType : uint8 {
    NONE,
    KO,
    MSN_CLEARED,
    MSN_FAILED,
    STORY_CLEARED,
    STORY_FAILED,
};

