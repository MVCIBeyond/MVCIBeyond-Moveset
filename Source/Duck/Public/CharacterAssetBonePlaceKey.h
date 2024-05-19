#pragma once
#include "Engine.h"
#include "CharacterAssetBonePlaceInfo.h"
#include "CharacterAssetKeyDetails.h"
#include "CharacterAssetPlaceAddPos.h"
#include "CharacterAssetBonePlaceKey.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetBonePlaceKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetBonePlaceInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetPlaceAddPos> AddPos;
    
    FCharacterAssetBonePlaceKey();
};

