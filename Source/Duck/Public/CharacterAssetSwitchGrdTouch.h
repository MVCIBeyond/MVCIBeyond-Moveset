#pragma once
#include "Engine.h"
#include "CharacterAssetSwitchGrdTouch.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetSwitchGrdTouch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightFootOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftFootOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftFoot;
    
    FCharacterAssetSwitchGrdTouch();
};

