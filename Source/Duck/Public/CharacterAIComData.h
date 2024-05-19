#pragma once
#include "Engine.h"
#include "ECharacterAIAssetSLContinue.h"
#include "ECharacterAIAssetSLType.h"
#include "CharacterAIComData.generated.h"

USTRUCT()
struct DUCK_API FCharacterAIComData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAssetSLContinue SLContinueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAssetSLType CommandParam;
    
    FCharacterAIComData();
};

