#pragma once
#include "Engine.h"
#include "InGameRewardParam.h"
#include "InGameReward.generated.h"

USTRUCT()
struct DUCK_API FInGameReward {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInGameRewardParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
public:
    FInGameReward();
};

