#pragma once
#include "Engine.h"
#include "CharacterAssetCmdGrpSelTrg.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetCmdGrpSelTrg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    FCharacterAssetCmdGrpSelTrg();
};

