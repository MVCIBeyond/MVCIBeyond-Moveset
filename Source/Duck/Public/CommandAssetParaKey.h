#pragma once
#include "Engine.h"
#include "ECommandAssetCond.h"
#include "CommandAssetParaKey.generated.h"

USTRUCT()
struct DUCK_API FCommandAssetParaKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandAssetCond KeyCond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandAssetCond LeverCond;
    
    FCommandAssetParaKey();
};

