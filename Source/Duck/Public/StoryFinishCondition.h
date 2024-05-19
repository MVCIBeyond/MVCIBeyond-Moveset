#pragma once
#include "Engine.h"
#include "EConfigFinishCond.h"
#include "StoryFinishCondition.generated.h"

USTRUCT()
struct DUCK_API FStoryFinishCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConfigFinishCond Type;
    
    FStoryFinishCondition();
};

