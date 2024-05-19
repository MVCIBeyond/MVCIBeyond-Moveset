#pragma once
#include "Engine.h"
#include "ECharacterAssetPlaceAddPosAxis.h"
#include "CharacterAssetPlaceAddPos.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetPlaceAddPos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetPlaceAddPosAxis Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    FCharacterAssetPlaceAddPos();
};

