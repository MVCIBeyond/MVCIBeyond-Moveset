#pragma once
#include "Engine.h"
#include "EStorySetOperation.h"
#include "StorySetType.generated.h"

USTRUCT()
struct DUCK_API FStorySetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStorySetOperation Type;
    
    FStorySetType();
};

