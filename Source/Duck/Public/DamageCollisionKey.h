#pragma once
#include "Engine.h"
#include "CharacterAssetKeyDetails.h"
#include "DamageCollisionKey.generated.h"

USTRUCT()
struct DUCK_API FDamageCollisionKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionListIndex;
    
    FDamageCollisionKey();
};

