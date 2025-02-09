#pragma once
#include "Engine.h"
#include "EStorySkipResult.generated.h"

UENUM()
enum class EStorySkipResult : uint8 {
    STORY_SKIP_RESULT_BATTLE,
    STORY_SKIP_RESULT_MOVIE,
    STORY_SKIP_RESULT_END,
    STORY_SKIP_RESULT_CREDIT,
};

