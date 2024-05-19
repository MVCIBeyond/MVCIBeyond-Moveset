#pragma once
#include "Engine.h"
#include "DuckKPIArcadeProgress.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIArcadeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ClearCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DeathCount;
    
    FDuckKPIArcadeProgress();
};

