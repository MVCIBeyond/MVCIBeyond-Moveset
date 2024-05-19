#pragma once
#include "Engine.h"
#include "DuckKPIFirstPlay.h"
#include "DuckKPIMode.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIMode : public FDuckKPIFirstPlay {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Count;
    
    FDuckKPIMode();
};

