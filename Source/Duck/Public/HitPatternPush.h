#pragma once
#include "Engine.h"
#include "HitPatternPush.generated.h"

USTRUCT()
struct DUCK_API FHitPatternPush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PushList;
    
    FHitPatternPush();
};

