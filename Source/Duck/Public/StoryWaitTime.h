#pragma once
#include "Engine.h"
#include "StoryWaitTime.generated.h"

USTRUCT()
struct DUCK_API FStoryWaitTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FStoryWaitTime();
};

