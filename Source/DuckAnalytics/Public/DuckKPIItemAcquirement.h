#pragma once
#include "Engine.h"
#include "DuckKPIItemAcquirement.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIItemAcquirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCardAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Has3PColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Has4PColor;
    
    FDuckKPIItemAcquirement();
};

