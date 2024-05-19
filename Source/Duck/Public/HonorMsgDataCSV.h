#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "HonorMsgDataCSV.generated.h"

USTRUCT()
struct DUCK_API FHonorMsgDataCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HonorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HowToGet;
    
    FHonorMsgDataCSV();
};

