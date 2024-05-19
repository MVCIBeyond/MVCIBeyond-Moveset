#pragma once
#include "Engine.h"
#include "GlobalParamCombo.generated.h"

USTRUCT()
struct DUCK_API FGlobalParamCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjustRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageRatio;
    
    FGlobalParamCombo();
};

