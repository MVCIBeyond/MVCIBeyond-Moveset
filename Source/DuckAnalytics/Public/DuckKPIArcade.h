#pragma once
#include "Engine.h"
#include "DuckKPIArcadeProgress.h"
#include "DuckKPIArcade.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIArcade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckKPIArcadeProgress> Progress;
    
    FDuckKPIArcade();
};

