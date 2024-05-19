#pragma once
#include "Engine.h"
#include "CharacterAssetMapping.h"
#include "CharacterAssetMappingArray.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetMappingArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMapping> Element;
    
    FCharacterAssetMappingArray();
};

