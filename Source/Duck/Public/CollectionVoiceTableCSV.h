#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "CollectionVoiceTableCSV.generated.h"

USTRUCT()
struct DUCK_API FCollectionVoiceTableCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectorID;
    
    FCollectionVoiceTableCSV();
};

