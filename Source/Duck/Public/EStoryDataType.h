#pragma once
#include "Engine.h"
#include "EStoryDataType.generated.h"

UENUM()
enum class EStoryDataType : uint8 {
    STORY_DATA_PLAYING,
    STORY_DATA_LOADING,
};

