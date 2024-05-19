#pragma once
#include "Engine.h"
#include "DuckKPILocalVS.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPILocalVS {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Versus2PCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> GemUseCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> CharacterUseCount;
    
    FDuckKPILocalVS();
};

