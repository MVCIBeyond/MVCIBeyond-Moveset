#pragma once
#include "Engine.h"
#include "AnimSequenceList.generated.h"

class UAnimSequenceBase;

USTRUCT()
struct DUCK_API FAnimSequenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AnimSeqList;
    
    FAnimSequenceList();
};

