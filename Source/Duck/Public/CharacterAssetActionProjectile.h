#pragma once
#include "Engine.h"
#include "CharacterAssetActionProjectile.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetActionProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
    FCharacterAssetActionProjectile();
};

