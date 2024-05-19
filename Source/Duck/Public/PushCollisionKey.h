#pragma once
#include "Engine.h"
#include "CharacterAssetKeyDetails.h"
#include "PushCollisionKey.generated.h"

USTRUCT()
struct DUCK_API FPushCollisionKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionListIndex;
    
    FPushCollisionKey();
};

