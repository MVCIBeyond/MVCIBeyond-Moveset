#pragma once
#include "Engine.h"
#include "StoryWaitVital.generated.h"

USTRUCT()
struct DUCK_API FStoryWaitVital {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetIndexBit;
    
    FStoryWaitVital();
};

