#pragma once
#include "Engine.h"
#include "CollectionVoiceNew.generated.h"

USTRUCT()
struct DUCK_API FCollectionVoiceNew {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CueID;
    
    FCollectionVoiceNew();
};

