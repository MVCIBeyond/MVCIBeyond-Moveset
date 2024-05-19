#pragma once
#include "Engine.h"
#include "CollectionArtwarkNew.generated.h"

USTRUCT()
struct DUCK_API FCollectionArtwarkNew {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArtWorkID;
    
    FCollectionArtwarkNew();
};

