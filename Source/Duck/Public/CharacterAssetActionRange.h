#pragma once
#include "Engine.h"
#include "CharacterAssetActionRange.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetActionRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 BACK;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Front;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Bottom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Top;
    
    FCharacterAssetActionRange();
};

