#pragma once
#include "Engine.h"
#include "InGameRewardParam.generated.h"

USTRUCT()
struct FInGameRewardParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Honors[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Colors[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfBGs;
    
    DUCK_API FInGameRewardParam();
};

