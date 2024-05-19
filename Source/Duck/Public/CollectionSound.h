#pragma once
#include "Engine.h"
#include "CollectionSound.generated.h"

class USoundAtomCueSheet;

USTRUCT()
struct DUCK_API FCollectionSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetOrigin;
    
    FCollectionSound();
};

