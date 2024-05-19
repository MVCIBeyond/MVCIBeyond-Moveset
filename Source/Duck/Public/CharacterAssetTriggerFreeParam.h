#pragma once
#include "Engine.h"
#include "CharacterAssetTriggerFreeParam.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetTriggerFreeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param[4];
    
    FCharacterAssetTriggerFreeParam();
};

