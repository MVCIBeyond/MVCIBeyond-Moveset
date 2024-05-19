#pragma once
#include "Engine.h"
#include "EStoryInfoType.generated.h"

UENUM()
enum class EStoryInfoType : uint8 {
    NONE,
    BATTLE,
    SEQUENCER,
    MOVIE,
};

