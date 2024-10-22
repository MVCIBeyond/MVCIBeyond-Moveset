#pragma once
#include "Engine.h"
#include "DuckKPICostume.h"
#include "DuckKPICharaUsage.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPICharaUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckKPICostume> Costume;
    
    FDuckKPICharaUsage();
};

