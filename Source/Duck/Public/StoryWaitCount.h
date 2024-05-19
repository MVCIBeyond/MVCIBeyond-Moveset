#pragma once
#include "Engine.h"
#include "StoryWaitCount.generated.h"

USTRUCT()
struct DUCK_API FStoryWaitCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupBit;
    
    FStoryWaitCount();
};

