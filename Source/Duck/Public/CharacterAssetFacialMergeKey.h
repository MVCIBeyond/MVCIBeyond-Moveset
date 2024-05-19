#pragma once
#include "Engine.h"
#include "CharacterAssetKeyDetails.h"
#include "ECharacterAssetMergeType.h"
#include "CharacterAssetFacialMergeKey.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetFacialMergeKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPoseMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlaceMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetMergeType Type;
    
    FCharacterAssetFacialMergeKey();
};

