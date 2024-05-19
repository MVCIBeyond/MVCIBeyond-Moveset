#pragma once
#include "Engine.h"
#include "DuckKPIFirstPlay.h"
#include "DuckKPIChapter.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIChapter : public FDuckKPIFirstPlay {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ClearCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DeathCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MovieSkipCount;
    
    FDuckKPIChapter();
};

