#pragma once
#include "Engine.h"
#include "CommandAssetParaN.h"
#include "CommandAssetParaSub.generated.h"

USTRUCT()
struct DUCK_API FCommandAssetParaSub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommandAssetParaN> CommandSub;
    
    FCommandAssetParaSub();
};

