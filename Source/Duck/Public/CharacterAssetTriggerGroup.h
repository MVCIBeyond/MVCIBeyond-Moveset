#pragma once
#include "Engine.h"
#include "CharacterAssetTrgGrpSelTrg.h"
#include "CharacterAssetTriggerGroup.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetTriggerGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetTrgGrpSelTrg> SelectTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FCharacterAssetTriggerGroup();
};

